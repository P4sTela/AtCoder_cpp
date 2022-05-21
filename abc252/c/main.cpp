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

int calc(int c, vector<string> reel, int n){
  string a = reel.at(c);
  int t = 1;
  bool flag = false;
  char ans = a[1];
  whlie(flag){
    for (int i = 0; i < n; ++i) {
      if (reel.at(i)[i+1] == ans)
    }
  }
}

int main(){
  int n;
  cin >> n;
  vector<string> reel(n);
  for (int i = 0; i < n; ++i) {
    cin >> reel.at(i);
  }
}
