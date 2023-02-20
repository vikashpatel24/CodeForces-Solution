#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string word;
        cin>>word;
        int l=word.size();
        if(l>10)
        cout<<word[0]+to_string(l-2)+word[l-1]<<endl;
        else
        cout<<word<<endl;
    }
}
