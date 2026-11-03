#include <stdio.h>
#include <stdlib.h>

#define MAX_COLUMNS 100
#define MAX_ROWS 100

int main() {
    int num_columns, num_rows;
    
    // Prompt user for number of columns and rows
    printf("Enter the number of columns: ");
    scanf("%d", &num_columns);
    
    printf("Enter the number of rows: ");
    scanf("%d", &num_rows);

    if (num_columns > MAX_COLUMNS || num_rows > MAX_ROWS) {
        printf("Too many columns or rows. Maximum allowed: %dx%d\n", MAX_COLUMNS, MAX_ROWS);
        return 1;
    }

    // Allocate memory for column names and data
    char **column_names = (char **)malloc(num_columns * sizeof(char *));
    char ***data = (char ***)malloc(num_rows * sizeof(char **));
    
    for (int i = 0; i < num_columns; i++) {
        column_names[i] = (char *)malloc(100 * sizeof(char)); // Assuming max length of a column name is 99
    }
    
    for (int i = 0; i < num_rows; i++) {
        data[i] = (char **)malloc(num_columns * sizeof(char *));
        for (int j = 0; j < num_columns; j++) {
            data[i][j] = (char *)malloc(100 * sizeof(char)); // Assuming max length of a cell value is 99
        }
    }

    // Prompt user for column names
    printf("Enter the column names:\n");
    for (int i = 0; i < num_columns; i++) {
        scanf("%s", column_names[i]);
    }

    // Prompt user for data input row by row
    printf("\nEnter the data row by row:\n");
    for (int i = 0; i < num_rows; i++) {
        for (int j = 0; j < num_columns; j++) {
            scanf("%s", data[i][j]);
        }
    }

    // Print the table
    printf("\nTable Data:\n");

    // Print column headers
    for (int i = 0; i < num_columns; i++) {
        printf("%-10s | ", column_names[i]);
    }
    printf("\n");
    
    // Print separator line
    for (int i = 0; i < num_columns; i++) {
        printf("----------+ ");
    }
    printf("\n");

    // Print data rows
    for (int i = 0; i < num_rows; i++) {
        for (int j = 0; j < num_columns; j++) {
            printf("%-10s | ", data[i][j]);
        }
        printf("\n");
    }

    // Free allocated memory
    for (int i = 0; i < num_columns; i++) {
        free(column_names[i]);
    }
    
    for (int i = 0; i < num_rows; i++) {
        for (int j = 0; j < num_columns; j++) {
            free(data[i][j]);
        }
        free(data[i]);
    }
    free(data);
    free(column_names);

    return 0;
}
