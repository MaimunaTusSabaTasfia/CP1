#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int check=0;
    for(int i=n;i<=m;i++)
    {
        int flag=1;
        int temp=i;
        while(temp>0){
            int r=temp%10;
            if(r!=4 && r!=7)
            {
                flag=0;
                break;
            }
            temp/=10;
        }
        if(flag==1)
        {
            check=1;
            cout<<i<<" ";
        }
    }
    if(check==0)
    {
        cout<<-1;
    }
    

    return 0;
}