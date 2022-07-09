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
  int n, k, q;
  cin >> n >> k >> q;
  vector<int> a(k);
  vector<int> l(q);
  for (int i = 0; i < k; ++i) {
    cin >> a.at(i);
  }
  for (int i = 0; i < q; ++i) {
    cin >> l.at(i);
  }

  for (int i = 0; i < q; ++i) {
    int now = a.at(l.at(i)-1);
    if (now == n) continue;
    if (l.at(i) != k){
      if (a.at(l.at(i)) == (now+1)) continue;
    }
    a.at(l.at(i)-1) += 1;
  }

  for (int i = 0; i < k-1; ++i) {
    cout << a.at(i) << " ";
  }
  cout << a.at(k-1) << endl;
}
