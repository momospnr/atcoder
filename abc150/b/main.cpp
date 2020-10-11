#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  int n;
  string s;
  cin >> n >> s;
  int ans = 0;
  for (int i = 0; i < s.length() - 2; i++)
  {
    if (s[i] == 'A' && s[i + 1] == 'B' && s[i + 2] == 'C')
    {
      ans++;
    }
  }
  cout << ans << endl;
}
