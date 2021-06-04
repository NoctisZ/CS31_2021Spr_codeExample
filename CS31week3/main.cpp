#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {
  // "Ctrl" + "/" (in windows) to comment/uncomment code

  /*
  New Operators (eg. +=, /=, ++ and --)
  */
  int v = 10;
  v /= 4.6;
  cout << v << endl;

  string s = "hello there!";
  
  
  // int a = 1;
  // int b = 1;
  // cout << a++ << endl;
  // cout << ++b << endl;
  // cout << "a = " << a << endl;
  // cout << "b = " << b << endl;

  // int c = 3;
  // int d = 3;
  // cout << c-- << endl;
  // cout << --d << endl;
  // cout << "c = " << c << endl;
  // cout << "d = " << d << endl;

  // int x = 5, y;
  // y = ++x * 4;
  // cout << "y = " << y << endl;


  /////////////////////////////
  /*
  while loop and do-while loop
  */
  // int i = 0;
  // while (i < 10)
  // {
  //   cout << "$";
  //   i = i + 2;
  // }

  // int j = 100;
  // do 
  // {
  //   // code to execute MANY times if condition is met
  //   cout << "#";
  //   j /= 2;
  // }
  // while (j > 10);




  /////////////////////////////
  /*
  for-loop
  */
  // for (int i = 0; i < 3; i++)
  // {
  //   for (int j = i+1; j < 5; j++)
  //     cout << "0";
  //   cout << "1" << endl;
  // }

  // for (int i = 0, j = 0; i + j < 5; i++, j+=2)
  // {
  //   // after 2nd iteration: i = 2, j = 4, i + j = 6 > 5
  //   cout << "Today's Friday!" << endl;
  // }



  /////////////////////////////
  /*
  strings, characters and loop
  */
  // string s = "else";
  // string t = "";
  // string s2;
  // cout << s.size() << endl;     // return 5
  // cout << t.length() << endl;   // return 0
  // cout << s2.size() << endl;    // return 0
  // cout << s.at(1) << endl;
  // cout << s[1] << endl;

  // int eCounter = 0;
  // for (int i = 0; i != s.size(); i++) 
  // {
  //   if (s.at(i) == 'e' || s.at(i) == 'E')
  //     eCounter++;
  // }
  // cout << "# of E in string is: " << eCounter << endl;

}