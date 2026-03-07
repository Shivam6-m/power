#include<iostream>
using namespace std;
int main()
{
int n,i,j;
cin>>n;
for(i=0;i<n;i++){
    //spaces
    for(j=0;j<i;j++)
        cout<<" ";
        //number
        for(j=0;j<n-i;j++){
            cout<<(i+1);
        }
    cout<<endl;
}

return 0;
}