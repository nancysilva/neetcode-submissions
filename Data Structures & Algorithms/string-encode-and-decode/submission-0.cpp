class Solution {
public:

    string encode(vector<string>& strs) {
        string result = "";

        for (string s : strs){
            result += to_string (s.size()) + '#' + s ;
        }
        return result;
    }

    vector<string> decode(string s) {
        vector <string> result;
        int i = 0;

        while (i<s.size()){
            int longitud = 0;

            while (s[i] != '#'){
                longitud =longitud * 10 + (s[i] - '0');  //Muevo el número que ya tenía una posición decimal a la izquierda y agrego el nuevo dígito al final
                i++;
            }
            i++;
            result.push_back(s.substr(i,longitud)); //substr (posicionInicial, cantidadDeCaracteres)
            i += longitud;

        }
        return result;
    }
};
