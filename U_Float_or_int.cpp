#include<bits/stdc++.h>
using namespace std;
int main(){
    double n;
    cin>>n;
    if(n==floor(n)){
        cout<<"int "<<floor(n)<<endl;
    }
    else
    {
        int intpart=floor(n);
        double fractionpart=n-floor(n);
        cout<<"float "<<intpart<<" "<<fractionpart<<endl;
    }
    return 0;
}