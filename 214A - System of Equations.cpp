#include <bits/stdc++.h>
using namespace std;

//Code Written By: Vikash Patel

int main()
{
    int n, m, answer(0);
    cin >> n >> m;

    for (int a = 0; a * a <= n && a <= m; ++a)
    {
        int b = n - a * a;
        if (a + b * b == m)
        {
            answer += 1;
        }
    }

    cout << answer << endl;
}