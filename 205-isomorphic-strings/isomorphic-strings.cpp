class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int arr1[201] = {0};
        int arr2[201] = {0};
        for(int i=0;i<s.size();i++){
            if(arr1[s[i]]!=arr2[t[i]]){
                return false;
            }
            arr1[s[i]]=i+1;
            arr2[t[i]]=i+1;
        }
        return true;
    }
};