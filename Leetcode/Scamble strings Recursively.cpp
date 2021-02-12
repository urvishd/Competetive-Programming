class Solution {
public:
    bool isScramble(string s1, string s2) {

        int l = s1.length();
        if (l == 0)
            return true;
        if (s1 == s2)
        {
            return true;
        }
        string copy_S1 = s1, copy_S2 = s2;

        sort(copy_S1.begin(), copy_S1.end());
        sort(copy_S2.begin(), copy_S2.end());

        if (copy_S1 != copy_S2) {
            return false;
        }


        for (int i = 1; i < l; i++)
        {
            if (isScramble(s1.substr(0, i), s2.substr(0, i)) && isScramble(s1.substr(i, l - i),
                    s2.substr(i, l - i)))
            {
                return true;
            }


            if (isScramble(s1.substr(0, i), s2.substr(l - i, i)) && isScramble(s1.substr(i, l - i),
                    s2.substr(0, l - i))) {
                return true;
            }
        }
        return false;

    }
};