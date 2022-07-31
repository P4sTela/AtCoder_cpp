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

int facctorialMethod(int k){
  int sum = 1;
  for (int i = 1; i <= k; ++i) {
    sum *= i;
  }
  return sum;
}

int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; ++i) {
    cin >> a.at(i);
  }

  long long x=0;
  long long y=0;
  for (int i = 0; i < n; ++i) {
    if (a.at(i) == i+1) {++x;}
    else {
      if (a.at(a.at(i)-1) == i+1) {++y;}
    }
  }

  if (x<2) {
    x = 0;
  } else {
    x = x*(x-1)/2;
  }



  cout << x + (y/2) << endl;
}
