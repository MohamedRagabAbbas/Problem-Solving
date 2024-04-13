class Solution {
public:
    string mergeAlternately(string word1, string word2) {
      int size = max(word1.length(),word2.length());
      string newWord="";
      int w1 = 0;
      int w2 = 0;
      for(int i=0;i<size;i++)
      {
            if(w1<word1.length())
            {
                newWord+=word1[i];
                w1++;
            }
            if(w2<word2.length())
            {
                newWord+=word2[i];
                w2++;
            }
      }
      return newWord;
    }
};