#include <iostream>

const int INF = 1e9;  // Custom constant for representing infinity

const int MAX_ROWS = 5;  // Maximum number of rows in the maze
const int MAX_COLS = 5;  // Maximum number of columns in the maze

// Define directions: up, down, left, right
const int directions[][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
const char WALL = '1';
const char VISITED = 'V';

bool isValidMove(char maze[MAX_ROWS][MAX_COLS], int visited[MAX_ROWS][MAX_COLS], int row, int col, int rows, int cols) {
    return (row >= 0 && row < rows && col >= 0 && col < cols && maze[row][col] == '0' && visited[row][col] == 0);
}

int shortestPath(char maze[MAX_ROWS][MAX_COLS], int startRow, int startCol, int endRow, int endCol) {
    int visited[MAX_ROWS][MAX_COLS];
    int rows = MAX_ROWS;
    int cols = MAX_COLS;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            visited[i][j] = 0;  // Initialize visited array with 0 (not visited)
        }
    }

    visited[startRow][startCol] = 1;  // Mark start as visited

    int queue[MAX_ROWS * MAX_COLS][2];  // Manually manage queue using arrays
    int front = 0, rear = 0;

    queue[rear][0] = startRow;
    queue[rear][1] = startCol;
    rear++;

    while (front < rear) {
        int currentRow = queue[front][0];
        int currentCol = queue[front][1];
        front++;

        if (currentRow == endRow && currentCol == endCol) {
            return visited[currentRow][currentCol] - 1;
        }

        for (int i = 0; i < 4; i++) {
            int newRow = currentRow + directions[i][0];
            int newCol = currentCol + directions[i][1];

            if (isValidMove(maze, visited, newRow, newCol, rows, cols)) {
                visited[newRow][newCol] = visited[currentRow][currentCol] + 1;
                queue[rear][0] = newRow;
                queue[rear][1] = newCol;
                rear++;
                maze[newRow][newCol] = VISITED;  // Mark the cell as visited
            }
        }
    }

    // If no path found
    return -1;
}

int main() {
    char maze[MAX_ROWS][MAX_COLS] = {
        {'0', '0', '0', '0', '0'},
        {'1', '1', '1', '1', '0'},
        {'0', '0', '0', '0', '0'},
        {'0', '1', '1', '1', '1'},
        {'0', '0', '0', '0', '0'}
    };

    int shortestDistance = shortestPath(maze, 0, 0, 4, 4);

    if (shortestDistance != -1) {
        std::cout << "Shortest path length: " << shortestDistance << std::endl;
    } else {
        std::cout << "No path found." << std::endl;
    }

    return 0;
}
