#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

int main()
{
    int n,d;
    cin>>n>>d;
    string a[d];
    for(int i=0;i<d;i++)
    {
        cin>>a[i];
    }
    int mcd=0;
    int c=0;
    for(int i=0;i<d;i++)
    {
        bool win = false;
        for(int j=0;j<n;j++)
        {
            if(a[i][j] == '0')
            {
                win = true;
                break;
            }
        }
        if(win)
        c++;
        else
        c=0;
        
        mcd = max( c, mcd);
    }
    cout<<mcd<<endl;
}