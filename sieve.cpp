#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=1e16+10;
vector<bool> isPrime(N,1);
signed main()
{
    isPrime[0]=isPrime[1]=false;
    for(int i=2;i<N;i++){
        if(isPrime[i]){
            for(int j=2*i;j<N;j+=i){
                isPrime[j]=false;
            }
        }
    }
    int n;
    cin>>n;
    if(isPrime[n]) cout<<"PRIME"<<endl; 
}

