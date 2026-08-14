class Solution {
public:
    bool isAnagram(string s, string t) {
        int bucket[26] ={0};
        for(char ch :s ){
            if(ch!=' ')
            bucket[ch - 'a']++;
        }
          for(char ch :t ){
            if(ch!=' ')
            bucket[ch - 'a']--;
        }
        for(int i=0;i<26;i++){
            if(bucket[i]!=0) return false;
        }
        return true;
        
        
    }
};