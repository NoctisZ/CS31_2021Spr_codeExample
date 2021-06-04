#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {
  ///////////////////
  //For loop example
  ///////////////////
  // string s = "He loves cats and dogs";
  // int spaceCtr = 0;
  // for (int i = 0; i < s.size(); i++)
  // {
  //     if (isspace(s.at(i)))
  //       spaceCtr++;
      
  //     i++;      
  // }
  // cout << spaceCtr << endl;

  int t = 4;
  t = '9' - '0';
  cout << t << endl;

  ///////////////////
  //Char and integer
  ///////////////////
  // char ch = '0';     // Let's say the code number for '0' is x  // code = 48
  // // ch++;              // now ch is '1' (x+1)   // code = 49, corresponds to '1'
  // // ch += 7;           // now ch is '8' (since (x+1)+7 is x+8)  //code = 56, corresponds to '8'
  // // int n = ch;        // n is the code number for '8' (i.e., x+8)
  // // int m = ch - '3';  //  '8' - '3'
  // //                     //    which is (x+8) - (x+3)
  // //                     //    which is 8 - 3
  // //                     //    so m is 5
  // ch *= 2;
  // cout << "ch = " << ch << endl;

}

/////////////////////////////
//Function Example
/////////////////////////////
// // Example 1
// int square(int n)
// {
//     return n*n;
// }

// int main()
// {
//     for (int k = 1; k <= 6; k++)
//         cout << square(k) << endl;
// }

// // Example 2
// int square(int n)
//     {
//         return n*n;
//     }

// int main()   
// {
    

//     cout << "Enter an integer: ";
//     int k;
//     cin >> k;
//     cout << "The square of " << k << " is " << square(k) << endl;
// }

// // Example 3
// int countChars(string s, char c)
// {
//     int total = 0;
//     for (int k = 0; k != s.size(); k++)
//     {
//         if (s.at(k) == c)
//             total++;
//     }
//     return total;
// }

// int main()
// {
//     cout << countChars("abracadabra", 'a') << endl;
//     int n = 10 * countChars("99 Cent Only", '9') + 5;
//     cout << n << endl;
//     cout << countChars("O Rose, thou art sick!", 'f') << endl;
// }


/////////////////////////////
//Reference Example
/////////////////////////////
// void swap(int & a, int & b) //int &a, int &b
// {
// 	int temp;
// 	temp = a;
// 	a = b;
// 	b = temp;
// }

// int main(void)
// {
//   int x = 10, y = 20;
//   swap(x, y);

//   cout << "x = " << x << endl;
//   cout << "y = " << y << endl;
// }


