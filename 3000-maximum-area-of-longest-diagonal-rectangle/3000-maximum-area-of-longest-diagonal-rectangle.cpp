class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int maxDiagonal = 0;
        int maxArea = 0;

        for (auto &rect : dimensions) {
            int l = rect[0];
            int w = rect[1];

            int diagonal = l * l + w * w;
            int area = l * w;

            if (diagonal > maxDiagonal) {
                maxDiagonal = diagonal;
                maxArea = area;
            }
            else if (diagonal == maxDiagonal) {
                maxArea = max(maxArea, area);
            }
        }

        return maxArea;
    }
};