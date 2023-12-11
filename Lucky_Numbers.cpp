#include <bits/stdc++.h> 
using namespace std;
int main()
{ int n1;
cin>>n1;
for(int o=0;o<n1;o++){
    int n,curr = 0,flag=0;
    cin>>n;
    while(n!=0)
    {
    curr = n%10;
    n=n/10;
    if(curr == 7){
        flag = 1;
        break;
    }
    }
    if(flag){
        cout<<"YES"<<endl;
    }
    else
    cout<<"NO"<<endl;
    }
}