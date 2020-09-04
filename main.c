#include <stdio.h>

int main() {
    FILE *fptr;

    char arr[3][100]; //array

    fptr=fopen("/Users/kka/CLionProjects/Micro_project/cmake-build-debug/Input.txt","r");

    int x = 0;
    while(x<=3){
        fgets(arr[x],100,(FILE*) fptr);
        x++;
    }
    int again=0;

    while(again==0){
        int Line_Number;
        printf("Enter Line Number: ");

        scanf("%d",&Line_Number);
        printf("%s\n", arr[Line_Number]);
        printf("Type 0 if you want to try it again or type 1 if you want to stop!\n");
        scanf("%d",&again);
    }
//    if(Line_Number>3){
//        printf("Wrong Input");
//    }
    fclose(fptr);
    return 0;
}
