class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

    string prefix = strs[0];

    for (int i = 1; i < strs.size(); i++) {
        int j = 0;
        // Compare characters of prefix and current string
        while (j < prefix.size() && j < strs[i].size() && prefix[j] == strs[i][j]) {
            j++;
        }
        // Update the prefix
        prefix = prefix.substr(0, j);

        // If at any point prefix becomes empty, return ""
        if (prefix.empty()) return "";
    }

    return prefix;
    }
};