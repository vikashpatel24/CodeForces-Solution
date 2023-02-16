#include<bits/stdc++.h>
using namespace std;

//Code Written By: Vikash Patel

int main()
{


       int n,m;


       cin>>n>>m;


         string s[n];


       int i1[3],j1[3];




          int i,j,k=0;


          for(i=0;i<n;i++)
          {

              cin>>s[i];

          }


          for(i=0;i<n;i++)
          {

              for(j=0;j<m;j++)
              {

                  if(s[i][j]=='*')
                  {

                      i1[k]=i+1;

                      j1[k]=j+1;
                        k++;
                  }
              }
          }


          for(i=0;i<3;i++)
          {

              for(j=i+1;j<3;j++)
              {
                     if(i==0&&j==1)
                     {

                         k=2;
                     }
                     else if(i==0&&j==2)
                     {
                       k=1;

                     }
                      else if(i==1&&j==2)
                     {
                       k=0;

                     }


                  if(i1[i]!=i1[j]&&j1[i]!=j1[j])
                  {

                      cout<<(i1[i]+i1[j]-i1[k])<<" "<<(j1[i]+j1[j]-j1[k]);
                  }
              }
          }
}