//                                 ॐ नमः शिवाय
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
 
// Code Written By: Vikash Patel
// Codeforces Profile: https://codeforces.com/profile/vikashpatel
 
int main()
{
    long long int n, sum;
    cin>>n;
    if(n % 2 == 0) 
    sum = n / 2;
    else 
    sum = ((n + 1) / 2) * (-1);
    cout<<sum<<endl;
    return 0;
}
