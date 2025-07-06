class Solution {
public:
    bool isValidBL(string s){
        if(s=="electronics"||s=="grocery"||s=="pharmacy"||s=="restaurant") return true;
        return false;
    }
    bool isValidCode(string s){
        for(auto it:s){
            if(!((it>='a'&&it<='z')||(it>='A'&&it<='Z')||(it>='0'&&it<='9')||(it=='_'))) return false;
        }
        return true;
    }
    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
        int n=code.size();
        vector<string> ans;
        vector<string> elec,groc,phar,rest;
        for(int i=0;i<n;i++){
            if(isActive[i]&&isValidBL(businessLine[i])){
                if(isValidCode(code[i])){
                    if(businessLine[i]=="electronics"){
                        elec.push_back(code[i]);
                    }
                    else if(businessLine[i]=="grocery"){
                        groc.push_back(code[i]);
                    }
                    else if(businessLine[i]=="pharmacy"){
                        phar.push_back(code[i]);
                    }
                    else if(businessLine[i]=="restaurant"){
                        rest.push_back(code[i]);
                    }
                }
            }
        }
        sort(elec.begin(),elec.end());
        sort(groc.begin(),groc.end());
        sort(phar.begin(),phar.end());
        sort(rest.begin(),rest.end());
        if(elec.size()>0) for(auto it:elec) if(it.size()>0) ans.push_back(it);
        if(groc.size()>0) for(auto it:groc) if(it.size()>0) ans.push_back(it);
        if(phar.size()>0) for(auto it:phar) if(it.size()>0) ans.push_back(it);
        if(rest.size()>0) for(auto it:rest) if(it.size()>0) ans.push_back(it);
        return ans;
    }
};