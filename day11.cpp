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

// remove duplicates from string 2



class Solution {
public:
    string removeDuplicates(string s, int k) {
        int n  = s.size();
         vector<int>count(n);
        int i = 0;
        for(int j =0; j<n; j++){
            s[i]=s[j];
            if(i > 0 && s[i]==s[i-1])
              count[i]= count[i-1]+1;
            else
            count[i]=1;
            
            if(count[i]==k){
                i-=k;
            }
            ++i;

        }
        return s.substr(0,i);
        
    }
};