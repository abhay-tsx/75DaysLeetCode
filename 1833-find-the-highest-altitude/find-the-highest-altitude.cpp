class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxalt = 0;
        int newalt = 0;
        
        for (int i = 0; i < gain.size(); i++) {
            newalt += gain[i];
         maxalt = max(maxalt, newalt);
        }

        return maxalt;
    }
};