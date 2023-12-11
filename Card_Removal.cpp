#include <bits/stdc++.h> 
using namespace std;
int main()
{ int n1;
cin>>n1;
for(int o=0;o<n1;o++){
    int n;
    cin>>n;
    int a[n],arr[n],maxi=0;
    int b[11];
    for(int i=0;i<11;i++)
    b[i]=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[a[i]]++;
    }
    for(int i=0;i<11;i++)
    maxi=max(maxi,b[i]);
    cout<<n-maxi<<endl;
}
return 0;


}
