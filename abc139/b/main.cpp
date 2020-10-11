#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  int a, b;
  cin >> a >> b;
  int c = 1;
  int ans = 0;
  while (c < b)
  {
    c += a - 1;
    ans++;
  }
  cout << ans << endl;
}
