class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0,n=height.size();
        int r= n-1;
        int maxa=INT_MIN;
        
        while(l<r)
        {
            int lh=height[l],rh=height[r];
            int minh=min(lh,rh);
            
            maxa= max(maxa,minh*(r-l));
            if(lh<rh)l++;
            else r--;
        }
        return maxa;
    }
};