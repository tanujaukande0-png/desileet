class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int left = 0;
        int sum;
        vector<int> r;
        vector<pair<int,int>> arr;

        for(int i = 0; i < nums.size(); i++) {
            arr.push_back({nums[i], i});
        }

        sort(arr.begin(), arr.end());

        int right = arr.size() - 1;

        while(left < right) {
            sum = arr[left].first + arr[right].first;

            if(sum == target) {
                r.push_back(arr[left].second);
                r.push_back(arr[right].second);
                return r;
            }
            else if(sum < target) {
                left++;
            }
            else {
                right--;
            }
        }

        return r;
    }
};