#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int x;
string cheak(string w){
 string s=w;
 for(int i=0;i<w.size();i++){
    if(i-x>=0 &&w[i-x]=='1'  ||  i+x<=w.size() &&w[i+x]=='1'){
        s[i]='1';

    }
    else{
        s[i]='0';
    }
 }
return s;

}
int main()
{
    int t;
    cin>>t;
    while(t>0){
        string s;
        cin>>s;
        cin>>x;
        int l=s.size();
        string w=string (l,'1');
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                if((i-x)>=0){
                    w[i-x]='0';
                }
                if((i+x)<l){
                    w[i+x]='0';
                }
            }
        }
        if(cheak(w)==s) cout<<w<<endl;
        else {
                cout<<-1<<endl;
               // cout<<w<<endl;
               // cout<<cheak(w)<<endl;
        }
            t--;

    }
}
