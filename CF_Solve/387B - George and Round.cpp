#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
map<pair<int,int>,int>mp;
ll mod=1000000007;
ll BigMod(ll base,ll pow,ll mod){if(pow==0)return 1;if(pow%2==0){ll t=BigMod(base,pow/2,mod);return (t*t)%mod;}return ((ll)BigMod(base,pow-1,mod)*(ll)base)%mod;}
ll modulu_Inverse(ll a,ll m){return BigMod(a,m-2,m);}
void solve()
{
    ll n,m;
    cin>>n>>m;
    ll a[n];
    ll b[m];
    map<ll,ll>mp;
    vector<ll>v;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    for(ll i=0;i<m;i++)
    {
        cin>>b[i];
        if(mp[b[i]]>0)
        {
            mp[b[i]]--;
        }
        else v.push_back(b[i]);
    }
    vector<ll>aa;
    for(ll i=0;i<n;i++)
    {
        if(mp[a[i]]>0)
        {
            aa.push_back(a[i]);
        }
    }
    if(aa.size()==0)
    {
        cout<<0<<endl;
        return;
    }
    ll cnt=0;
    for(ll i=0;i<aa.size();i++)
    {
        ll x=aa[i];
        auto it=upper_bound(v.begin(),v.end(),x);
        if(it==v.end())
        {  
            cnt++;
        }
        else
        {
            *it=0;
        }
    }
    cout<<cnt<<endl;

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
