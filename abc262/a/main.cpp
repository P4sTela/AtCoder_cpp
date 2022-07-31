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
  int y;
  cin >> y;
  int x = y % 4;
  if (x <= 1) {cout << (int)y+2-x << endl;}
  else if (x == 2) {cout << (int)y << endl;}
  else {cout << (int)y+3 << endl;}
}
