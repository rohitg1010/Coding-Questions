class Solution {
public:
    string addStrings(string num1, string num2) {
        int carry=0;
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        string ans="";
        int mini=min(num1.size(),num2.size());
        for(int i=0;i<mini;i++){
            int t=num1[i]-'0'+num2[i]-'0';
            t+=carry;
            ans+=to_string(t%10);
            carry=t/10;
        }
        if(mini==num1.size()){
            int idx=mini;
            for(int i=idx;i<num2.size();i++){
                int t=num2[i]-'0';
                t+=carry;
                ans+=to_string(t%10);
                carry=t/10;
            }
        }
        if(mini==num2.size()){
            int idx=mini;
            for(int i=idx;i<num1.size();i++){
                int t=num1[i]-'0';
                t+=carry;
                ans+=to_string(t%10);
                carry=t/10;
            }
        }
        if(carry) ans+=to_string(carry);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};