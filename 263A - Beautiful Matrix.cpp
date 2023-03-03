#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

// Codeforces Profile: https://codeforces.com/profile/vikashpatel

int main()
{
    int mat[5][5];
    int m,n;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
        cin>>mat[i][j];
        if(mat[i][j]==1)
        {
            m=i+1;
            n=j+1;
        }
        }
    }
    cout<<abs(m-3)+abs(n-3)<<endl;
}
