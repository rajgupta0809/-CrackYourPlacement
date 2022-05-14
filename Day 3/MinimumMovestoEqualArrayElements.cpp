class Solution {
public:
    int minMoves(vector<int>& nums) {
        int sum = 0;
        for(auto i: nums){
            sum += i;
        }
        
        int smallest = INT_MAX;
        for(auto i: nums){
            smallest = min(smallest , i);
        }
        
        return sum - nums.size()*smallest;
    }
};