//                                 ॐ नमः शिवाय
#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
// Code Written By: Vikash Patel
// Codeforces Profile: https://codeforces.com/profile/vikashpatel
 
int main()
{
    int cubes;
    cin>>cubes;
    int sum=0,tsum=0;
    int i;
    for(i=1;i<=cubes;i++)
    {
        sum += i;
        tsum += sum;
        if(tsum>cubes)
        {
            i--;
            break;
        }
        if(tsum==cubes)
        {
            break;
        }
    }
    cout<<i<<endl;
    return 0;
}