#include<iostream>
#include<vector>
using namespace std;
int binarysearch(vector<int> arr, int target){
    int start=0;
    int end=arr.size()-1;
    while(start <=end){
       int mid= start +(start -end)/2;
        if( target > arr[mid]){
            start=mid +1;
        }
        else if ( target <arr[mid]){
            end = mid -1;
        }
        else {
            return mid;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr1= {-1,0,3,4,5,9,12};//  this is for odd 
    int target1=12;
 
     //cout<<binarysearch(arr1, target1) <<endl;


    vector<int> arr2 ={-1,0,3,5,9,12};//this is for even 
    int target2=10;
  cout<<binarysearch(arr2, target2) <<endl;
vector<int> arr3 ={3,4,5,6,7,0,1,2,};
int target3=0;
 //cout<<binarysearch(arr3, target3) <<endl;
return 0;
}