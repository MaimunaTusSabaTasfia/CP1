#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==0){
        cout<<1<<endl;
        continue;
        }
        long long fact=1;
        for(int i=1;i<=n;i++)
        {
           fact*=i;
        }
        cout<<fact<<endl;
    }
    return 0;
}