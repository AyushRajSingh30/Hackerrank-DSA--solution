
int diagonalDifference(vector<vector<int>> arr) {
    int leftDiagonal = 0, rightDiagonal = 0;
    int n = arr.size();
    for (int i = 0; i < n; i++){
        leftDiagonal += arr[i][i];
        rightDiagonal += arr[i][n-i-1];
    }

    return abs(leftDiagonal - rightDiagonal);

}
