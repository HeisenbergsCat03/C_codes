#include <iostream>
#include <string>
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
int octtodec(int a){
    int dec=0,rem=0,c=1;
    for(;a>0;a/=10){
    rem=a%10;
    dec+=rem*(c);
    c*=8;
    }
    return dec;
}
int hextodecimal(string a){
    int dec=0,c=1;
    for(int i=a.length()-1;i>=0;i--)
    {
        if(a[i]>='0'&& a[i]<='9')
        dec+=int(a[i]-'0')*c;
        else if (a[i]>='A'&&a[i]<='F')
        {
            dec+=int(a[i]-'A'+10)*c; 
        }
        c*=16;
    }
    return dec;
    }
int main(){
    int b=2^0; //use int for binary,octal conversions
    string s; //use string for hex conversions
    cin>>s;
    cout<<hextodecimal(s);

}