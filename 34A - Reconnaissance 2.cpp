#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

int main()
{
    int n;
    cin>>n;
    int heights[n];
    for(int i=0;i<n;i++)
    {
        cin>>heights[i];
    }
    vector<pair<int,int>> ans;
    for(int j=0;j<n-1;j++)
    {
        int diff=abs(heights[j]-heights[j+1]);
        ans.push_back(make_pair(diff,j));
    }
    int lastfirstdiff=abs(heights[n-1]-heights[0]);
    sort(ans.begin(),ans.end());
    if(lastfirstdiff<ans[0].first)
    cout<<n<<" "<<1<<endl;
    else
    cout<<ans[0].second+1<<" "<<ans[0].second+2<<endl;    
}
    






