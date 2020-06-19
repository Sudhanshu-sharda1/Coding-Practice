class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int last[256];
        int max_size = 0;
        memset(last, -1, sizeof(last));
        int begin_pos = 0;
        for(int last_pos = 0; last_pos < s.size(); last_pos++){
            if(last[s[last_pos]] < begin_pos){
                max_size = max(max_size, last_pos - begin_pos + 1);
            }
            else{
                begin_pos = last[s[last_pos]] + 1;
            }
            last[s[last_pos]] = last_pos;
        }
        
        return max_size;
    }
};
