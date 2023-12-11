#include <iostream>
#include <cmath>
using namespace std;
bool right_is_max(int a[],int n){  //checks whether the entire left portion of the array is STRICTLY smaller than the (n-1)th element.
    int c=0;
    for(int i=0;i<n-1;i++)
    {
        if(a[n-1]<=a[i])
        c++;
    }
    return(c==0);
}
int main(){
    int t;
    cin>>t;
    for(int o=0;o<t;o++)
    {   
        int n,count=0;
        cin>>n;
        int arr[n];
        for(int a=0;a<n;a++)
            cin>>arr[a];
        for(int i=0;i<n;i++)
        {
            int array[i+1];
            if(i==0){
                if(arr[0]>arr[1])
                    count++;
                    
            }
            else if(i==n-1){
                if(right_is_max(arr,n)){
                    count++;   
                }
                }
                else {
                for(int j=0;j<=i;j++)
                {
                    array[j]=arr[j];
                    
                }
                if(right_is_max(array,i+1)&&(arr[i]>arr[i+1]))
                    count++;
            }
        }
        cout<<"Case #"<<o+1<<": "<<count<<endl;        
    }
    return 0;
}