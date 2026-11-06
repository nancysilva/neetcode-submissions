class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string, vector<string>> groups;
        
        for (string palabra : strs){
            string  sortedWord = palabra; //No queremos modificar la palabra original, porque después tendremos que agregarla al grupo.
            sort(sortedWord.begin(),  sortedWord.end());
            groups[sortedWord].push_back(palabra);
        }

        vector<vector<string>>result;

        for (auto& group : groups){
            result.push_back(group.second);
        }
        return result;
        
    }
};
