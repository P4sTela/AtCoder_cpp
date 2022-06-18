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
  long long X, A, D, N;
  cin >> X >> A >> D >> N;

  long long endValue = A + D * (N - 1);
  if (D >= 0){
    if (X >= endValue){
      cout << X - endValue << endl;
      return 0;
    }
    if (X <= A){
      cout << A - X << endl;
      return 0;
    }
  }
  if (D < 0){
    if (X <= endValue){
      cout << endValue - X << endl;
      return 0;
    }
    if (X >= A){
      cout << X - A << endl;
      return 0;
    }
  }

  long long amari = abs((X - A + D) % D);
  double half = abs(D) / 2.0;
  long long answer = (amari <= half) ? amari : abs(D) - amari;
  cout << answer << endl;


  return 0;
}
