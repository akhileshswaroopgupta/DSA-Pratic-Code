#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {

        int a = 0, r = nums.size() - 1;
        while(a <= r){
            int mid = a + (r - a) / 2;
            if(nums[mid] == target)
                return mid;
            else if(nums[mid] < target)
                a = mid + 1;
            else
                r = mid - 1;
        }
        return -1;
    }
};
int main() {

    vector<int> nums = {-1, 0, 3, 5, 9, 12};
    int target1 = 9;
    cout << Solution().search(nums, target1) << endl;

    return 0;
}