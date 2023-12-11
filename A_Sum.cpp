#include <bits/stdc++.h> 
using namespace std;
int main()
{ int n1;
cin>>n1;
for(int o=0;o<n1;o++){
    int n11,n2,n3;
    cin>>n11>>n2>>n3;
    if(n11==n2+n3||n3==n11+n2||n2==n3+n11)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
return 0;
}