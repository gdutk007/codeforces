#include <iostream>
#include <bits/stdc++.h>

using namespace std;


bool willImplement(){
   int count{0};
   for(int i = 0; i < 3; ++i){
      int tmp{0};
      cin >> tmp;
      count += tmp;
   }
   return count >= 2;
}

void readline(){
   int n{};
   int sol{};
   cin >> n;
   for(int i = 0; i < n; ++i){
      if(willImplement()){
         ++sol;
      }
   }
   cout << sol;
}

int main(){
   readline();
   return 0;
}