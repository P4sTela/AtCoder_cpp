#include <bits/stdc++.h>

using namespace std;

int main(){
  long long n, p, q, r;
  cin >> n >> p >> q >> r;
  long long i, j, k;
  vector<long long> a(n);
  for (i = 0; i < n; ++i) {
    cin >> a.at(i);
  }
  long long bp = p, bq = q, br = r;
  bool flag = true;

//  for (int z = 0; z < n-2; ++z) {
//    flag = true;
//    p = bp, q = bq, r = br;
//    for (i = 0; i < n-z; ++i) {
//      p -= a.at(i);
//      if (p == 0) {
//        flag = false;
//        break;
//      }
//      if (p < 0) {break;}
//    }
//    if (flag) {rotate(a.begin(), a.begin()+1, a.end()); continue;}
//    flag = true;
//    for (j = i+1; j < n-z; ++j) {
//      q -= a.at(j);
//      if (q == 0) {
//        flag = false;
//        break;
//      }
//      if (q < 0) {break;}
//    }
//    if (flag) {rotate(a.begin(), a.begin()+1, a.end()); continue;}
//    flag = true;
//    for (k = j+1; k < n-z; ++k) {
//      r -= a.at(k);
//      if (r == 0) {cout << "Yes" << endl; return 0;}
//      if (r < 0) {break;}
//    }
//    rotate(a.begin(), a.begin()+1, a.end());
//  }

    flag = true;
    p = bp, q = bq, r = br;
    for (i = 0; i < n; ++i) {
      p -= a.at(i);
      if (p == 0) {
        flag = false;
        break;
      }
      if (p < 0) {break;}
    }
    if (flag) {}
    flag = true;
    for (j = i+1; j < n; ++j) {
      q -= a.at(j);
      if (q == 0) {
        flag = false;
        break;
      }
      if (q < 0) {break;}
    }
    if (flag) {rotate(a.begin(), a.begin()+1, a.end()); continue;}
    flag = true;
    for (k = j+1; k < n; ++k) {
      r -= a.at(k);
      if (r == 0) {cout << "Yes" << endl; return 0;}
      if (r < 0) {break;}
    }
  cout << "No" << endl;
}
