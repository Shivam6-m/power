#include <iostream>
using namespace std;
int main(){
    long long A;
    cin>>A;//
    long long low=0,high=A;
    long long ans=0;
    while(low<=high){
        long long mid=(low+high)/2;
        if(mid*mid==A){
            ans=mid;
            break;
        }
        if(mid*mid<A){
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    cout<<ans;
    return 0;
}