//count the number of digits and overwrite them in original array
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count0 = 0;
        int count1 = 0;
        int count2 = 0;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 0){
                count0++;
            }else if(nums[i] == 1){
                count1++;
            }else{
                count2++;
            }
        }
        
        for(int i=0;i<count0;i++){
            nums[i] = 0;
        }
        for(int i=count0;i<(count0+count1);i++){
            nums[i] = 1;
        }
        for(int i=(count0+count1);i<nums.size();i++){
            nums[i] = 2;
        }
    }
};