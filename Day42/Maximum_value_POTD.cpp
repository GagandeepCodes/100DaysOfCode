#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int height(Node *root)
    {

        if (root == NULL)
            return 0;

        return 1 + max(height(root->left), height(root->right));
    }

    void solve(Node *root, int level, vector<int> &ans)
    {

        if (root == NULL)
            return;

        ans[level] = max(ans[level], root->data);

        solve(root->left, level + 1, ans);
        solve(root->right, level + 1, ans);
    }

    vector<int> maximumValue(Node *node)
    {

        int h = height(node);
        vector<int> ans(h, 0);
        solve(node, 0, ans);
        return ans;
    }
};
int main()
{

    return 0;
}