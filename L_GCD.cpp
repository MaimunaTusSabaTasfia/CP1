#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int gcd=0;
    int mx=max(a,b);
    for(int i=1;i<=mx;i++)
    {
       if(a%i==0 && b%i==0){
        if(i>gcd)
        gcd=i;
       }
    }
    cout<<gcd<<endl;
    return 0;
}