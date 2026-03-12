#include<iostream>
using namespace std;
int main()
// today we solve array question with the help of kadane algorthiims 
{
int n;
cout<<" enter the n number -";//
cin>>n;
int arr[5]={1,2,3,4,5};////
for(int st=0; st<n;st++){
    for(int end=st; end<n; end++){
        for(int i=st; i<=end;i++){
            cout<<arr[i];
        }
        cout<<" ";
    }
    cout<<endl;
}
return 0;
}