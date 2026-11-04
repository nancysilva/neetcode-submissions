class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int,int>frequency;
        vector<vector<int>> buckets(nums.size()+1);

        //Iteracion para la creacion del map frecuencia
        for (int num:nums){
            frequency[num]++;
        }
        //Generación de 'buckets' con relación a frecuencia.
        for(auto pair: frequency){
            buckets[pair.second].push_back(pair.first);
        }

        // Obtener los K elementos mas frecuentes
        vector<int>result;
        for (int i=buckets.size()- 1; i >= 0; i--){
            for (int num: buckets[i]){
                result.push_back(num);

                if (result.size() == k){
                    return result;
                }
            }
        }
        return result;
    }
};
