//                                 ॐ नमः शिवाय
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
 
// Code Written By: Vikash Patel
// Codeforces Profile: https://codeforces.com/profile/vikashpatel
 
int main()
{
    int n;
    cin>>n;
    int bills = 0;
    int x = n/100;
    int y = (n%100)/20;
    int z = ((n%100)%20)/10;
    int a = (((n%100)%20)%10)/5;
    int b = ((((n%100)%20)%10)%5);
    cout<<x+y+z+a+b<<endl;
    return 0;
}