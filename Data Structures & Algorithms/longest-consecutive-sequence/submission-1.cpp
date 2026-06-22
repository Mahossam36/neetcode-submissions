class Solution {
public:
	int longestConsecutive(vector<int>& nums) {
		unordered_set<int> set;
		int Max = 0;
		//insertion
		for (auto& num : nums) {
			if (set.find(num) == set.end()) {
				set.insert(num);
			}
		}

		//Check Max
		for (auto& num : nums) {
			if (set.find(num - 1) == set.end()) {
				int localmax = 1;
				int i = 1;
				while (true) {
					if (set.find(num + i) != set.end()) {
						localmax++;
						i++;
					}
					else {
						Max = max(Max, localmax);

						break;
					}
				}
			}
		}
		return Max;
	}
};
