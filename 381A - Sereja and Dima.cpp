#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

// Codeforces Profile: https://codeforces.com/profile/vikashpatel

int main()
{
    int n;
    cin>>n;
    int cards[n];
    for(int i=0;i<n;i++)
    {
        cin>>cards[i];
    }
    int Sereja, Dima;
    Sereja = Dima = 0;
    int c=0;
    int l=0,r=n-1;
    while(n--)
    {
        if(c%2==0)
        {
            if(cards[l]>cards[r])
            {
            Sereja+=cards[l];
            l++;
            }
            else
            {
            Sereja+=cards[r];
            r--;
            }
        }
        else
        {
            if(cards[l]>cards[r])
            {
            Dima+=cards[l];
            l++;
            }
            else
            {
            Dima+=cards[r];
            r--;
            }
        }
        c++;
    }
    cout<<Sereja<<" "<<Dima<<endl;
}