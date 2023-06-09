//                                 ॐ नमः शिवाय
#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
// Code Written By: Vikash Patel
// Codeforces Profile: https://codeforces.com/profile/vikashpatel

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin>>n;
    int a[n];
    int total = 0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        total += a[i];
    }
    int sum = 0;
    sort(a, a+n, greater<int>());
    int i=0;
    for(i; i<n; i++)
    {
       sum += a[i];
       int left = total-sum;
       if(sum > left)
       break;
    }
    cout<<i+1<<endl;
    return 0;
}