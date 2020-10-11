#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  ll n, m, ans;
  m = ans = 0;
  cin >> n;
  for (ll i = 0; i < n; i++)
  {
    ll buf;
    cin >> buf;
    if (m > buf)
    {
      ans += m - buf;
    }
    else
    {
      m = buf;
    }
  }
  cout << ans << endl;
}
