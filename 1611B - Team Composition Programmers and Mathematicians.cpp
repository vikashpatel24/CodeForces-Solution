//                                 ॐ नमः शिवाय
#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
// Code Written By: Vikash Patel
// Codeforces Profile: https://codeforces.com/profile/vikashpatel
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        if (a < b) 
        swap(a,b);
        int dif= abs(a-b);
        int threeAndOne= dif/2;
        int ans= min(threeAndOne,b) + (b-min(threeAndOne,b))/2;
        cout << ans << "\n";
    }
    return 0;
}
















