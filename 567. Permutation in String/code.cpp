class Solution {
      
    
    private:
    bool checkEqual(int arr1[26],int arr2[26]){
        for(int i=0;i<26;i++){
            if(arr1[i]!=arr2[i])
                return 0;
        }
        return 1;
    }
public:
    bool checkInclusion(string s1, string s2) {
        
        int arr1[26]={0},n;
        for(int i=0;i<s1.length();i++){
            n=s1[i]-'a';
            arr1[n]++;
        }
        
        int arr2[26]={0};
        int i=0,window=s1.length();
        
        while(i<window&&i<s2.length()){
            n=s2[i]-'a';
            arr2[n]++;
            i++;
        }
        if(checkEqual(arr1,arr2))
            return 1;
        
        while(i<s2.length()){
            int index=s2[i]-'a';
            arr2[index]++;
            index=s2[i-window]-'a';
            arr2[index]--;
            i++;
            if(checkEqual(arr1,arr2))
                return 1;
        }
        return 0;
    }
};
