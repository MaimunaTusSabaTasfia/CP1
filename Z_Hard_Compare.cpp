#include<bits/stdc++.h>
using namespace std;
int main(){
    double a,b,c,d;
    cin>>a>>b>>c>>d;
    double a1=b*log10(a);
    double b2=d*log10(c);
    if(a1>b2)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    return 0;
}