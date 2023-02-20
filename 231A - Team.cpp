#include<bits/stdc++.h>
using namespace std;

//Code Written By: Vikash Patel

int main()
{
    int n;
    cin>>n;
    int surity,valsol=0;
    for(int i=0;i<n;i++)
    {
        int sure=0;
        for(int j=0;j<3;j++)
        {
            cin>>surity;
            sure+=surity;
        }
        if(sure>=2)
        valsol++;
    }
    cout<<valsol<<endl;
} 
