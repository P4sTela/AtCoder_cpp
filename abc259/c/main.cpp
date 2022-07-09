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

  for (int i = 0; i < t.size(); ++i) {
    if (s[i] == t[i]) continue;
    if (s[i-1] == t[i]) {
      if (s[i-1] == s[i-2]){
        string ad{s[i-1]};
        s.insert(i, ad);
        continue;
      }
    }
    cout << "No" << endl;
    return 0;
  }
  cout << "Yes" << endl;
}
