#include <iostream>
#include <string>
#include <math.h>
using namespace std;

/////////////////////////////
//Function Variable Example
/////////////////////////////

// // global variable
// int g = 0;

// // declare of functions
// int multiply(int n);
// void addition();

// int main() {
//   cout << "g = " << g << endl;

//   g = 2;
//   cout << "n * g = " << multiply(5) << endl;

//   addition();
//   addition();
// }

// // definition of functions
// int multiply(int n) {
//   return n * g;
// }

// void addition() {
//   static int s = 0;
//   s = s + g;
//   cout << "s = " << s << endl;
// }



/////////////////////////////
//Array Example
/////////////////////////////

double test(double s[]) {
  s[0] = 100;
  return s[0];
}

int main() {
  // double score[5] = {1.5, 2.5, 3.5, 4.5, 5.5};
  double score[5];
  double c = 1.5;

  for(int i = 0; i < 5; i++)
    score[i] = c++;

  for(int j = 0; j < 5; j++)
    cout << score[j] << endl;

  test(score);

  for(int j = 0; j < 5; j++)
    cout << score[j] << endl;

  // cout << sizeof(score) << endl;
  // cout << sizeof(score[0]) << endl; // byte of each element
}

