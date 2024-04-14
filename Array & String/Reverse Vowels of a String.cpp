class Solution {
public:
    bool isVowel(char letter)
    {
        return 
            (letter == 'a' || letter == 'e' || letter == 'u' || letter == 'i' || letter  == 'o' || letter == 'A' || letter == 'E' || letter == 'U' || letter == 'I' || letter  == 'O'  );
    }
    string reverseVowels(string s) {

        vector<char> v;
        for(int i=0;i<s.length();i++)
        {
            if(isVowel(s[i]))
                v.push_back(s[i]);    
        }
        int j = 0;
        reverse(v.begin(),v.end());
                
        for(int i=0;i<s.length();i++)
        {
            if(isVowel(s[i]))
            {
                s[i] = v[j];
                j++;
            }
        }
        return s;
        
    }
};