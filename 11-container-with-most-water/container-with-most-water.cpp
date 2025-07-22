class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxi=0,i=0,j=height.size()-1;
        while(i<j){
            //cout<<(j-i)<<" "<<min(height[i],height[j])<<endl;
            //cout<<i<<" "<<j<<endl;
            maxi=max(maxi,(j-i)*min(height[i],height[j]));
            if(height[i]>=height[j]) j--;
            else i++;
        }
        return maxi;
    }
};