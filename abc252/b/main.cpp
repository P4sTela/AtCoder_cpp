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
  int n, k;
  cin >> n >> k;
  vector<int> A(n);
  for (int i = 0; i < n; ++i) {
    cin >> A.at(i);
  }
  vector<int> B(k);
  for (int i = 0; i < k; ++i) {
    cin >> B.at(i);
  }
  int m = 0;
  for (int i = 0; i < n; ++i) {
    if (A.at(i) > m) {
      m = A.at(i);
    }
  }
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < k; ++j) {
      if (A.at(i) == m){
        if (B.at(j) == i + 1) {
          cout << "Yes" << endl;
          return 0;
        }
      }
    }
  }
  cout << "No" << endl;
  return 0;
}
