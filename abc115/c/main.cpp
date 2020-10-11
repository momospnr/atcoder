#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  ll N, K;
  cin >> N >> K;
  vector<ll> h(N);
  for (ll i = 0; i < N; i++)
  {
    cin >> h[i];
  }

  sort(h.begin(), h.end());
  ll ans = 1e9 + 7;
  for (ll i = 0; i < N - K + 1; i++)
  {
    ans = min(ans, abs(h[i] - h[i + K - 1]));
  }
  cout << ans << endl;
}
