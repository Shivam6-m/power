#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        cout<<" ";
        if(i==1)
        cout<<"O";
        else if(i==2)
        cout<<"/|\\";
        else
        {
            cout<<"/";
            for(int k=1;k<=2*(i-3)+1;k++)
            cout<<" ";
            cout<<"\\";
        }
        cout<<endl;
    }
}