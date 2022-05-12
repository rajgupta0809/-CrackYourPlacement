//Method 1: Using Hashmap
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int , int> ans;
        int result;
        for(int i=0;i<nums.size();i++){
            ans[nums[i]]++;
        }
        for(auto i: ans){
            if(i.second > 1){
                result = i.first;
            }
        }
        return result;
    }
};

//method 2: just traverse and mark visited with negetaive

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[abs(nums[i])] >= 0){
                nums[abs(nums[i])] = -nums[abs(nums[i])];
            }else{
                return abs(nums[i]);
            }
        }
        return 0;
    }
};