#include <iostream>
using namespace std;
int main() {
  int n;
  cin>>n;
int arr[1000000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int left=0; 
    int right=n-1;
    while(left<right){
        if(arr[left]==0){
            left++;
        }
        else{
            swap(arr[left],arr[right]);
            right--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}