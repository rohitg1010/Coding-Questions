class Solution {
public:
    bool canJump(vector<int>& nums) {
     int left = 0 ; 
     int right = 0 ; 
     int maxi = 0 ; 
     int n = nums.size() ;

     while (right < n -1)
     {
        for (int i = left ; i <= right ; i++)
        {
            maxi = max(maxi , i + nums[i]) ; 
        }
        if (maxi <= right)
        return false ;
        left = right +1 ;
        right = maxi ;    
     }

     return true ;   
    }
};