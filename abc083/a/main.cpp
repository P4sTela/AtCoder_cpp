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
  int a, c, b, d;
  cin >> a >> b >> c >> d;

  int L = a + b;
  int R = c + d;

  if (L == R) cout << "Balanced" << endl;
  else if (L > R) cout << "Left" << endl;
  else cout << "Right" << endl;
}

