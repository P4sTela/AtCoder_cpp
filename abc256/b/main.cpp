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

  int p=0;
  for (int i = 1; i < n; ++i) {
    for (int j = 0; j < i; ++j) {
      a.at(j) += a.at(i);
    }
  }

  for (int i = 0; i < n; ++i) {
    if (a.at(i) >= 4) p += 1;
  }

  cout << p << endl;
}
