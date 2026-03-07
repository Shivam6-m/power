#include<iostream>
using namespace std;
int main()
{
int n,i;
int num=1;
cin>>n;
for(i=0;i<n;i++){
    for(int j=0;j<i+1;j++){
        cout<<num<<" ";
        num++;
    }
cout<<endl;
}


return 0;
}