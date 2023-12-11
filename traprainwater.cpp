#include <bits/stdc++.h> 
using namespace std;
int rain(vector<int> a){
vector<int> leftmax(a.size());
vector<int> rightmax(a.size());
vector<int> diff(a.size());
vector<int> fin(a.size());
    leftmax[0]=0;
    int maximum = 0;
    for(int i = 1;i < a.size();i++){
        leftmax[i] = max(a[i-1],maximum);
        maximum = max(maximum,a[i-1]);
    }
    maximum = 0;
    rightmax[a.size()-1] = 0;
    for(int i = a.size()-2;i>=0;i--){
        rightmax[i] = max(a[i+1],maximum);
        maximum=max(maximum,a[i+1]);
    }
    for(int i = 0;i<a.size();i++){
        diff[i] = min(leftmax[i],rightmax[i]);
    }
    for(int i = 0;i<a.size();i++){
        if(diff[i] - a[i]>=0)
        fin[i] = diff[i] - a[i] ;
        else
        fin[i] = 0;
    }
    int count = 0;
    for(int i = 0;i<a.size();i++){
        count += fin[i];
    }
    return count;
    }
int main()
{
    vector<int> a = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << rain(a) << endl;
    return 0;
}