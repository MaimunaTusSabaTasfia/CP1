#include<bits/stdc++.h>
using namespace std;
int main(){
    int l1,l2,u1,u2;
    cin>>l1>>u1>>l2>>u2;
    if(max(l1,l2)<=min(u1,u2))
    cout<<max(l1,l2)<<" "<<min(u1,u2)<<endl;
    else
    cout<<-1<<endl;

    return 0;
}