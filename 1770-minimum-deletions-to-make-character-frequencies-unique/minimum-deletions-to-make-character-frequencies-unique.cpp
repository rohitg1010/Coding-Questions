class Solution {
public:
    int minDeletions(string s) {
        int hash[26]={0};
        for(int i=0;i<s.size();i++){
            hash[s[i]-'a']++;
        }
        int res=0;
        sort(hash,hash+26);
        /*for(int i=0;i<26;i++){
            for(int j=i+1;j<26;j++){
                if(hash[i]==hash[j]&&(hash[i]!=0&&hash[j]!=0)) res++;
            }
        }
        for(int i=0;i<25;i++){
            if(hash[i]==hash[i+1]&&(hash[i]!=0&&hash[i+1]!=0)) res++;
        }
        return res*2;*/
        int del = 0;
        for (int i = 24; i >= 0; i--) {
            if(hash[i] == 0) break; 
            if(hash[i] >= hash[i+1]){
                int prev = hash[i]; 
                hash[i] = max(0, hash[i+1] -1); 
                del += prev - hash[i]; 
            }
        }
        return del;
    }
};