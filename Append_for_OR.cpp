#include <bits/stdc++.h> 
using namespace std;

int nearestPowerOf2(int N)
{
    int a = log2(N);
    if(N == 0)
        return 2;
    if (pow(2, a) == N)
        return N;
    return pow(2, a + 1);
}

int main()
{ int n1;
cin>>n1;
for(int o=0;o<n1;o++){
    int n,val = -1,y;
    int value = 0;
    int flag= -1;
    cin>>n>>y;
    int arr[n];
    cin>>arr[0];
    value = arr[0];
    for(int i = 1;i<n;i++){
        cin>>arr[i];
    value = value | arr[i];
    }       
    if(nearestPowerOf2(y) == nearestPowerOf2(value)){

    
    for(int i = 0;i<=nearestPowerOf2(y/2);i++)
        {
            if(y == (value | i))
            {
                flag = i;
                break;
            }
        }}
        else
        {
            for(int i = 0;i<=nearestPowerOf2(y/2);i++)
        {
            if(y == (value | i))
            {
                flag = i;
                break;
            }
        }
        }

cout<<flag<<endl;
}}