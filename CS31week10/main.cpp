#include <iostream>
using namespace std;

class Point
{
  public:
    Point(double x, double y) {
      m_px = x;
      m_py = y;
    }

  private:
    double m_px, m_py;
};

class Circle
{
  public:
    Circle();
    Circle(double x, double y, double r);
    ~Circle();
    double getRadius() const;
    void addPoints(double px, double py);

  private:
    double m_x, m_y, m_r;
    Point* pointList[100];
    int m_np;
};

// constructor with argument
Circle::Circle(double x, double y, double r)
{
  m_x = x;
  m_y = y;
  m_r = r;
  m_np = 0;
  if (r < 0) {
    cerr << "radius should be non-negative!" << endl;
    exit(1);   //Exit Failure, means abnormal termination of program
  }
}

// constructor with NO argument
Circle::Circle()
{
  m_x = 0;
  m_y = 0;
  m_r = 1;
  m_np = 0;
}

// destructor
Circle::~Circle()
{
  m_x = 0;
  m_y = 0;
  m_r = 0;

  for(int k = 0; k < m_np; k++)
    delete pointList[k];
  m_np = 0;

  cout << "Circle is gone!" << endl;
}

// member function of Circle
double Circle::getRadius() const
{
  return m_r;
}

// member function of Circle
void Circle::addPoints(double px, double py)
{
  pointList[m_np] = new Point(px, py);
  m_np++;
}
// ================ end of circle class ================

double area(const Circle & c)
{
  double radius = c.getRadius();
  return c.getRadius()  * c.getRadius()  * 3.14;
}

void draw(const Circle & c)
{
  // draw a cricle
}

void draw(const Point & p)
{
  // draw a point
}

void draw(const Point & p1, const Point & p2)
{
  // draw a line connecting p1 and p2
}

int main() {
  Circle c1(2,2,5);
  Circle c2;

  Circle* cList1[100];
  //...
  cList1[0] = new Circle(1, 3, 10);
  cList1[1] = new Circle;
  delete cList1[1];
  cList1[1] = cList1[0];
  cout << area(*cList1[0]) << endl;
  cout << area(*cList1[1]) << endl;
  delete cList1[0];
  //delete cList1[1];


  Circle* cList2[100];
  int numCircle = 0;
  //...
  int upperLimit = numCircle + 5;
  for (int i = numCircle; i < upperLimit; i++) {
    cList2[i] = new Circle(i, i, 1);
    numCircle++;
  }
  //numCircle == 5
  for (int i = 0; i < numCircle; i++) {
    cout << area(*cList2[i]) << endl;
    delete cList2[i];
  }
  numCircle = 0;
  // memory leak actually happen here if we don't call delete on items in cList2!!!

  Point p1 = Point(2,4);
  Point p2 = Point(2,8);
  draw(c1);
  draw(p1);
  draw(p1, p2);

}