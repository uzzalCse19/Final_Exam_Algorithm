#include <bits/stdc++.h>

using namespace std;

int main()

{
int t;
cin>>t;
while(t--){
 int n;
 cin>>n;
 vector<long long int>v(n);
  vector<long long int>v1(n);
 for(int i=0;i<n;i++){
  cin>>v[i];
  v1[i]=v[i];
 }
 sort(v.begin(),v.end());
int F_max=v[n-1],S_max=v[n-2];
int a=0,b;
for(int i=0;i<n;i++)
{
  if(v1[i]==F_max || v1[i]==S_max)
  {
     cout<<i;
     a++;
  }
  if(a==1) {
  cout<<" ";
  a=5;
  }
  if(a==6)
  {
    cout<<endl;
    break;
  }
  
}
}
return 0;
}