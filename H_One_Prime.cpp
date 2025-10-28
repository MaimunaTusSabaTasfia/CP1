#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    for(int i=2;i<=sqrt(n);i++)
    {
       if(n%i==0)
       {
        count++;
        break;
       }
    }
    if(n>1 && count==0)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    return 0;
}