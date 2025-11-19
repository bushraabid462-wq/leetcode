#include <stdlib.h>

int* getRow(int rowIndex, int* returnSize) {
    *returnSize = rowIndex + 1;
    int* row = (int*)malloc((*returnSize) * sizeof(int));
    
    // Initialize all elements to 0
    for(int i = 0; i < *returnSize; i++) row[i] = 0;
    
    row[0] = 1; // first element is always 1

    // Build row iteratively
    for(int i = 1; i <= rowIndex; i++){
        for(int j = i; j > 0; j--){
            row[j] = row[j] + row[j-1];
        }
    }
    
    return row;
}
