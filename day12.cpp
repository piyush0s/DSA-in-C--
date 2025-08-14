// 2264. Largest 3-Same-Digit Number in String

class Solution {
public:
    string largestGoodInteger(string num) {
        string max_good = "";
        for(int i =0; i+2 < num.size(); i ++){
            if(num[i]==num[i+1] && num[i+1]== num[i+2]){
                string sub = num.substr(i,3);
                if(max_good== ""||sub > max_good){
                    max_good = sub;
                }
            }
        }

        return max_good;

        
    }
};


// 0-indexed array of strings words and a character x.
class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;
        for(int i = 0; i<words.size(); i++){
            if(words[i].find(x)!= string::npos){
            ans.push_back(i);
            }
        }
        return ans;
    }
};