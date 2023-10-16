#include <iostream>

using namespace std;


int main(){
   double a{0.0};
   double b{0.0};
   int years{0};
   cin >> a;
   cin >> b;
   while(a <= b){
      a *= 3;
      b *= 2;
      ++years;
   }
   cout << years << "\n";
   return 0;
}