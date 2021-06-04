#include <iostream>
#include <string>
#include <math.h>
using namespace std;

//*****************************************
// Basic pointer usage
//*****************************************
int main()
{
    int *iptr;
    string *sptr;

    int var1 = 2;
    string var2 = "class number is: ";

    iptr = &var1;
    sptr = &var2;

    cout << sptr << endl;
    cout << iptr << endl;
    cout << *sptr << *iptr << endl;
}



//*****************************************
// pointer arithmetic and use in loop
//*****************************************

// int *findLarger(int a[], int n, int target)
// {
//   for (int *p = a; p < a + n; p++)
//   {
//     if (*p > target)
//       return p;
//   }
//   return nullptr;
// }

// int main() 
// {
//   // int arr[5] = {10, 20, 30, 40, 50};
//   // int *ptr = arr;

//   // // *(ptr + 3) = 15;
//   // // cout << arr[3] << endl;

//   // int t = 60;
//   // int *p = findLarger(arr, 5, t);

//   // if (p == nullptr)
//   //   cout << "All elements are less than target!" << endl;
//   // else
//   //   cout << "First larger element is " << *p << " at position "
//   //   << (p - arr) << endl;
// }




