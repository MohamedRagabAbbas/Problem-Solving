class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        string com = "",result = "",newstr1 = "",newstr2="";
        bool test1 = false, test2 = false,breakLoob = false;
        if(str1.length()<str2.length())
        {
            newstr1 = str1;
            newstr2 = str2;
        }
        else
        {
            newstr1 = str2;
            newstr2 = str1;
        }
        for(int i=0;i<newstr1.length();i++)
        {
            com += newstr1[i];
            if(newstr1.length()%com.length() !=0) continue;
            for(int j=0;j<newstr1.length();j+=com.length())
            {
                if(com == newstr1.substr(j,com.length()))
                    test1 = true;
                else 
                {
                    breakLoob = true;
                    break;
                }
            }
            if(breakLoob)
            {
                breakLoob = false;
                test1 = false;
                test2 =false;
                continue;
            }
            if(newstr2.length()%com.length() !=0) continue;
            for(int j=0;j<newstr2.length();j+=com.length())
            {
                if(com == newstr2.substr(j,com.length()))
                    test2 = true;
                else 
                {
                     breakLoob = true;
                    break;
                }

            }
            if(breakLoob)
            {
                breakLoob = false;
                test1 = false;
                test2 =false;
                continue;
            }
            if(test1 && test2)
            {
                result = com;
            }
        }
        return result;
    }
};