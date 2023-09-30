#include <algorithm>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
string longestCommonPrefix(vector<string>& S) {
        if (S.size() == 0) return "";
        std::string prefix = S[0];
 
        for (int i = 1; i < S.size(); ++i) {
          std::string s = S[i];
          if (s.size() == 0 || prefix == "") return "";
          prefix = prefix.substr(0, std::min(prefix.size(), s.size()) );
            
            for (int k = 0; k < s.size() && k < prefix.size(); ++k) {
                if (s[k] != prefix[k]) {
                    prefix = prefix.substr(0, k);
                    break;
                }
            }
        }
        return prefix;
    }

int main() {
    
    vector<string> s = {"flow", "flower", "flight"};
    cout << longestCommonPrefix(s) << endl;
    return 0;
}