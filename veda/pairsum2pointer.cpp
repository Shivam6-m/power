#include<iostream>
using namespace std;
vector<int>pairsum(vector<int>nums, int target){// this is our time 0(n)
    vector<int>ans;
    int n=nums.size();
    int i=0;// this is start 
    int j=n-1;// this end start and it goese n-1
while(i<j){
    int pairsum= nums[i]+nums[j];
        if(pairsum>target){
            j--;

        }
        else if (pairsum<target){
            i++;
        }
        else{ 
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }


    }
    return ans;
} 
int main()
{
    vector<int> nums={2,7,11,15};
    int target =13;
    vector<int>ans=pairsum(nums,target);
    cout<<ans[0] <<" ," <<ans[1]<< endl;
return 0;
}