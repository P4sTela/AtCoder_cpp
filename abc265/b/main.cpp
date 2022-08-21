#include <bits/stdc++.h>

using namespace std;

int main(){
  long long n, m, t;
  cin >> n >> m >> t;

  vector<long long> a(n-1), x(m+1), y(m+1);

  for (int i = 0; i < n - 1; ++i) {
    cin >> a.at(i);
  }
  for (int i = 0; i < m; ++i) {
    cin >> x.at(i) >> y.at(i);
  }

  int xcou = 0;

  for (int i = 0; i < n-1; ++i) {
    if (x.at(xcou) == i+1) {
      t += y.at(xcou);
      ++xcou;
    }
    t -= a.at(i);
    if (t <= 0) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
}
