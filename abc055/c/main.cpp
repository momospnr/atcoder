#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  ll n, m, ans;
  ans = 0;
  cin >> n >> m;

  if (n >= m)
  {
    ans += m / 2;
  }
  else
  {
    ans += n;
    m -= 2 * n;
    ans += m / 4;
  }

  cout << ans << endl;
}
