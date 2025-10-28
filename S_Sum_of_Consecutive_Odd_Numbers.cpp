#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int sum=0;
        for(int i=min(n,m)+1;i<max(n,m);i++)
        {
            if(i%2!=0){
                sum+=i;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}