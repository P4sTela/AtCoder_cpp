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
  int n, x;
  cin >> n >> x;
  double num = (x-1)/n;
  string abc = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  cout << abc[floor(num)] << endl;
}
