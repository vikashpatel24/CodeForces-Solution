#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

int main ()
{
    int n, k;
    cin >> n >> k;
    int remainingTime = 240 - k;
    int solvingTime = 0, maxSolved = 0;
    for (int i = 1; i <= n; i++)
    {
        solvingTime += 5 * i;
        if( solvingTime > remainingTime)
        break;
        maxSolved++;
    }
    cout << maxSolved << endl;
}
