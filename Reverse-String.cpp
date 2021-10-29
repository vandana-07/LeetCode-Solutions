class Solution {
public:
    void reverseString(vector<char>& p) {
        
        int j = p.size() - 1;
        int i =0;
        while(i<j)
        {
            
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            i++;j--;
        }
    
    }
};