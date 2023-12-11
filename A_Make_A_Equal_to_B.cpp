    #include <iostream>
    #include <cmath>
    using namespace std;
    int main()
    {
    int t;
    cin>>t;
    for(int o=0;o<t;o++){
        int n,eq=0,n01=0,n10=0;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
            if(a[i]==b[i])
            eq++;
            else if (a[i]==1&&b[i]==0)
            n01++;
            else if(a[i]==0&&b[i]==1)
            n10++;
        }
        if(n10==n01&&n10!=0){
            cout<<"1"<<endl;
        }
        else if(n01!=0&&n10!=0){
        cout<<1+ abs(n01-n10)<<endl;
        }
        else if(n01==0||n10==0)
        cout<<max(n10,n01)<<endl;
        }}