class Solution {
public:
    string reverseWords(string s) {
        string word = "";
        vector<string> newSentence;
        bool isSpace = true,taken = false;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' ' && isSpace == false)
            {
                isSpace = true;
                newSentence.insert(newSentence.begin(),word);
                word = "";
                continue;
            }
            else if(s[i]!=' ')
            {
                word+=s[i];
                isSpace = false;
            }
        }
        if(s[s.length()-1] !=' ')
            newSentence.insert(newSentence.begin(),word);
        string result = "";
        for(int i =0;i<newSentence.size();i++)
            result+=newSentence[i]+' ';
        return result.substr(0,result.length()-1);
    }
};