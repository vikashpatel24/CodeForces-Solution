#include<bits/stdc++.h>
using namespace std;

//Code Written By: Vikash Patel

int main(){
  string s;
  cin>>s;
  int count = 1;
  sort(s.begin(), s.end());
  char elem = s[0];
  for(int i = 0; i < s.size(); i++){
    if(s[i] != elem){
      elem = s[i];
      count++;
    }
  }
  if(count % 2 == 0){
    cout<<"CHAT WITH HER!";
  }
  else{
    cout<<"IGNORE HIM!";
  }
}