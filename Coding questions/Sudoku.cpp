#include <iostream>
#include <stdbool.h>
using namespace std;

// Define the size of the Sudoku grid
#define N 9


// Function to check if a number is valid to be placed at a given position in the Sudoku grid
bool isSafe(int grid[N][N], int row, int col, int num) {
    // Check if the number is already present in the row or column
    for (int i = 0; i < N; i++) {
        if (grid[row][i] == num || grid[i][col] == num) {
            return false;
        }
    }

    // Check if the number is already present in the 3x3 subgrid
    int startRow = row - row % 3;
    int startCol = col - col % 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (grid[i + startRow][j + startCol] == num) {
                return false;
            }
        }
    }

    return true;
}



// Function to solve the Sudoku puzzle
bool solveSudoku(int grid[N][N]) {
    int row, col;

    // Check if there are any empty cells
    bool isEmpty = false;
    for (row = 0; row < N; row++) {
        for (col = 0; col < N; col++) {
            if (grid[row][col] == 0) {
                isEmpty = true;
                break;
            }
        }
        // 2 breaks to break out of the two loops
        if (isEmpty) {
            break;
        }
    }
    // after the two loops break the row and column have the value of the cell in it that is empty 
    // If no empty cells are found, the puzzle is solved
    if (!isEmpty) {
        return true;
    }

    // The empty cell is passed in the function below 
    // Try placing numbers 1 to 9 in the empty cell
    for (int num = 1; num <= 9; num++) {
        if (isSafe(grid, row, col, num)) {
            grid[row][col] = num;

            // Recursively solve the remaining puzzle
            // this will resend the entire grid in the function again. The grid has a new entry now. the loop has filled an element in the empty space. the grid passed to this fucntion will now check for next element.
            if (solveSudoku(grid)) {
                return true;
            }

            // If the current placement doesn't lead to a solution, backtrack ( how is this working? )
            grid[row][col] = 0;
        }
    }

    // If no number can be placed at this cell, backtrack to the previous cell
    return false;
}

// Function to print the Sudoku grid
void printGrid(int grid[N][N]) {
    for (int row = 0; row < N; row++) {
        for (int col = 0; col < N; col++) {
            printf("%2d ", grid[row][col]);
        }
        printf("\n");
    }
}

int main() {
    int grid[N][N] = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };

    printf("Sudoku puzzle:\n");
    printGrid(grid);

    if (solveSudoku(grid)) {
        printf("\nSolved Sudoku:\n");
        printGrid(grid);
    } else {
        printf("\nNo solution exists.\n");
    }

    return 0;
}