void moveZeroes(vector<int>& nums) {
        
        int n = nums.size();
        for(int last_non_zero = 0, current = 0; current < n; current++){
            if(nums[current] != 0){
                swap(nums[last_non_zero++], nums[current]);
            }
        }
}
