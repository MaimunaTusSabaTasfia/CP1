#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,sum;
        cin>>n;
        int count=0;
        while(n>0){
            
            count+=n%2;
            n/=2;
        }
        sum=pow(2,count)-1;
        cout<<sum<<endl;
        
    }
    return 0;
}