#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int org=n;
    int reversed=0;
    while(n>0)
    {
      int remainder=n%10;
      reversed=(reversed*10)+remainder;
      n=n/10;
    }
    cout<<reversed<<endl;
    if(org==reversed)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    return 0;

}