class Solution {
public:
    vector<int>prefix;
    Solution(vector<int>& w) {
        
        srand(time(NULL));
        int n = w.size();
        int sum = 0;
        for(int i=0; i<n; i++){
            sum += w[i];
            prefix.push_back(sum);
        }
    }
    
    int pickIndex() {
        
        int target = rand() % prefix.back();
         auto resIt = upper_bound(prefix.begin(), prefix.end(), target);
        return resIt - prefix.begin();
       
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */
