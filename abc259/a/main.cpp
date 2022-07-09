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
  int n, m, x, t, d;
  cin >> n >> m >> x >> t >> d;

  if (x <= m) {
    cout << t << endl;
    return 0;
  }

  int diff = (x - m) * d;
  cout << t - diff << endl;
}
