#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, x, ans;
  x = ans = 0;
  string s;
  cin >> n >> s;
  for (int i = 0; i < n; i++)
  {
    if (s[i] == 'I')
    {
      x++;
    }
    else if (s[i] == 'D')
    {
      x--;
    }
    ans = max(ans, x);
  }
  cout << ans << endl;
}
