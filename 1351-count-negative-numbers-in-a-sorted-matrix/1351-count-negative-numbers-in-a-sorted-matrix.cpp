class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        // brute force approch by iterating each and every element 2d traversal
        //optimal approch making use of sorted vector by upper_bound
        int count=0;
        for(int i=0;i<grid.size();i++)
        {
            int it=upper_bound(grid[i].rbegin(),grid[i].rend(),-1)-grid[i].rbegin();
            count+=it;
        }
        return count;
        
    }
};