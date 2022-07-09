#include <iomanip>
#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
#include <numeric>
#include <set>

using namespace std;

int main(){
  int n;
  cin >> n;
  vector<vector<int>> sec(n, vector<int>(2));

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < 2; ++j) {
      cin >> sec.at(i).at(j);
    }
  }

//    long int h = (sec.size()*10)/13;
//    bool is_sorted = false;
//    while(!is_sorted){
//      if(h==1)is_sorted = true;
//      for(long int i=0; i<sec.size()-h; ++i){
//        if(sec[i]>sec[i+h]){
//          swap(sec[i],sec[i+h]);
//          if(is_sorted)is_sorted = false;
//        }
//      }
//      if(h>1) h = (h*10)/13;
//      if(h==0) h = 1;
//    }
  sort(sec.begin(), sec.end());

  int count = 0;
  for (int i = 0; i < n-1-count; ++i) {
    if (sec.at(i).at(1) >= sec.at(i+1).at(0)) {
      sec.at(i).at(1) = sec.at(i+1).at(1);
      sec.erase(sec.begin()+i+1);
      i--;
      count+=1;
    }
  }


  for (int i = 0; i < n-count; ++i) {
    cout << sec.at(i).at(0) << " " << sec.at(i).at(1) << "\n";
  }
  return 0;
}
