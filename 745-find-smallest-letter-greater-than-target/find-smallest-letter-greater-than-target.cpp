class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        for (char c : letters) {
            if (c > target) {
                return c;
            }
        }
        return letters[0]; // Wrap around if no greater letter exists
    }
};
