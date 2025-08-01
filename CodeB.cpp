#include<bits/stdc++.h>
using namespace std;
int main(){
long long N;
cin>>N;
if(N<=1){
    cout<<"NO"<<endl;
return 0;
}
else
{
    bool isprime = true;
        for(long long i=2; i*i<=N;i++)
        {
            if(N%i==0)
                {
                isprime=false;
                break;

            }
        }
        if(isprime){
            cout<<"YES"<<endl;

        }
        else{
            cout<<"NO"<<endl;
        }
}
}

