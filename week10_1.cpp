#include <iostream>
using namespace std;

double division(int a, int b) {
   if( b == 0 ) {
      throw "Division by zero condition!";
   }
   return (a/b);
}

int main () {
   int x = 50;
   int y = 0;
   double result = 0;
 
   try {
      result = division(x, y);
      cout << result << endl;
   } catch (const char* msg) {
     cerr << msg << endl;
   }

   return 0;
}
