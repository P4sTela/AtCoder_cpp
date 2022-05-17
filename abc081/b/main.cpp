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
  int N;
  int A[210];

  cin >> N;
  for (int i = 0; i < N; ++i) {
    cin >> A[i];
  }

  int res = 0;

  while (true){
    bool flag = false;
    for (int i = 0; i < N; ++i) {
      if (A[i] % 2 != 0) flag = true;
    }

    if (flag) break;

    for (int i = 0; i < N; ++i) {
      A[i] /= 2;
    }
    ++res;
  }

  cout << res << endl;
}

