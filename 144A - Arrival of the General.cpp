#include <bits/stdc++.h>
using namespace std;
//Code Written By: Vikash Patel

int main()
{
    int n;
    cin>>n;
    int h[n];
    int maxValue=0,minValue=101,maxIndex,minIndex;
    for(int i=0;i<n;i++)
    {
        cin>>h[i];
        if(h[i]>maxValue)
        {
            maxValue=h[i];
            maxIndex=i;
        }
        if(h[i]<=minValue)
        {
            minValue=h[i];
            minIndex=i;
        }
    }
    if(maxIndex>minIndex)
    {
        minIndex++;
    }
    cout<<maxIndex+(n-1)-minIndex<<endl;
}