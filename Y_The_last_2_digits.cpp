#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    long long product=1;
    product=(a*product)%100;
    product=(b*product)%100;
    product=(c*product)%100;
    product=(d*product)%100;
    if(product<10)
    cout<<0;
    cout<<product<<endl;


    return 0;
}