#include <iostream>
#include <vector>

using namespace std;

vector<int> pairSum(vector<int> nums, int target)
{
    vector<int> ans;
    int n = nums.size();

    // Outer loop picks the first element
    for (int i = 0; i < n; i++)
    {
        // Inner loop picks the second element starting from i + 1
        for (int j = i + 1; j < n; j++)
        {
            // Check if the sum of both elements equals the target
            if (nums[i] + nums[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans; // Return the indices as soon as the pair is found
            }
        }
    }
    return ans; // Returns an empty vector if no pair matches
}

int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 13;
    vector<int> ans = pairSum(nums, target);

    // Output the resulting indices
    if (!ans.empty())
    {
        cout << ans[0] << ", " << ans[1] << endl;
    }
    else
    {
        cout << "[]" << endl;
    }
    return 0;
}
