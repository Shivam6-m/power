#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100][100];
    for(int i=0;i<n;i++){//
        for(int j=0;j<n;j++){////
            cin>>arr[i][j];
        }
    }
    bool isLower=true;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j>i&&arr[i][j]!=0){
                isLower=false;
                break;
            }
        }
        if(!isLower)
            break;//
    }
    if(isLower)
        cout<<"true";//this say true 
    else
        cout<<"false";// this is say false//
}