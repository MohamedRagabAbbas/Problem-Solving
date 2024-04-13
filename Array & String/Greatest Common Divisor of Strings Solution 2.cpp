class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if (str1 + str2 == str2 + str1) {
            string gcds = str1.substr(0,std::gcd(str1.size(),str2.size()));
            return gcds;
        }
        return "";
    }
};