//                                 ॐ नमः शिवाय
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
 
// Code Written By: Vikash Patel
// Codeforces Profile: https://codeforces.com/profile/vikashpatel
 
int main()
{
    int n,k;
    cin>>n>>k;
    while(k--)
    {
        if(n%10==0)
        n /= 10;
        else
        n--;
    }
    cout<<n<<endl;
    return 0;
}