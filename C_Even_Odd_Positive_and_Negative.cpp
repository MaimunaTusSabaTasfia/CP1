#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int e=0,o=0,p=0,neg=0;
    while(t--)
    {
        int n;
        cin>>n;
        
        if(n%2==0)
        e++;
        if(n%2!=0)
        o++;
        if(n>0)
        p++;
        if(n<0)
        neg++;
    }
    cout<<"Even: "<<e<<endl<<"Odd: "<<o<<endl<<"Positive: "<<p<<endl<<"Negative: "<<neg<<endl;
    return 0;

}