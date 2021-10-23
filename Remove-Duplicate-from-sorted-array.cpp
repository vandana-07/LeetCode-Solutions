class Solution {
public:
    int removeDuplicates(vector<int>& v) {
      int cnt = 0;
 for(int i = 1; i < v.size(); i++){
    if(v[i] == v[i-1]) cnt++;
    else v[i-cnt] = v[i];
}
return v.size()-cnt;  
    }
};