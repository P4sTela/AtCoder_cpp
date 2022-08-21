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

//bool search(vector<vector<int>> uv, int n, int m){
//  for (int i = 0; i < (int)uv.size(); ++i) {
//    if (uv.at(i).at(0) == n && uv.at(i).at(1) == m) {return true;}
//    if (uv.at(i).at(0) == m && uv.at(i).at(1) == n) {return true;}
//  }
//  return false;
//}

int main(){
  int n, m;
  cin >> n >> m;
  vector<vector<int>> uv(m, vector<int>(2));
  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < 2; ++j) {
      cin >> uv.at(i).at(j);
    }
  }
  if (m<3) {cout << 0 << endl; return 0;}
  int counter = 0;

  for (int i = 1; i <= n-2; ++i) {
    for (int j = i+1; j <= n-1; ++j) {
      if (search(uv, i, j)) {
        for (int k = j+1; k <= n; ++k) {
          if (search(uv, j, k)) {
            if (search(uv, k, i)) {
              counter += 1;
            }
          }
        }
      }
    }
  }



//  sort(uv.begin(),uv.end(),[](const vector<int> &alpha,const vector<int> &beta){return alpha[1] < beta[1];});
//  sort(uv.begin(),uv.end(),[](const vector<int> &alpha,const vector<int> &beta){return alpha[0] < beta[0];});
//
//  for (int i = 0; i < m-2; ++i) {
//    for (int j = i+1; j < m-1; ++j) {
//      if (uv.at(i).at(0) == uv.at(j).at(0)){
//        for (int k = j+1; k < m; ++k) {
//          if (uv.at(k).at(0) == uv.at(i).at(1) && uv.at(k).at(1) == uv.at(j).at(1)) {++counter;}
//        }
//      }
//    }
//  }


  cout << counter << endl;

}
