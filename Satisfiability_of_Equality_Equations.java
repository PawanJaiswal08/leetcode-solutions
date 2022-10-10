class Solution {
    
    public char[] alphabets;
    
    public boolean equationsPossible(String[] equations) {
        alphabets = new char[26];
        for(int i = 0; i < 26; i++) {
            alphabets[i] = (char)(i + 'a');
        }
        for(int i = 0; i < equations.length; i++){
            String eq = equations[i];
            if(eq.charAt(1) == '=') { 
                char p = findCharacter(eq.charAt(0));
                char q = findCharacter(eq.charAt(3));
                alphabets[p - 'a'] = q;
            }
        }
        for(int i = 0; i < equations.length; i++){
            String eq = equations[i];
            if(eq.charAt(1) == '!'){
                char a = findCharacter(eq.charAt(0));
                char b = findCharacter(eq.charAt(3));
                if(a == b) {
                    return false;
                }
            }
        }
        return true;
    }
    public char findCharacter(char ch){
        if(ch != alphabets[ch - 'a']) {
            alphabets[ch - 'a'] = findCharacter(alphabets[ch - 'a']);
        }
        return alphabets[ch - 'a'];
    }
}
