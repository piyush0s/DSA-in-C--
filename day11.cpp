// valid string

class Solution {
public:
    bool isValid(string word) {
        if(word.size()<=3)return false;
        bool hasVowel =false;
        bool hasConsonant = false;

        for(char c : word){
            if(!isalnum(c))return false;

            char lower = tolower(c);
            if(isalpha(lower)){
                if(lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' ||lower == 'u')
                hasVowel = true;
                else
                hasConsonant = true;
            }
            
        }
    
        return hasVowel && hasConsonant;
    }
};