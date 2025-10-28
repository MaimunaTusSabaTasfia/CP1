#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int max=INT_MIN;
    while(t--)
    {
        int n;
        cin>>n;
        if(n>max)
        max=n;
    }
    cout<<max<<endl;
}