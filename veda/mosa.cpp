#include<iostream>
using namespace std;
int main()
{
    int n=5;
    int arr[5]={1,2,3 ,4,5};//
    int maxsum=INT_MIN;
    for (int start =0; start<n;start++){//
        int currsum=0;
        for (int end = start ; end< n; end++){
            currsum +=arr[end];
            maxsum=max(currsum,maxsum);
        }
    }
cout<<"the maxsum is:"<<maxsum<<endl;
return 0;
}