class Solution {
public:
    bool isValid(string s) {
        stack <char> pila;

        for (int i=0; i<s.size(); i++){
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                pila.push(s[i]);
    
            }else{ // Verificamos si el cierre actual corresponde al de apertura en el top
                if (!pila.empty() && (
                    (s[i] == ')' && pila.top() == '(') ||
                    (s[i] == ']' && pila.top() == '[') ||
                    (s[i] == '}' && pila.top() == '{'))) {

                    pila.pop();
                }else{
                    return false;
                }
            }
        }
        return pila.empty();
    }
};