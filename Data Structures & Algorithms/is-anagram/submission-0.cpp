class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <char,int> map;

        for (int i=0; i<s.size();i++){
            map[s[i]]++;
        }
        for (int i=0; i<t.size();i++){
            map[t[i]]--;
        }

        
        for(auto par: map){
            if(par.second != 0){
                return false;
            }
        }
        return true;
    }
};
