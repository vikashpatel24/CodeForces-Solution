#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

int main()
{
    int Y,W;
    cin>>Y>>W;
    string prob[7] ={"","1/1","5/6","2/3","1/2","1/3","1/6"};
    int D=max(Y, W);
    cout<<prob[D]<<endl;
}
