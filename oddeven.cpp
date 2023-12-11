#include <iostream>
using namespace std;
int main(){
    int n,even=0,odd=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0)
        even++;
        else
        odd++;
    }
    cout<<odd<<" "<<even<<endl;
    return 0;
}