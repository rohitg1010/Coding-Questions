class Solution {
public:
    bool winnerOfGame(string colors) {
        int count_a=0,count_b=0;
        if(colors.size()<=2) return false;
        for(int i=0;i<colors.size()-2;i++){
            string s=colors.substr(i,3);
            cout<<s<<endl;
            if("AAA"==s) count_a++;
            if("BBB"==s) count_b++;
        }
        cout<<count_a<<" "<<count_b<<endl;
        if(count_a==count_b) return false;
        if(count_a>count_b) return true;
        return false;
    }
};