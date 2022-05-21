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
  vector<int> a(n);
  for (int i = 0; i < n; ++i) {
    cin >> a.at(i);
  }
  int ct = 0;
  for (int i = 0; i < n - 2; ++i) {
    for (int j = i + 1; j < n - 1; ++j) {
      if (a.at(i) == a.at(j)) continue;
      for (int k = j + 1; k < n; ++k) {
        if (a.at(j) != a.at(k) && a.at(k) !=a.at(i)){
          ++ct;
        }
      }
    }
  }
  cout << ct << endl;
}
