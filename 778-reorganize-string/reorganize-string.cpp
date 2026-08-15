class Solution {
public:
    string reorganizeString(string s) {
        vector<int>hash(26,0);
        for(char ch:s){
            hash[ch-'a']++;
        }
        int maxfreq=0;
        int letter =0;
        
        for(int i=0;i<26;i++){
            if(hash[i]>maxfreq){
            maxfreq = hash[i];
            letter = i;
        }
        }
        if(maxfreq > (s.length()+1)/2)
        return "";
         
        string res(s.length(),' ');
        int  idx =0;
        while(hash[letter]> 0){
            res[idx] = letter +'a';
            idx= idx +2;
            hash[letter]--;
        }

        for(int  i=0;i<26;i++){
            while(hash[i]>0){
                if(idx>=s.length()){
                     idx= 1;
                }
               

                res[idx] = i +'a';
                idx= idx +2;
                hash[i]--;
            }
        }
        return res;
    }
};