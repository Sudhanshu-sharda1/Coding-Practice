class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int n = nums.size();
        int zero = 0, one = 0, two = n-1;
        
        while(one <= two)
        {
            if(nums[one] == 0){
                swap(nums[one], nums[zero]);
                one++;
                zero++;
            }
            else if (nums[one] == 1){
                one++;
            }
            else if(nums[one] == 2){
                swap(nums[one], nums[two]);
                two--;
            }
        }
    }
};
