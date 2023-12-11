#include <bits/stdc++.h> 
using namespace std;
int main()
{ int n1;
cin>>n1;
for(int o=0;o<n1;o++){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<max(max(a,b),c)-min(min(a,b),c)<<endl;
}}