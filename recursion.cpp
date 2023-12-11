#include <bits/stdc++.h>
using namespace std;
void rev(string s)
{
    char a=s[0];
    int n=s.length();
    if(n!=1){
    rev(s.erase(0,1));
    cout<<a;
    }
    else if(n==1)
    cout<<a;
}
int main()
{
    string p="Hello World";
    rev(p);
}