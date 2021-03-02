class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set <int> uniqueCandySet;
        int totalCandy = candyType.size();
        
        for(int i=0; i<totalCandy; i++) {
            uniqueCandySet.insert(candyType[i]);
        }
        
        int unique = uniqueCandySet.size();
        
        if ( unique >= totalCandy/2) {
            return totalCandy/2;
        } else {
            return unique;
        }
    }
};