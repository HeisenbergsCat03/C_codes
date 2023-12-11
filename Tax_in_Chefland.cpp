#include <iostream>
#include <cmath>
using namespace std;
int main()
{ int n;
cin>>n;
for(int o=0;o<n;o++){
    int inc;
    cin>>inc;
    if(inc>100)
    cout<<inc-10<<endl;
    else
    cout<<inc<<endl;
}
return 0;
}