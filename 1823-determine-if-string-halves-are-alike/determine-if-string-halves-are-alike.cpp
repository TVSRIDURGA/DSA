class Solution {
public:
    bool isVowel(char ch){
      return   (ch =='a'|| ch =='e'|| ch =='i'|| ch =='o'|| ch =='u'||
         ch =='A'|| ch =='E'|| ch =='I'|| ch =='O'|| ch =='U');
    }
    bool halvesAreAlike(string s) {
        int n=s.size();
        int m=n/2;
        int countL=0;
        int countR=0;
        int i=0;
        int j=m;
        while(i<n/2 && j<n){
            if(isVowel(s[i])) countL++;
            if(isVowel(s[j])) countR++;
            i++;
            j++;
        }
        return (countR ==countL);
        
    }
};