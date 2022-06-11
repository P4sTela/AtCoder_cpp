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
  long int x, a, d, n;
  cin >> x >> a >> d >> n;

  long int min = -1;
  long int mem = -1;
  for (long int i = 0; i < n; ++i) {
    if ((x < 0 && a < 0 && d > 0) || (x > 0 && a > 0 && d < 0)) {
      i = abs(a / d) - 10;
      continue;
    }
    if (min == -1) min = abs(x - (a + i * d));
    if (min > abs(x - (a + i * d))) min = abs(x - (a + i * d));
    if (mem == -1) {
      mem = abs(x - (a + i * d));
      continue;
    }
    if (mem < abs(x - (a + i * d))) break;
    mem = abs(x - (a + i * d));
  }

  cout << setprecision(20) << min << endl;
}
