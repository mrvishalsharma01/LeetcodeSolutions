class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;

        unordered_map<char,int> counts,countt;
        for(char c : s) counts[c]++;
        for(char c : t) countt[c]++;

        return counts==countt;
    }
};