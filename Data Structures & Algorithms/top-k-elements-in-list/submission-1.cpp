class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;

        // Count frequency of each number
        for (int num : nums) {
            freq[num]++;
        }

        // bucket[i] contains numbers that appear i times
        vector<vector<int>> bucket(nums.size() + 1);

        for (auto& [num, count] : freq) {
            bucket[count].push_back(num);
        }

        vector<int> ans;

        // Start from highest frequency
        for (int i = nums.size(); i >= 1; i--) {
            for (int num : bucket[i]) {
                                if (ans.size() == k) {
                    break;
                }
                ans.push_back(num);
            }
        }

        return ans;
    }
};