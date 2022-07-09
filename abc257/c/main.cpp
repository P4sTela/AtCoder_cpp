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
  int n;
  cin >> n;
  string s;
  cin >> s;
  if (s.size() != n) return -1;

  vector<long long int> w(n);
  for (int i = 0; i < n; ++i) {
    cin >> w[i];
  }

  vector<long long int> adult, child;
  for (int i = 0; i < n; ++i) {
    if (s[i] == '1') {
      adult.push_back(w[i]);
    } else {
      child.push_back(w[i]);
    }
  }

  if (adult.size() == 0 || child.size() == 0) {
    cout << n << endl;
    return 0;
  }

  sort(adult.begin(),adult.end());
  sort(child.begin(),child.end());

  long long int acounter=0;
  long long int ccounter=0;
  long long int max = 0;
  for (long long int i = *min_element(w.begin(), w.end()); i <= *max_element(w.begin(), w.end()); ++i) {
    while (adult[acounter] < i && acounter!=adult.size()) {
      acounter += 1;
    }
    while (child[ccounter] < i && ccounter!=child.size()) {
      ccounter += 1;
    }
    if (max < ccounter+adult.size()-acounter) max = ccounter+adult.size()-acounter;
  }

  cout << max << endl;
}
