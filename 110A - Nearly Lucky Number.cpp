#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

int
main ()
{
  string s;
  cin >> s;
  int ans = 0;
for (auto i:s)
    {
      if (i == '4' || i == '7')
	ans++;
    }
  if (ans == 4 || ans == 7)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}
