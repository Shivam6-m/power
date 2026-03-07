#include<iostream>
using namespace std;
int main()
{

int N,i,j;
cin>>N;
int a=0,b=1;
for(i=1;i<=N;i++){
    for(j=1;j<=i;j++){
        cout<<a<<" ";
        int c=a+b;
        a=b;
        b=c;
    }
    cout<<endl;
}



return 0;
}