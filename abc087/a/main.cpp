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
  int x, a, b;
  cin >> x >> a >> b;

  int remain = x - a;
  while (true){
    remain -= b;
    if (remain < 0) {
      remain += b;
      break;
    }
  }

  cout << remain << endl;
}

