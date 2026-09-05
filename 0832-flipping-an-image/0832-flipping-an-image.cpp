class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int m = image.size();
        int n = image[0].size();

        for(int i = 0; i < m; i++) {
            for(int j = 0; j <= (n-1)/2; j++) {
                swap(image[i][j], image[i][n-j-1]);
                image[i][j] = 1 - image[i][j];
                if(j!=(n-j-1))
                   image[i][n-j-1] = 1 - image[i][n-j-1];
            }
        }

        return image;
    }
};