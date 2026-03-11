#include <iostream>
using namespace std;
int main() {
int n;
cin>>n;
long long arr[1000];
long long output[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    output[0] = 1;
    for(int i =1;i<n;i++){
        output[i]=output[i-1]*arr[i-1];
    }
    long long right = 1;
    for(int i =n-1;i>=0;i--){
        output[i] = output[i] * right;
        right = right * arr[i];
    }
    for(int i =0;i<n;i++){
        cout<<output[i]<< " ";
    }
}