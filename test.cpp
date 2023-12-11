#include <iostream>
#include <cmath>
using namespace std;
int right_is_max(int a[],int n){  //checks whether the entire left portion of the array is STRICTLY smaller than the (n-1)th element.
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(a[n-1]<=a[i])
        c++;
    }
    return c;
}
int main(){
    int a[5]={1,2,3,4,5};
    cout<<right_is_max(a,5);
    return 0;
}
