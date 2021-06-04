#include <iostream>
#include <string>
using namespace std;

int main() {
  // "Ctrl" + "/" (in windows) to comment/uncomment code

  /*
  cin and cout
  */
  // //take 1st string input
  // cout << "Please type your 1st string: ";
  // string s1;
  // getline(cin, s1);                      
  // cout << "Your 1st string is: \n";
  // cout << s1 << "\n";

  // // take int input
  // cout << "Please type your digit: ";
  // int i;
  // cin >> i;                            
  // cin.ignore(10000, '\n');
  // cout << "Your digit is: \n";
  // cout << i << endl;

  // // take 2nd string input
  // cout << "Please type your 2nd string: ";
  // string s2;
  // getline(cin, s2);           
  // cout << "Your 2nd string is: \n";
  // cout << s2 << endl;


  /////////////////////////////
  /*
  Arithmetic operations
  */
  // int a = 10;
  // int b = a*a;
  // int c = 25/(b-100);   // undefined behavior: division by 0
  // cout << c << endl;

  // int d = 1000;
  // int e = d * d * d;
  // int f = d * e;       // undefined behavior if ints are 4 bytes: result too big
  // cout << f << endl;

  // double g;
  // double h = 2 * g;    // undefined behavior: g is uninitialized
  // cout << h;
  

  /////////////////////////////
  /*
  Comparison operators
  */
  // double v1 = 3.0;
  // int v2 = 5;
  // cout << (v1 < v2) << endl;
  
  // string str1 = "hello";
  // string str2 = "hey";
  // string str3 = "";
  // cout << str3 << endl;

  // cout << (0 > 7) << endl;

  /////////////////////////////
  /*
  If-statement
  */
  // int num = 50;
  // int maxNum = 30;
  // int minNum = 10;

  // if (num > minNum)
  //   // code to execute for condition 1
  //   cout << "num is larger than minNum!" << endl;
  // else if (num > maxNum)
  //   // code to execute for condition 2
  //   cout << "num is the biggest number!" << endl;
  // else
  //   // code to execute if all above conditions fail
  //   cout << "something else" << endl;

  /*
  Switch statement
  */
  int id = 1;
  switch( id ) {
    case 1:     
    case 2:
      cout << "id is 1 or 2";
      break;      // break means leave the switch statement
      cout << "something" << endl;
    case 3:
      cout << "id is 3";
      break;
    case 4:
    case 5:
    case 6:
      cout << "id is 4, 5 or 6";
      break;
    default:    // if above conditions fail
      cout << "id is another number";
  } 
 
  // string name, major, hall;
  // cout << "Enter your name: ";
  // getline(cin, name);
  // cout << "\nEnter your UID: ";
  // int UID;
  // cin >> UID ;
  // cout << "\nEnter your Major: ";
  // getline(cin, major);
  // cout << "\nEnter your residence hall: ";
  // getline(cin, hall);
  // cout << "\n" << UID << " is the ID of " << name
  // <<", a " << major << " student who lives in " << hall << endl;

}