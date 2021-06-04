// #include <iostream>
// using namespace std;

// class Circle
// {
//   public:
//     // Circle();
//     //Circle(double x, double y, double r);
//     double getRadius() const;
//     void initialize(double x, double y, double r);

//   private:
//     double m_x, m_y, m_r;
// };

// // constructor
// Circle::Circle(double x, double y, double r)
// {
//   m_x = x;
//   m_y = y;
//   m_r = r;
//   if (r < 0) {
//     cerr << "radius should be non-negative!" << endl;
//     exit(1);   //Exit Failure, means abnormal termination of program
//   }
// }

// // void Circle::initialize(double x, double y, double r)
// // {
// //   m_x = x;
// //   m_y = y;
// //   m_r = r;
// // }

// // member function of Circle
// double Circle::getRadius() const
// {
//   return m_r;
// }

// // int Circle::blah() const

// double area(const Circle & c)
// {
//   double radius = c.getRadius();
//   // int v = c.blah();
//   return c.getRadius()  * c.getRadius()  * 3.14;
// }

// int main() {
//   Circle c(-2, 5, -10);
//   // Circle c;
//   //c.initialize(-2, 5, 10);
//   c.getRadius();
//   cout << area(c);
// }


//********************************************
// Project 7 Q4 Test
#include <iostream>

using namespace std;

int* minimart(int* a, int* b)
{
    if (*a < *b)
        return a;
    else
        return b;
}

void swap1(int* a, int *b)
{
    int* temp = a;
    cout << "1. " << *a << " " << *b << " " << *temp << endl;
    a = b;
    b = temp;
    cout << "2. " << *a << " " << *b << " " << *temp << endl;
}

void swap2(int* a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int array[6] = { 5, 3, 4, 17, 22, 19 };

    // int* ptr = minimart(array, &array[2]);
    // ptr[1] = 9;
    // ptr += 2;
    // *ptr = -1;
    // *(array+1) = 79;

    // cout << "diff=" << &array[5] - ptr << endl;

    for (int i = 0; i < 6; i++)
        cout << array[i] << " ";
    cout << endl;
    swap1(&array[0], &array[1]);
    // swap2(array, &array[2]);

    for (int i = 0; i < 6; i++)
        cout << array[i] << " ";

    
} 


