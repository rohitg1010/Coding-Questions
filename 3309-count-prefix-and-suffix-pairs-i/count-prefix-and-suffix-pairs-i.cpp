class Solution {
public:
    bool isPrefixAndSuffix(string s1,string s2){
        int n1=s1.size(),n2=s2.size();
        if(n1>n2){
            return false;
        }
        if(n1==n2){
            return s1==s2;
        }
        cout<<s1<<" "<<s2<<endl;
        string sub1 = s2.substr(0,n1);
        cout<<sub1<<endl;
        //cout<<n1<<" "<<n2<<endl;
        //cout<<n2-n1<<endl;
        string sub2 = s2.substr(n2-n1);
        cout<<sub2<<endl;
        return (sub1==s1)&&(sub2==s1);
        //return false;
    }
    int countPrefixSuffixPairs(vector<string>& words) {
        int n = words.size(),ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j&&i<j){
                    //cout<<words[i]<<" "<<words[j]<<endl;
                    if(isPrefixAndSuffix(words[i],words[j])) ans++;
                }
            }
        }
        return ans;
    }
};