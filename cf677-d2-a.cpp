#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*

Vanya and his friends are walking along the fence of height h and they do not want the guard to notice them. In order to achieve this the height of each of the friends should not exceed h. If the height of some person is greater than h he can bend down and then he surely won't be noticed by the guard. The height of the i-th person is equal to ai.

Consider the width of the person walking as usual to be equal to 1, while the width of the bent person is equal to 2. Friends want to talk to each other while walking, so they would like to walk in a single row. What is the minimum width of the road, such that friends can walk in a row and remain unattended by the guard?
Input

The first line of the input contains two integers n and h (1 ≤ n ≤ 1000, 1 ≤ h ≤ 1000) — the number of friends and the height of the fence, respectively.

The second line contains n integers ai (1 ≤ ai ≤ 2h), the i-th of them is equal to the height of the i-th person.
Output

Print a single integer — the minimum possible valid width of the road.

*/

// test case
/*
   input:
   3 7
   4 5 14
   output:
   4
*/

int main(){ 
   string line1 = "";
   string line2 = "";
   int n = 0;
   int h = 0;
   int ans = 0;
   
   cin >> line1;
   cin >> line2;

   n = stoi(line1);
   h = stoi(line2);

   for(int i = 0; i < n; ++i){
      string temp = "";
      int f_h = 0;
      cin >> temp;
      f_h = stoi(temp);
      ++ans;
      if(f_h > h ){
         ++ans;
      }
   }

   cout << ans << "\n";

   return 0;
}