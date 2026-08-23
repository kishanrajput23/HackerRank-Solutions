
class Matrix {
public:
    vector<vector<int>> a;

    Matrix operator+(const Matrix& b) {
        Matrix result;

        int rows = a.size();
        int cols = a[0].size();

        result.a.resize(rows, vector<int>(cols));

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.a[i][j] = a[i][j] + b.a[i][j];
            }
        }

        return result;
    }
};
