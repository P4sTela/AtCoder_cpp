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

int sum(int n){
  int sum = 0;
  while (n > 0){
    sum += n % 10;
    n /= 10;
  }
  return sum;
}

int main(){
  int n, a, b;
  cin >> n >> a >> b;

  int res = 0;
  for (int i = 1; i <= n; ++i) {
    int sumi = sum(i);
    if (sumi >= a && sumi <= b) res += i;
  }

  cout << res << endl;
}

