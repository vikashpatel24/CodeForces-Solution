//                                 ॐ नमः शिवाय
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
 
// Code Written By: Vikash Patel
// Codeforces Profile: https://codeforces.com/profile/vikashpatel

int sumOdd(int n)
{
    int terms = (n + 1) / 2;
    int sum = terms * terms;
    return sum;
}
 
// Function to return the sum
// of all odd numbers in range L and R
int suminRange(int l, int r)
{
    return sumOdd(r) - sumOdd(l - 1);
}

int sumNatural(int n)
{
    int sum = (n * (n + 1));
    return sum;
}
 
// Function to return sum
// of even numbers in range L and R
int sumEven(int l, int r)
{
    return sumNatural(r/2) - sumNatural((l-1) / 2);
}

//  https://www.geeksforgeeks.org/sum-of-all-even-numbers-in-range-l-and-r/
//  https://www.geeksforgeeks.org/sum-of-all-odd-natural-numbers-in-range-l-and-r/

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("/Users/vikash/Desktop/output.txt", "w", stdout);
    // #endif
    
    int q;
    cin>>q;
    while(q--)
    {
       int l, r;
       cin>>l>>r;
       cout<<sumEven(l, r) - suminRange(l, r)<<endl;
    }
    return 0;
}
