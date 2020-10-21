#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  int n, k, r, s, p;
  string t;
  cin >> n >> k >> r >> s >> p >> t;
  int cnt = 1;
  string v;
  for (int i = 0; i < n; i++)
  {
    if (cnt > k && t[i] == t[i - k] && t[i] != v[i - k])
    {
      v.push_back(t[i]);
      continue;
    }

    cnt++;
    switch (t[i])
    {
    case 'r':
      v.push_back('p');
      break;
    case 's':
      v.push_back('r');
      break;
    case 'p':
      v.push_back('s');
      break;
    default:
      break;
    }
  }
  ll ans = 0;
  for (int i = 0; i < n; i++)
  {
    if (t[i] == v[i])
    {
      continue;
    }

    switch (v[i])
    {
    case 'r':
      ans += r;
      break;
    case 's':
      ans += s;
      break;
    case 'p':
      ans += p;
      break;
    default:
      break;
    }
  }
  cout << ans << endl;
}
