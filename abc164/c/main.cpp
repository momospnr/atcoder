#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  int n;
  cin >> n;
  set<string> ans;
  for (int i = 0; i < n; i++)
  {
    string s;
    cin >> s;
    ans.insert(s);
  }
  cout << ans.size() << endl;
}
