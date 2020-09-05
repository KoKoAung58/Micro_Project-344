#include <stdio.h>


int main() {
    FILE *fptr;

    char arr[3][100]; //array

    fptr = fopen("/Users/kka/Desktop/Text.txt", "r");//read the input file

    int x = 0;
    while (x <= 3) {
        fgets(arr[x], 100, fptr);

        x++;
    }
    int i = 0;
    int Line_Number;
    printf("Type any line numbers between 0 to 3\n");
    while (i == 0) {
        printf("Enter Line Number: ");
        scanf("%d", &Line_Number);

        if (Line_Number <= 3) {
            i = 0;
            printf("%s\n", arr[Line_Number]);
        } else {
            i++;
            printf("Sorry, wrong input.");
        }
    }

    fclose(fptr);
    return 0;
}
