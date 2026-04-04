// this code for bookallocation question which is given in assigment 5
#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
bool isvalid(vector<int> &arr,  int n , int m, int maxAllowedPages){//0(n)//
    int students =1;
    int pages =0;
for( int i =0; i<n; i++){
    if(arr[i] > maxAllowedPages){ //this is the edge cases and its very important cases ohk
        return false ;
    }
    if(pages + arr[i] <= maxAllowedPages){//
        pages += arr[i];

    }//
    else{
        students ++;
        pages = arr[i];
    }//
}
 return students > m ? false: true;

}
int allocateBooks(vector<int> &arr, int n, int m){
    if ( m > n ){
        return -1;
    }
   int sum=0;
    for(int i=0;i <n ;i++){ // 0(n)
        sum +=arr[i];
    } 

    int ans= -1;
    int start=*max_element(arr.begin(), arr.end());
    int end=sum;  // it is the max sum of all pages 
    
    while(start <= end){// this is the big of login  0(logN * n) here tha value of n is the total number of book andthis capitla N tell us range jiske uper ham binary search ko apply kar rhe hai 
        int mid =start +(end - start)/2;

        if (isvalid(arr ,n,m,mid)){// go to left and find or small answer 
             ans = mid;
             end = mid -1;
        }
        else{ // if the value is big so go to right 
            start = mid +1; 

        }
    }
    return ans;
}
int main()
{
vector<int>arr = { 2,1,3,4};
int n=4 ;// this is how many book 
int m=2 ; /// this is for students  

cout<< allocateBooks(arr , n ,m)<< endl;//
return 0;
}//
