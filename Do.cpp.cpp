#include <iostream>
using namespace std;

int main () {
   // Local variable declaration:
   int a = 1;

   // while loop execution
   do {
      cout << "value of a: " << a << endl;
      a = a + 1;
   } while ( a < 10 );

   return 0;
}
