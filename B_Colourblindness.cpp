#include<iostream>
#include<string>

using namespace std;
string replace(string s){
    string b="";
    for(int i=0;i<s.length();i++)
        {
            if(s[i]=='G')
                b[i]='B';
            else
                b[i]=s[i];
        }
    return b;
}

int main(){
    int t;
    cin>>t;
    for(int o=0;o<t;o++){
        int n;
        cin>>n;
        string s1,s2,s,ss;
        cin>>s1>>s2;
        s=replace(s1);
        ss=replace(s2);
        if(s!=ss)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}







