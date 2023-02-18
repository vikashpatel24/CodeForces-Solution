#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

int main()
{
    string Bcode;
    cin>>Bcode; 
    string decoded;
    int i=0;
    while(i!=Bcode.size())
    {
        if(Bcode[i]=='.')
        {
        decoded+="0";
        i++;
        }
        else if(Bcode.substr(i,2)=="-.")
        {
        decoded+="1";
        i+=2;
        }
        else
        {
            decoded+="2";
            i+=2;
        }
    }
    cout<<decoded<<endl;
}