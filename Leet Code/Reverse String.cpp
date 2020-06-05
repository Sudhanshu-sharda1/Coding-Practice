class Solution {
public:
    void reverseString(vector<char>& s) {
        
        int n = s.size();
        int start = 0, end = n-1;
        int temp;
        while(start < end){
            temp = s[end];
            s[end] = s[start];
            s[start] = temp;
            end--;
            start++;
        }
    }
};
