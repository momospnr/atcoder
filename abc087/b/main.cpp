#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b, c, X, count = 0;
  cin >> a >> b >> c >> X;

  for (int i = 0; i <= a; i++)
  {
    for (int j = 0; j <= b; j++)
    {
      for (int k = 0; k <= c; k++)
      {
        if ((500 * i) + (100 * j) + (50 * k) == X)
        {
          count++;
        }
      }
    }
  }
  cout << count << endl;
}
