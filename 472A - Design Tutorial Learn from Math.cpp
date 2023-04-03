//                                 ॐ नमः शिवाय
#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool mark[1000001];
 
// Code Written By: Vikash Patel
// Codeforces Profile: https://codeforces.com/profile/vikashpatel

void solv(){
        for(ll i = 2; i <=1000000; i++ )
        {
            if( mark[i] == 0 )
            {
                for(ll j = 2 * i; j <=1000000; j += i )
                    mark[j] = 1;
            }
        }
}

int main()
{
    long long i,x;
    solv();
    while(cin>>x)
    {
    	for(i=4;i<=x-4;i++){
			if(mark[i]==1 && mark[x-i]==1)
			{
				cout<<i<<" "<<x-i<<endl;
				break;
			}
    	}
    }
    return 0;
}