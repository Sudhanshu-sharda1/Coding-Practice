class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        
        int n = costs.size();
        int sum = 0;
        sort(costs.begin(), costs.end(), [](vector<int> &a, vector<int> &b){
            if(a[1]-a[0]>b[1]-b[0])
                return true;
            return false;
        });
        
        for(int i=0; i<n/2; i++){
            sum += costs[i][0];
        }
        for(int i=n/2; i<n; i++){
            sum += costs[i][1];
        }
        return sum;
    }
};
