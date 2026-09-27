class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char>NRSS;
        int ans = 0, left = 0;
        for(int right = 0; right < s.size(); right++){
            while(NRSS.count(s[right])){
                NRSS.erase(s[left]);
                left++;
            }
            NRSS.insert(s[right]);
            ans = max((int)NRSS.size(), ans);
        }
        return ans;
    }
};