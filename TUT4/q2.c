// This program prints out a danish flag, by
// looping through the rows and columns of the flag.
// Each element inside the flag is a single character.
// (i.e., 1 byte).
//
// (Dette program udskriver et dansk flag, ved at
// sløjfe gennem rækker og kolonner i flaget.)
//

#include <stdio.h>

#define FLAG_ROWS 6
#define FLAG_COLS 12

char flag[FLAG_ROWS][FLAG_COLS] = {
    {'#', '#', '#', '#', '#', '.', '.', '#', '#', '#', '#', '#'},
    {'#', '#', '#', '#', '#', '.', '.', '#', '#', '#', '#', '#'},
    {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
    {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
    {'#', '#', '#', '#', '#', '.', '.', '#', '#', '#', '#', '#'},
    {'#', '#', '#', '#', '#', '.', '.', '#', '#', '#', '#', '#'}
};

int main(void) {
    // INIT - int row = 0
    // COND - row < FLAG_ROWS
    // BODY - another for loop
        // INIT2 - col = 0
        // COND2 - col < FLAG_COLS
        // BODY - printf("%c", flag[row][col]);
        // STEP - col++

        // printf("\n");
    // STEP - row++
    for (int row = 0; row < FLAG_ROWS; row++) {
        for (int col = 0; col < FLAG_COLS; col++) {
            printf("%c", flag[row][col]);
        }
        printf("\n");
    }
}