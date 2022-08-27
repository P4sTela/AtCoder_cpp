#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin >> n;
  double x=3.5;
  double y=2;

  for (int i = 1; i < n-1; ++i) {
    if (x>3) {
      x += 15 / 6 / y;
      y *= 2;
    } else if (x>4) {
      x += 11 / 6 / y;
      y *= 3/2;
    } else {
      x += 1 / y;
      y *= 6/5;
    }
  }
  if (n != 1)  {x += 21 / 6 / y;}

  cout << std::fixed << std::setprecision(10) << x << endl;
}
