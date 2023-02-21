#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

int main()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int g,t;
    int c1=0,c2=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='G')
        {
        g=i;
        c1++;
        }
        if(s[i]=='T')
        {
            t=i;
            c2++;
        }
        if(c1==1 && c2==1)
        {
            break;
        }
    }
    int x=0,y=0;
    if(g<t)
    {
        for (int i=g; i<=t; i+=k)
            {
                if (s[i] == '#')
                {
                    y = 1;
                    cout << "NO" << endl;
                    break;
                }
                else if (s[i] == 'T')
                {
                    y = 1;
                    cout << "YES" << endl;
                    break;
                }
                else if (s[i] != 'T')
                    x = 0;
            }
            if (x == 0 && y == 0)
                cout << "NO" << endl;
    }
    else
    {
        for (int i=t; i<=g; i+=k)
            {
                if (s[i] == '#')
                {
                    y = 1;
                    cout << "NO" << endl;
                    break;
                }
                else if (s[i] == 'G')
                {
                    y = 1;
                    cout << "YES" << endl;
                    break;
                }
                else if (s[i] != 'G')
                    x = 0;
            }

            if (x == 0 && y == 0)
                cout << "NO" << endl;
    }
}
    







