#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

// Codeforces Profile: https://codeforces.com/profile/vikashpatel

int strDiff(string x, string y)
{
  int sum = 0;
  for (int i = 0; i < x.size (); i++)
    {
      sum += abs (x[i] - y[i]);
    }
  return sum;
}

int main() 
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s[n];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
	    }
        int mini = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i != j)
                mini = min (mini, strDiff (s[i], s[j]));
            }      
        }
        cout << mini << endl;
    }
}
