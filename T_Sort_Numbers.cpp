#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v1(3);
    vector<int>v2(3);
    for(int i=0;i<3;i++){
        cin>>v1[i];
        v2[i]=v1[i];
    }
    sort(v2.begin(),v2.end());
    for(int i=0;i<3;i++){
        cout<<v2[i]<<endl;
    }
    cout<<endl;
    for(int i=0;i<3;i++){
        cout<<v1[i]<<endl;
    }
    return 0;
}