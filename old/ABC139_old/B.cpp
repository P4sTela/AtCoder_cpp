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
  int a, b, c, ans;
  c = 1;
  ans = 0;
  cin >> a >> b;

  if (b < 2){
    cout << 0 << endl;
    return 0;
  }

  while (c < b){
    c += a - 1;
    ans++;
  }

  cout << ans << endl;
  return 0;
}
