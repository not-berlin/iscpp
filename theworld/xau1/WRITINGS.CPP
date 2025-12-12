#include <iostream>
#include <vector>
#include <string>
#include <fstream>

int mapCharToIndex(char ch) {
    if (ch >= 'a' && ch <= 'z') {
        return ch - 'a';
    } else if (ch >= 'A' && ch <= 'Z') {
        return ch - 'A' + 26;
    }
    return -1; 
}

int main() {
    std::ios_base::sync_with_stdio(false);

    std::ifstream inputFile("WRITING.INP");
    std::ofstream outputFile("WRITING.OUT");

    if (!inputFile.is_open()) {
        return 1;
    }
    if (!outputFile.is_open()) {
        return 1;
    }

    int g, s_len;
    inputFile >> g >> s_len;

    std::string w_str, s_str;
    inputFile >> w_str >> s_str;

    if (g == 0 || g > s_len) {
        outputFile << 0 << std::endl;
        inputFile.close();
        outputFile.close();
        return 0;
    }

    std::vector<int> freqW(52, 0);
    for (char ch : w_str) {
        int idx = mapCharToIndex(ch);
        if (idx != -1) { 
            freqW[idx]++;
        }
    }

    std::vector<int> currentFreqS(52, 0);
    int matches = 0; 
    for (int i = 0; i < g; ++i) {
        int charIdx = mapCharToIndex(s_str[i]);
        if (charIdx != -1) {
            currentFreqS[charIdx]++;
        }
    }

    for (int k = 0; k < 52; ++k) {
        if (freqW[k] == currentFreqS[k]) {
            matches++;
        }
    }

    int ans = 0;
    if (matches == 52) { 
        ans++;
    }

    for (int i = g; i < s_len; ++i) {
        int charOutIdx = mapCharToIndex(s_str[i - g]);
        int charInIdx = mapCharToIndex(s_str[i]);

        if (charOutIdx != -1) {
            if (currentFreqS[charOutIdx] == freqW[charOutIdx]) {
                matches--; 
            }
            currentFreqS[charOutIdx]--;
            if (currentFreqS[charOutIdx] == freqW[charOutIdx]) {
                matches++;
            }
        }

        if (charInIdx != -1) {
            
            if (currentFreqS[charInIdx] == freqW[charInIdx]) {
                matches--; 
            }
            currentFreqS[charInIdx]++;
            if (currentFreqS[charInIdx] == freqW[charInIdx]) {
                matches++; 
            }
        }
        
        if (matches == 52) {
            ans++;
        }
    }

    outputFile << ans << std::endl;

    inputFile.close();
    outputFile.close();

    return 0;
}