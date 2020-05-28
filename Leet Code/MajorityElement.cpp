int majorityElement(vector<int>& nums) {

        int count = 0;
        int majority;

        for(int i=0;i<nums.size();i++){
            if(count == 0)
                majority = nums[i];
            if(majority == nums[i]){
                count+=1;
            }
            else
                count -=1 ;
        }
        return majority;
    }
};
