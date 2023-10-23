#include <iostream>
#include <bits/stdc++.h>

using namespace std;


/**
 * This version of binary search should return the index to the
 * first value that is greater than the argument m. This essentially
 * is the implementation of upperbound in cpp
*/
int testcase(vector<int>& s, int m){
   if(s[0] > m) return 0;
   if(s[s.size()-1] <= m) return s.size();

   int n = s.size();
   int i = 0;
   int j = n-1;
   int mid = 0;

   while(i <= j){
      mid = i + (j-i)/2;
      if(s[mid] <= m){
         i = mid+1;
      }else{
         j = mid-1;
      }
   }
   //if(s[mid] == m) return m+1;
   return i;
}

/**
 * This is the same function as above but it uses the 
 * built-in upper bound function. It returns an iterator
 * to the first element greater than the argument passed in.
 * Returns the end of the container if element is not found.
*/
// int testcase(vector<int>& s, int m){
//    auto iter = upper_bound(s.begin(),s.end(), m);
//    if(iter == s.end()){
//       return s.size();
//    }else{
//       return iter-s.begin();
//    }
// }

int main(){
   int n{};
   cin >> n;
   vector<int> shops;
   vector<int> ans;

   for(int i = 0; i < n; ++i){
      int s{};
      cin >> s;
      shops.push_back(s);
   }
   sort(shops.begin(), shops.end(),[](const int& a,const int& b)->bool{ return a < b;});
   int d{};
   cin >> d;
   for(int i = 0; i < d; ++i){
      int m{};
      cin >> m;
      int count = testcase(shops,m);
      ans.push_back(count);
   }

   for(auto& num : ans){
      cout << num << "\n";
   }
   return 0;
}


/**
 *
5
868 987 714 168 123
10
424
192
795
873
117
914
735
158
631
471
 * 
 * 
*/