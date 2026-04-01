#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[1000][1000];//
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {//
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=i;j<n;j++) {
            swap(arr[i][j],arr[j][i]);
        }
    }
    for(int j=0;j<n;j++) {
        int top=0,bottom=n-1;
        while(top<bottom){
            swap(arr[top][j],arr[bottom][j]);
            top++;
            bottom--;
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {//
            cout<<arr[i][j]<< " ";
        }
        cout<<endl;
    }
    return 0;
}