#include <iostream>
#include <string>
using namespace std;

int main(){
   // according to problem max n is 100,000
   int n{0};
   string wins;
   cin >> n;
   cin >> wins;
   int Awins{0};
   int Dwins{0};

   for(auto & win : wins){
      if(win == 'A'){
         ++Awins;
      }else{
         ++Dwins;
      }
      if( Awins > n/2+1 || Dwins > n/2+1 ){
         break;
      }
   }
   
   if(Awins > Dwins){
      cout << "Anton";
   }else if (Dwins > Awins){
      cout << "Danik";
   }else{
      cout << "Friendship";
   }

   return 0;
}