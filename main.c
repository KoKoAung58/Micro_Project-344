#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;

    fptr = fopen("/Users/kka/Desktop/Text.txt", "r");//read the input file
    //char *first_index = ;
    //int f;
    int arr_length;
    //char *arr = malloc(sizeof(arr_length));
    //char arr1[*arr][100]; //array
    char *arr_length1;
    //size_t n = sizeof(arr);
    //char f = arr[0];
    fgets(*arr_length1,100,fptr);
    printf("%d", *arr_length1);

//    int x = 0;
//    while (x <= *arr) {
//        fgets(arr1[x], 100, fptr);
//        //printf("%d",*arr);
//        x++;
//    }
//    //printf("%d",n);
//    printf("%s", arr[2]);
//    arr_length = atoi(arr[0]) ;
//    printf("%d\n", arr_length);
//    //printf("%s",arr[arr_length-1]);
//    int i = 0;
//    int Line_Number;
//    //printf("Type any line numbers between 0 to 3\n");
//    while (i == 0) {
//        printf("Enter Line Number: ");
//        scanf("%d", &Line_Number);
//
//        if (Line_Number <= arr_length) {
//            i = 0;
//            printf("%s\n", arr[Line_Number]);
//        } else {
//            i++;
//            printf("Sorry, wrong input.");
//        }
//    }

    fclose(fptr);
    return 0;
}
