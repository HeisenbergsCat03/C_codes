#include <bits/stdc++.h> 
using namespace std;
int how_many_zeroes(string s){
    int count = 0;
    for (int i = 0 ;i < s.length();i++)
    {
        if(s[i]=='0')
        {
            count++;
        }
    }
    return count;
}
int main(){
    int t;
    cin>>t;
    for(int o = 0;o<t;o++)
    {
        int s10,s11,s21,s20;
        string s1,s2;
        cin>>s1>>s2;
        s10=how_many_zeroes(s1);
        s11 = s1.length()-s10;
        s20=how_many_zeroes(s2);
        s21 = s2.length() - s20;
        int ones = min(s10,s21)+min(s20,s11);
        for(int i =0 ; i <ones;i++)
            cout<<"1";
        for (int i = ones; i < s1.length();i++)
            cout<<"0";
        cout<<endl;}}
