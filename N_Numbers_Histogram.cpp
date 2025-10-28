#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<ar[i];j++)
        {
            cout<<s;
        }
        cout<<endl;
    }
    return 0;

}