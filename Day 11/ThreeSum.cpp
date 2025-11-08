#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i=0;i<n-2;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int target = -1*nums[i];
            int left = i+1;
            int right = n-1;

            while(left<right){
                if(nums[left]+nums[right]==target){
                    ans.push_back({nums[i],nums[left],nums[right]});
                    left++;
                    right--;

                    while(left<right && nums[left]==nums[left-1]) left++;
                    while(left<right && nums[right]==nums[right+1]) right--;

                }
                else if(nums[left]+nums[right]>target) right--;
                else left++;
            }
        }
        return ans;
    }
};


int main() {
    Solution s;
    vector<int> nums;
    int x;
    while (cin >> x) nums.push_back(x); // input.txt se numbers padhega
    auto res = s.threeSum(nums);
    for (auto& triplet : res) {
        for (int num : triplet) cout << num << " ";
        cout << "\n";
    }
    return 0;
}