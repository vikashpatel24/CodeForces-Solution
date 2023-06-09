//                                 ॐ नमः शिवाय
#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
// Code Written By: Vikash Patel
// Codeforces Profile: https://codeforces.com/profile/vikashpatel

vector<int> lucky = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777}; 
string checkAlmostLucky(int n)
{
    for(auto i : lucky)
    {
        if(n%i == 0)
        return "YES";
    }
    return "NO";
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin>>n;
    cout<<checkAlmostLucky(n)<<endl;
    return 0;
}
