#include<bits/stdc++.h>
using namespace std;

// Code Written By: Vikash Patel

int main()
{
   int n;
   cin>>n;
   int points[n][2];
   int M=0, C=0;
   for(int i=0;i<n;i++)
   {
       cin>>points[i][0]>>points[i][1];
   }
   
   
   for(int i=0;i<n;i++)
   {
       if(points[i][0]>points[i][1])
       {
       M++;
       }
       
       if(points[i][0]<points[i][1])
       {
           C++;
       }
   }
   
   if(M>C)
   cout<<"Mishka"<<endl;
   else if(C>M)
   cout<<"Chris"<<endl;
   else
   cout<<"Friendship is magic!^^"<<endl;
}