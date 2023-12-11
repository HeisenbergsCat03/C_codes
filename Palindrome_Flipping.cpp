#include <bits/stdc++.h> 
using namespace std;
bool isPalindrome(string s){
    int i, length;
    int flag = 0;
    length = s.length();
    for(i=0;i < length ;i++){
        if(s[i] != s[length-i-1]){
            flag = 1;
            break;}
        }
    return (!flag);
}
int main()
{ int n1;
cin>>n1;
for(int o=0;o<n1;o++){
    int n,sum=0;
    long len;
    cin>>n;
    string s;
    cin>>s;
    len=s.length();
    int flag=0;
    for(int i=0;i<len;i++)
    sum+=s[i];
    if(isPalindrome(s)||len%2==1||sum%2==0)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;   
    }
}
