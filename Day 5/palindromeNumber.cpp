class Solution {
public:
    bool isPalindrome(int x) {
        int n = x;
        long long int reverse = 0;
        while(x > 0){
            int num = x%10;
            reverse = (reverse*10) + num;
            x = x/10;
        }
        
        if(reverse == n){
            return true;
        }else{
            return false;
        }
    }
};