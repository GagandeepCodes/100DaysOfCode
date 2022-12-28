#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int traverse(Node *root, int &ans)
    {
        if (root == NULL)
        {
            return 0;
        }
        int currsum = root->data + traverse(root->left, ans) + traverse(root->right, ans);
        ans = max(ans, currsum);
        return currsum;
    }
    // Function to find largest subtree sum.
    int findLargestSubtreeSum(Node *root)
    {
        // Write your code here
        if (root == NULL)
        {
            return 0;
        }
        int ans = INT_MIN;
        traverse(root, ans);
        return ans;
    }
};
int main()
{

    return 0;
}