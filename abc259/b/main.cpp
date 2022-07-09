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
  double a, b, d;
  cin >> a >> b >> d;

  double x, y;
  x = a * cos(d * (M_PI / 180)) - b * sin(d * (M_PI / 180));
  y = a * sin(d * (M_PI / 180)) + b * cos(d * (M_PI / 180)) ;

  cout << fixed << setprecision(20)  << x << " " << y << endl;
}
