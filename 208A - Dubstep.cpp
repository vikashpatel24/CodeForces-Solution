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
    
    string s;
    cin>>s;
    string song;
    int n = s.size();
    int i = 0;
    bool space  = 1;
    while(i<n)
    {
        if(s.substr(i,3) == "WUB")
        {
            i += 3;
            if(space == 0)
            {
                song += " ";
                space = 1;
            }
            continue;
        }
        else
        {
            song += s[i];
            space = 0;
            i++;
        }
    }
    cout<<song<<endl;
    return 0;
}
