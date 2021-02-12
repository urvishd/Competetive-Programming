class Solution {
public:
    int numDecodings(string s) {
        int l = s.length();
        int ans[l + 1];
        ans[0] = 1;
        ans[1] = 1;
        if (s[0] == '0')
            return false;
        for (int i = 2; i <= l; i++)
        {
            ans[i] = 0;
            if (s[i - 1] > '0')
                ans[i] = ans[i - 1];

            if (s[i - 2] == '1' ||
                    (s[i - 2] == '2' && s[i - 1] < '7') )
                ans[i] += ans[i - 2];
        }
        return ans[l];
    }
};