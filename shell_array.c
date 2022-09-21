#include <stdio.h>
#include <stdlib.h>

long *Array_Load_From_File(char *filename, int *size) {
    
    //Size of the file called (filename) determines number of long integers in the file

    //num_longs = sizeof(filename) / sizeof(long)
    int num_longs = 

    //allocate memory to store integers in array

    //set size to number of integers in array

    //return memory address for array
}

int Array_Save_To_File(char *filename, long *array, int size) {
    int success = 0;
    //saves array to an external file called filename
    FILE* file  = fopen(filename, "w");
    //if array is null or size is 0, create empty output file
    if(size == 0 || array == NULL) {
        fclose(file);
    }
    else {
        for(int i = 0; i < size; i++) {
            //TODO: Handle index out of bounds
            fprintf(file, array[i]);
            success = success + 1;
        }
    }
    return success;
    //return the number of integers saved in array
}

void Array_Shellsort(long *array, int size, long *n_comp) {
    int gap = size / 2;

    for (int i = gap; i < size; i++) {
        int temp = array[i];
        
    }

}