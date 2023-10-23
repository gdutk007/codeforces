#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void testCase(){
   int n{};
   cin >> n;
   vector<int> a;
   int dne{0};
   for(int i = 0; i < n; ++i){
      int d_i{};
      cin >> d_i;
      if(i == 0){
         a.push_back(d_i);
      }else{
         int num1 = d_i+a[i-1];
         int num2 = -1*d_i+a[i-1];
         if( (num1 >= 0 && num2 >=0 && num1 != num2) ){
            /**
             * The next two lines are commented out becuase 
             * if we return early then we mess up how we process stdin
            */
            //cout << -1 <<"\n";
            //return;
            dne = -1;
         }else{
            a.push_back(d_i+a[i-1]);
         }
      }
   }
   if(dne){
      cout << dne << "\n";
   }else{
      for(auto& num : a){
         cout << num << " ";
      }
   }
}

// 3
// 19
// 0 0 6 0 0 0 0 0 0 58 0 0 0 0 27 0 44 0 0
// 99
// 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 7 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 35 0 0 0 0 0 0 0 0 0 26 0 0 0 35 0 0 0 0 0 0 0 0 0 0 0 0
// 52
// 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 8 44 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 58 0 0 0 0

int main(){
   int n{};
   cin >> n;
   for(int i = 0; i < n; ++i ){
      testCase();
   }
   return 0;
}