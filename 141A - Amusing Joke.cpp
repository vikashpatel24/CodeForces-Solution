#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

int main()
{
    string guest,host,pile;
    
    cin>>guest>>host>>pile;
    
    string total=guest+host;
    
    sort(total.begin(),total.end());
    
    sort(pile.begin(),pile.end());
    
    if(total==pile)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
