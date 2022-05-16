class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int> m;
        
        for(int i = 0 ;i<nums.size();i++){
            int number = target - nums[i];
            if(m.find(number) != m.end()){
                vector<int>ans = {i , m[number]};
                return ans;
            }
            m[nums[i]] = i;
        }
        return {0,0};
    }
};