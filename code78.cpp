// Implement a program to solve the N-Queens problem.

#include <iostream>
#include <vector>

using namespace std;

// Function to print the chessboard
void printBoard(const vector<int>& board) {
    int N = board.size();
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (board[i] == j) {
                cout << "Q ";
            } else {
                cout << ". ";
            }
        }
        cout << endl;
    }
    cout << endl;
}

// Function to check if a queen can be placed in a particular row and column
bool isSafe(const vector<int>& board, int row, int col) {
    int N = board.size();

    // Check if there is a queen in the same column
    for (int i = 0; i < row; ++i) {
        if (board[i] == col) {
            return false;
        }

        // Check if there is a queen in the same diagonal
        if (abs(board[i] - col) == abs(i - row)) {
            return false;
        }
    }

    return true;
}

// Recursive function to solve N-Queens problem
void solveNQueens(vector<int>& board, int row) {
    int N = board.size();

    // If all queens are placed, print the solution
    if (row == N) {
        printBoard(board);
        return;
    }

    // Try placing queen in each column of the current row
    for (int col = 0; col < N; ++col) {
        if (isSafe(board, row, col)) {
            // Place the queen and move on to the next row
            board[row] = col;
            solveNQueens(board, row + 1);
            // Backtrack if placing the queen in the current position does not lead to a solution
        }
    }
}

// Function to initialize and kickstart the solving process
void solveNQueens(int N) {
    vector<int> board(N, -1); // Initialize the board with no queens
    solveNQueens(board, 0);   // Start from the first row
}

int main() {
    int N;
    cout << "Enter the number of queens (N): ";
    cin >> N;

    solveNQueens(N);

    return 0;
}