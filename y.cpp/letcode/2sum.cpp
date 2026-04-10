#include<iostream>  
#include<vector>
using namespace std;
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            vector<int> a;
            
            for(int j=i+1;j<=nums.size();j++){
                if((nums[j]+nums[i])==target){
                   return {nums[i],nums[j]}; 
                }
            }
        }
    }
int main(){ 
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = twoSum(nums, target);
    cout<< "The two numbers are: " << result[0] << " and " << result[1] << endl;
    return 0;
}