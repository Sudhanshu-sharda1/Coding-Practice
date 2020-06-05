class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int i = 0, j= nums.size()-1;
        vector<int>result;
        sort(nums.begin(), nums.end());
        while(j>i){
            int sum = nums[i]+nums[j];
            if(sum == target){
                result.push_back(i);
                result.push_back(j);
                break;
            }
            if(sum > target){
                j--;
            }
            else if(sum < target){
                i++;
            }
        }
        return result;
    }
};
