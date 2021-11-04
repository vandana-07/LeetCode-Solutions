class Solution {
public:
    bool isPalindrome(int y) {
        
      string ans = to_string(y);
        reverse(ans.begin(), ans.end());
        return to_string(y) == ans;
        
        
    }
};