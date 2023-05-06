//                                 ॐ नमः शिवाय
#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
// Code Written By: Vikash Patel
// Codeforces Profile: https://codeforces.com/profile/vikashpatel

int solve(int a, int b)
{
    if(a==b)
    return 0;
    int op = 1;
    if(a>b && (a-b)%2)
    op++;
    else if(b>a && (b-a)%2==0)
    op++;
    return op;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        cout<<solve(a,b)<<endl;
    }
    return 0;
}