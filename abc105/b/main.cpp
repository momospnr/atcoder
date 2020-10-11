#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  int n;
  cin >> n;
  for (int i = 0; i <= 25; i++)
  {
    for (int j = 0; j <= 14; j++)
    {
      if (n == (4 * i) + (7 * j))
      {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
}
