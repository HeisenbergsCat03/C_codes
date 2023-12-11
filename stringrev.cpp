#include <bits/stdc++.h> 
using namespace std;
string reverse(string s){
    stack<char> temp,rev;
    string r="";
    for(int i = 0;i<s.length();i++){
        if(s[i]=='.'){
            if(temp.empty())
            r+=".";
            else{
                while(!temp.empty()){
                    r+=(temp.top());
                    temp.pop();
                }
                r+=".";
            }
        }
        else{
            temp.push(s[i]);
        }}
        while(!temp.empty()){
                    r+=(temp.top());
                    temp.pop();
    }
    return r;
}
int main(){
    string s = "i.like.this.program.very.much";
    cout<<reverse(s)<<endl;
    return 0;

}