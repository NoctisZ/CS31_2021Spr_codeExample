#include <iostream>
#include <string>
#include <math.h>
using namespace std;


// // Example of pass array to function and 2D array usage
// int multiply(int arr[], int size);  // pass in 1D array

// int main() {
//   int table[3][3];  // 2d array
//   int r, c;

//   // populate a 2d array with values
//   for (r = 0; r < 3; r++)
//     for (c = 0; c < 3; c++)
//       table[r][c] = r + c;

//   cout << "1st row multiplication: " << multiply(table[0], 3) << endl;
//   cout << "2nd row multiplication: " << multiply(table[1], 3) << endl;
//   cout << "3rd row multiplication: " << multiply(table[2], 3) << endl;
// }

// // definition of functions
// int multiply(int arr[], int size) {
//   int result = 1;
//   for(int i = 0; i < size; i++)
//     result *= arr[i];
//   return result;
// }



// Example of pass 2D array to function
const int N = 4;
  
void print(int arr[][N], int m) // m is # of rows in 2d array
{
    for (int i = 0; i < m; i++) {
      for (int j = 0; j < N; j++) {
        cout << arr[i][j] << " ";
      }
      cout << endl;
    }
}
  
int main()
{
    int row = 5;
    int arr[][4] = {{1, 2, 3, 4}, {4, 5, 6, 6}, {7, 8, 9, 1}, {7, 8, 9, 1}, {7, 8, 9, 1}};
    print(arr, row);
}






