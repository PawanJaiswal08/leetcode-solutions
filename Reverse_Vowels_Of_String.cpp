class Solution {
public:
    bool isVowel(char c){
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    }
    
    string reverseVowels(string s) {
        int n = s.length();
        int st = 0;
        int e = n-1;
        while(st<e){
            if(!isVowel(s[st])){
                st++;
                continue;
            }
            if(!isVowel(s[e])){
                e--;
                continue;
            }
            swap(s[st], s[e]);
            st++;
            e--;
        }
        return s;
    }
};