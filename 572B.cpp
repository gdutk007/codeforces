#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
#include <map>
using namespace std;


map<int,int> buy;
map<int,int> sell;

void parseLine(string line){
   //cout << line << "\n";

   string temp{};
   stringstream ss(line);
   vector<string> vec;
   while(getline(ss,temp,' ')){
      if(temp.size()){
         vec.push_back(temp);
      }
   }

   if(vec.size()){   
      int price = stoi(vec[1]);
      int amount = stoi( vec[2] );
      if(vec[0][0] == 'B' ){
         //buy.push_back(make_pair(price,amount));
         buy[price] += amount;
      }else{
         //sell.push_back(make_pair(price,amount));
         sell[price] += amount;
      }
   }
}

int main(){
   int n{0};
   int s{0};

   cin >> n;
   cin >> s;

   vector<string> ord;
   for(int i = 0; i <= n; ++i){
      string temp{};
      getline(cin,temp);
      if(temp.size()) ord.push_back(temp);
   }
   //cout << "\nprinting:\n";
   for(auto& line : ord){
      parseLine(line);
   }
   
   auto sellIter = sell.begin();
   int i = 0;
   vector<pair<int,int>> p;
   while(i < s && sellIter != sell.end()){
      //cout << "S " << sellIter->first << " " << sellIter->second << "\n";
      p.push_back(make_pair(sellIter->first, sellIter->second));
      ++i;
      ++sellIter;
   }
   for(int j = p.size()-1; j >= 0; --j){
      cout << "S " << p[j].first << " " << p[j].second << "\n";
   }
   i = 0;
   auto buyIter = buy.rbegin();
   while(i < s && buyIter != buy.rend()){
      cout  << "B " << buyIter->first << " " << buyIter->second << "\n";
      ++i;
      buyIter++;
   }
   return 0;
}