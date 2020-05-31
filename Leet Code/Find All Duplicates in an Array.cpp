 vector<int> findDuplicates(vector<int>& nums) {
        
        vector<int>result;
        for(int i=0; i<nums.size(); i++){
            int temp = abs(nums[i]);
            
            nums[temp-1] = -nums[temp-1];
            
            if(nums[temp-1] > 0)
                result.push_back(temp);
            
        }
        
        
        return result;
    }
