#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b;
    cin>>n>>a>>b;
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        int digit=i;
        int digit_sum=0;
        while(digit>0){
            digit_sum+=digit%10;
            digit/=10;
        }
        if(digit_sum>=a && digit_sum<=b){
            sum+=i;
        }
    }
    cout<<sum<<endl;
    return 0;
}