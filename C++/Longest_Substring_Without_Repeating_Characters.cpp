class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,r=0;
        int res=0;
        set<int> s1;
        while(r<s.size()){
            if(s1.find(s[r])==s1.end()){
                s1.insert(s[r]);
            }
            else{
                while(s1.find(s[r])!=s1.end()){
                    s1.erase(s[l]);
                    l++;
                }
                s1.insert(s[r]);
            }
            res = max(res,r-l+1);
            r++;
        }
        return res;
    }
};
