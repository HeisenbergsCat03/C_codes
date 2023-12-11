#include <iostream>
using namespace std;
int bintodec(int a){
    int dec=0,rem=0,c=1;
    for(;a>0;a/=10){
    rem=a%10;
    dec+=rem*(c);
    c*=2;
    }
    return dec;
}
int main(){
    int b;
    cin>>b;
    cout<<bintodec(b);

}