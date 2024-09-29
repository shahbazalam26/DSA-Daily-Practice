// 443. String Compression
// https://leetcode.com/problems/string-compression/description/

class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0; // Points to the current position in the input array
        int n = chars.size(); // Size of the input array
        int ansIndex = 0; // Index to place the compressed characters

        while (i < n) {
            int j = i + 1; // Points to the next character
            // Loop to find the end of the current group of the same characters
            while (j < n && chars[i] == chars[j]) {
                j++;
            }

            // At this point, either we have reached the end of the array,
            // or found a different character.

            // Store the current character
            chars[ansIndex++] = chars[i];

            // Calculate the count of the current character
            int count = j - i;
            if (count > 1) {
                // Convert the count to a string and store each digit
                string cnt = to_string(count);
                for (char ch : cnt) {
                    chars[ansIndex++] = ch;
                }
            }

            // Move to the next group of characters
            i = j;
        }

        return ansIndex;
    }
};

