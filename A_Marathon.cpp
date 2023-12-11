#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int o=0;o<n;o++)
    {
        int count=0;
        int arr[4];
        cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
        for(int i=1;i<4;i++)
        {
            if(arr[0]<arr[i])
            count++;
        }
        cout<<count<<endl;}}