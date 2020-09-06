#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;
    char arr_length[1][100];
     //array

    fptr = fopen("/Users/kka/Desktop/Text.txt", "r");//read the input file
    fgets(arr_length,100,fptr);
    int al = atoi(arr_length);
    char arr[al][100];
    //printf("%s",arr_length);
    int x = 0;
    while (x < al) {
        fgets(arr[x], 100, fptr);

        x++;
    }
    int i = 0;
    int Line_Number;
    printf("Type any line numbers between 1 to %s\n",arr_length);
    while (i == 0) {
        printf("Enter Line Number: ");
        scanf("%d", &Line_Number);

        if ((Line_Number-1) < al) {
            i = 0;
            printf("%s\n", arr[Line_Number-1]);
        } else {
            i++;
            printf("Sorry, wrong input.");
        }
    }

    fclose(fptr);
    return 0;
}
