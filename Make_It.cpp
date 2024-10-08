#include <bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int arr[N];
bool make_it(int n,  int target)
{

    if( target==n)  
    {
        return true;
    }
    if(target > n)
    {
        return false;
    }
   if(arr[target]!=-1) return arr[target];

   bool result= make_it(n,target+3) ||  make_it(n,target*2);

   if(result){
    arr[target]=1;
   }
   else {
    arr[target]=0;
   }

   return result;
}

int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {

      int n;
        cin>>n;
        memset(arr,-1,sizeof(arr));
        if(make_it(n,1))
        {
          cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}