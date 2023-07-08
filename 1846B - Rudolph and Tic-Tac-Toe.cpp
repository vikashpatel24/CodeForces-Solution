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

string solve(vector<vector<char>> m)
{
    string d1, d2;
    int k = -1;
    for(int i=0; i<3; i++)
    {
        k++;
        string s1, s2;
        for(int j=0; j<3; j++)
        {
            s1 += m[i][j];
            s2 += m[j][k];
            if(i == j)
            d1 += m[i][j];
        }
        if(s1 == "XXX" || s2 == "XXX")
        return "X";
        else if(s1 == "OOO" || s2 == "OOO")
        return "O";
        else if(s1 == "+++" || s2 == "+++")
        return "+";
    }
    d2 += m[2][0];
    d2 += m[1][1];
    d2 += m[0][2];
        if(d1 == "XXX" || d2 == "XXX")
        return "X";
        else if(d1 == "OOO" || d2 == "OOO")
        return "O";
        else if(d1 == "+++" || d2 == "+++")
        return "+";
        
        return "DRAW";
}

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
        string a, b, c;
        cin>>a>>b>>c;
        vector<vector<char>> m = {{a[0], a[1], a[2]}, {b[0], b[1], b[2]}, {c[0], c[1], c[2]}};
        cout<<solve(m)<<endl;
    }
    return 0;
}
