#include <bits/stdc++.h>

using namespace std;

int main(){
  int x, y, n;
  cin >> x >> y >> n;

  int ans;
  if (x * 3 > y){
    ans = y * (int)(n / 3);
    ans += x * (int)(n % 3);
  } else {
    ans = x * n;
  }

  cout << ans << endl;
}
