#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

bool prime(ll a) { if (a==1) return 0; for (int i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return 1; }

ll gcd(ll a,ll b)
{
    if(b==0) return a;
    if(b>a) return gcd(b,a);
    return gcd(b,a%b);
}

ll lcm(ll a,ll b)
{
    return (a*b)/gcd(a,b);
}
ll power(ll x,  ll y)
{
    if (y == 0)
        return 1;
    else if (y % 2 == 0)
        return ((power(x, y / 2)%mod) * (power(x, y / 2)%mod))%mod;
    else
        return ((((x  %mod) * ((power(x, y / 2)%mod)))%mod * (power(x, y / 2)%mod))%mod)%mod;
}

void solve()
{
    ll n,m;
    cin>>n,m;
    cout<<gcd(n,m);
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

