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
  string s, t;
  cin >> s >> t;

  int counter = 0;
  if (s[0] == t[0]) ++counter;
  if (s[1] == t[1]) ++counter;
  if (s[2] == t[2]) ++counter;

  cout << counter << endl;
}
