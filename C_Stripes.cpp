#include <bits/stdc++.h> 
using namespace std;
int main()
{ int n1;
cin>>n1;
for(int o=0;o<n1;o++){
    char c1[8][8];
    char ans='B';
    bool check= true;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cin>>c1[i][j];
        }
    }
    for (int i=0;i<8;i++)
    {
        if(c1[i][0]=='R')
        {
            for(int j=1;j<8;j++){
            check = check && (c1[i][j-1]==c1[i][j]);
            }
            if(check)
            ans='R';
        }}
    cout<<ans<<endl;}
    return 0;
}
