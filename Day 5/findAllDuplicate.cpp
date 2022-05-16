//method-1: using O(n) space
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int, int> result;
        
        for(auto i: nums){
            result[i]++;
        }
        
        for(auto i: result){
            if(i.second > 1){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};

//method 2 by marking negetive the visited element
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        
        for(int i=0;i<nums.size();i++){
            int number = abs(nums[i]) - 1; //cause range is only from 1 to n
            if(nums[number]<0){
                ans.push_back(number+1);
            }
            nums[number] = -nums[number];
        }
        return ans;
    }
};