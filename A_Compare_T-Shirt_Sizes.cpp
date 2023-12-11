#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int o=0;o<n;o++)
    {
        string s1,s2;
        cin>>s1>>s2;
        int l1=s1.length();
        int l2=s2.length();
        char size1=s1[l1-1];
        char size2=s2[l2-1];
        if(size1!=size2){
            if(size1=='L')
            {
                cout<<">"<<endl;
                continue;
            }
            if(size1=='S')
            {
                cout<<'<'<<endl;
                continue;
            }
            if(size1=='M')
            {
                if(size2=='L')
                {
                    cout<<"<"<<endl;
                    continue;
                }
                else
                {
                cout<<">"<<endl;
                continue;}
            }
        }
        else
        {
            if(l1==l2){
            cout<<"="<<endl;
            continue;
            }
            if(l1<l2){
                if(size1=='S'){
                cout<<">"<<endl;
                continue;
                }
                else{
                cout<<"<"<<endl;
                continue;}
                if(size1=='L'){
                cout<<"<"<<endl;
                continue;
                }
                else{
                cout<<">"<<endl;
                continue;}
            }
                else{
                if(size1=='S'){
                cout<<"<"<<endl;
                continue;
                }
                else{
                cout<<">"<<endl;
                continue;
                }
                if(size1=='L'){
                cout<<">"<<endl;
                continue;
                }
                else{
                    cout<<"<"<<endl;
                    continue;}
                }
            }

        }
    }