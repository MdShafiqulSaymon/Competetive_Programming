#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
map<pair<int,int>,int>mp;
ll mod=1000000007;
ll BigMod(ll base,ll pow,ll mod){if(pow==0)return 1;if(pow%2==0){ll t=BigMod(base,pow/2,mod);return (t*t)%mod;}return ((ll)BigMod(base,pow-1,mod)*(ll)base)%mod;}
ll modulu_Inverse(ll a,ll m){return BigMod(a,m-2,m);}
ll n,m,total;
int a[(int)1e5+3],b[(int)1e5+3];
int calculate(ll k,ll tot)
{
    if(k>m)return -1;
    ll j=0;
    ll have=0;
    for(ll i=n-k;i<n;i++)
    {
        if(a[i]>=b[j])
        {
            j++;
        }
        else if(a[i]+tot>=b[j])
        {
            tot=tot-(b[j]-a[i]);
            j++;
        }
        else return -1;
    }
    return 1;
 
}
void solve()
{
    cin>>n>>m>>total;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(ll i=0;i<m;i++)
    {
        cin>>b[i];
    }
    sort(b,b+m);
    int l=0;
    int r=n;
    int ans=0;
    while(l<=r)
    {
        ll mid=(l+r)/2;
        ll possible=calculate(mid,total);
        //cout<<mid<<" "<<possible<<endl;
        if(possible>0)
        {
            ans=mid;
            l=mid+1;
        }
        else r=mid-1;
    }
    ll need=0;
    ll have=0;
   // cout<<ans<<endl;
    for(int i=0;i<ans;i++)
    {
        need+=b[i];
    }
    for(ll i=n-ans;i<n;i++)
    {
        have+=a[i];
    }
    if(need<=total)cout<<ans<<" "<<0<<endl;
    else
    {
        need-=total;
        cout<<ans<<" "<<need<<endl;
    }
 
 
}
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt; 
    //cin>>tt;
    tt=1;
    int strt=1;
    
    while(strt<=tt)
    { 
        solve();
        strt++;
    }
}
