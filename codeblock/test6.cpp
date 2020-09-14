#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;


bool sortbysec(const pair<long long int,long long int> &a,
              const pair<long long int,long long int> &b)
{
    return (a.second < b.second);
}
int main()
{
   long long int n,mx=0;
   cin>>n;
   long long int x,y;
   vector< pair<long long int,long long int> >v,c;
   for(int i=0;i<n;i++){
    cin>>x>>y;
    v.push_back(make_pair(x,y));
    c.push_back(make_pair(y,x));
   }
   sort(v.begin(),v.end());
    //sort(v.begin(), v.end(), sortbysec);
   sort(c.begin(),c.end());
   long long int h=(v[n-1].first-v[0].first)+(v[n-1].second-v[0].second);
   long long int k=(c[n-1].first-c[0].first)+(c[n-1].second-c[0].second);
   cout<<max(h,k)<<endl;
}
