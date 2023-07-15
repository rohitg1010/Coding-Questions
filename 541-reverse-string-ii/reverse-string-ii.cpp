// class Solution {
// public:
//     string reverseStr(string s, int k) {
//        if(k==1) return s;
//        int t=0,n=s.size();
//        if(k>=n){
//             reverse(s.begin(),s.end());
//     //    cout<<s<<endl;
//             return s;
//        }
//        bool flag=true;
//        for(int i=0;i<n;i++){
//         //    if(n-i-1<k) break;
//            if(t==k&&flag){
//             //    cout<<s[i-k]<<" "<<s[i-1]<<endl;
//                reverse(s.begin()+i-k,s.begin()+i);
//             //    cout<<s<<endl;
//                t=0;i--;
//                flag=false;
//            }
//            else if(t==k&&flag==false){
//                t=0;i--;
//                flag=true;
//            }
//            else t++;
//        } 
//        return s;
//     }
// };

class Solution {
public:
    string reverseStr(string s, int k) {
        int n = s.size();
        for (int i = 0; i < n; i += 2 * k) {
            if (i + k <= n) {
                reverse(s.begin() + i, s.begin() + i + k);
            } else {
                reverse(s.begin() + i, s.end());
            }
        }
        return s;
    }
};