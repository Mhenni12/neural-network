#ifndef READ_CSV_H
#define READ_CSV_H

#define NUM_EPOCHS 100
#define MAX_ROWS 100
#define MAX_COLS 3  

int read_csv(const char *filename, float data[MAX_ROWS][MAX_COLS], int *num_rows);

#endif
