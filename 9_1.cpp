//GPT answer modified by me

#include <iostream>
#include <vector>

using namespace std;

class Matrix 
{
    private:
        int rows, cols;
        vector<vector<double>> data;

    public:
        // Correct initialization of rows and cols
        Matrix(int m, int n) : rows(m), cols(n), data(m, vector<double>(n)) {}

        // Prompt user to enter matrix elements
        void input() 
        {
            cout << "Enter elements for a " << rows << "x" << cols << " matrix:\n";
            for (int i = 0; i < rows; ++i)
                for (int j = 0; j < cols; ++j)
                    cin >> data[i][j];
        }

        // Display the matrix
        void display() const 
        {
            cout << "Matrix (" << rows << "x" << cols << "):\n";
            for (const auto& row : data) 
            {
                for (const auto& elem : row) 
                    cout << elem << "\t";
                cout << "\n";
            }
        }

        // Overload the + operator to add two matrices
        Matrix operator+(const Matrix& other) const 
        {
            Matrix result(rows, cols);
            for (int i = 0; i < rows; ++i)
                for (int j = 0; j < cols; ++j)
                    result.data[i][j] = data[i][j] + other.data[i][j];
            return result;
        }

        // Overload the - operator to subtract two matrices
        Matrix operator-(const Matrix& other) const 
        {
            Matrix result(rows, cols);
            for (int i = 0; i < rows; ++i)
                for (int j = 0; j < cols; ++j)
                    result.data[i][j] = data[i][j] - other.data[i][j];
            return result;
        }
};

int main() 
{
    int m, n;

    // Input dimensions and prompt for the first matrix
    cout << "Enter number of rows and columns for Matrix: ";
    cin >> m >> n;
    Matrix A(m, n);
    A.input();

    Matrix B(m, n);
    B.input();

    // Matrix Addition and display
    cout << "\nResult of A + B:\n";
    Matrix C = A + B;
    C.display();

    // Matrix Subtraction and display
    cout << "\nResult of A - B:\n";
    Matrix D = A - B;
    D.display();

    return 0;
}
