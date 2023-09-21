//                                 ॐ नमः शिवाय
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
 
// Code Written By: Vikash Patel
// Codeforces Profile: https://codeforces.com/profile/vikashpatel

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("/Users/vikash/Desktop/output.txt", "w", stdout);
    // #endif
    
    int n,num,chest,biceps,bak,maxi ;
    cin >>n;
    chest=biceps=bak=0;
    for (int i = 0 ;i<n; i++){
        cin >> num;
        if (i %3 ==0)
            chest = chest +num;
        else if (i %3 ==1)
            biceps = biceps +num;
        else
            bak =bak+num;
    }
    maxi = max(max(chest,bak),biceps);
    if (maxi == chest)
        cout <<"chest";
    else if (maxi == biceps)
        cout <<"biceps";
    else
        cout<<"back";
    return 0;
}