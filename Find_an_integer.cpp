#include <bits/stdc++.h> 
using namespace std;
int main()
{ int n1;
cin>>n1;
for(int o=0;o<n1;o++){
    int x,y;
    cin>>x>>y;
    int a = x%y;
    int b = y%x;
    int alpha = a/x;
    int beta = b/y ;
    int n = (beta*y - b)*(alpha*x-a);
    cout<<n<<endl;
}}