class Solution {
public:
    bool isValid(string word) {
        if(word.size()<3) return false;
        bool ans = true;
        bool vowel = false;
        bool cont = false;
        for(auto it:word){
            if(!((it>='0'&&it<='9')||(it>='a'&&it<='z')||(it>='A'&&it<='Z'))){
                ans = false;
            }
            if(it=='a'||it=='A'||it=='e'||it=='E'||it=='i'||it=='I'||it=='o'||it=='O'||it=='u'||it=='U'){
                vowel = true;
            }
            else if((it>='a'&&it<='z')||(it>='A'&&it<='Z')){
                cont = true;
            }
        }
        return ans&&vowel&&cont;
    }
};