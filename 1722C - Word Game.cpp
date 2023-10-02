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
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string a[n], b[n], c[n];
        unordered_map<string, int> mpa, mpb, mpc;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            mpa[a[i]]++;
        }
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
            mpb[b[i]]++;
        }
        for(int i=0; i<n; i++)
        {
            cin>>c[i];
            mpc[c[i]]++;
        }
        int pa = 0, pb = 0, pc = 0;
        for(auto i : a)
        {
            if(mpa[i]>0 && mpb[i]>0 && mpc[i]>0)
            continue;
            else if(mpa[i]>0 && mpb[i]>0)
            pa++;
            else if(mpa[i]>0 && mpc[i]>0)
            pa++;
            else
            pa += 3;
        }
        for(auto i : b)
        {
            if(mpa[i]>0 && mpb[i]>0 && mpc[i]>0)
            continue;
            else if(mpa[i]>0 && mpb[i]>0)
            pb++;
            else if(mpb[i]>0 && mpc[i]>0)
            pb++;
            else
            pb += 3;
        }
        for(auto i : c)
        {
            if(mpa[i]>0 && mpb[i]>0 && mpc[i]>0)
            continue;
            else if(mpa[i]>0 && mpc[i]>0)
            pc++;
            else if(mpb[i]>0 && mpc[i]>0)
            pc++;
            else
            pc += 3;
        }
        cout<<pa<<" "<<pb<<" "<<pc<<endl;
    }
    return 0;
}