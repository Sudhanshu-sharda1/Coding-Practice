 vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        vector<int> result;
        for(int i=0; i<nums.size(); i++){
            int temp = nums[i];
            if(temp < 0)
                temp = -temp;
            if(nums[temp-1]>0)
                nums[temp-1] *= -1;
        }
        for(int i=0; i<nums.size(); i++){
            if(nums[i] > 0)
                result.push_back(i+1);
        }
        
        return result;
    }
