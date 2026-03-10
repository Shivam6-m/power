#include<iostream>
#include<vector>
using namespace std;
int removeDuplicates(vector<int>& nums){
   int n=nums.size();
   // i= its a unique element ohk // ohk 
   //j= i use j for find a unique elemnt and giveit to be i //
   int i=0,j=1;
   while(j<n){
    if(nums[i]!=nums[j]){// got a uniques element and it check the condition is true or false 
        i++;// i creat a place for j
        nums[i]=nums[j];
    }
    j++;// to find a unique element 
   }
return i+1;// if i =4 so i becom 5 output
}
  int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter sorted array elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int k = removeDuplicates(nums);
    cout << "Number of unique elements: " << k << endl;
    cout << "Array after removing duplicates:\n";
    for(int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    return 0;
} 

