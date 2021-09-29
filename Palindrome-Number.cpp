class Solution {
public:
    bool isPalindrome(int x) {
        
      string ans = to_string(x);
        reverse(ans.begin(), ans.end());
        return to_string(x) == ans;
        
        
    }
};