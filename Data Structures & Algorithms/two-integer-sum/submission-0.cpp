class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int> map;

        for (int i=0; i<nums.size(); i++){
            int posNumber = target - nums[i];

            //(Donde encontro) es DIFERENTE de (El final de la libreta)
            if (map.find(posNumber) != map.end()){
                return {map[posNumber],i};
            }
            else{
                map[nums[i]]=i; //
            }
        }
        return {};
    }
};
