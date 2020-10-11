#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  double ans = v[0];
  for (int i = 1; i < n; i++)
  {
    ans = (double)(ans + v[i]) / 2;
  }
  cout << ans << endl;
}
