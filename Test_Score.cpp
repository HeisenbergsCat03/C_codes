#include <bits/stdc++.h> 
using namespace std;
int main()
{ int n1;
cin>>n1;
for(int o=0;o<n1;o++){
    
string s="NO";
    int y,n,x;
    cin>>n>>x>>y;
    for(int i=0;i<=n;i++)
    {
        if(i*x==y){
            s="YES";
            break;
        }
    }
    cout<<s<<endl;

}}