#include <stdio.h>
#include <stdlib.h> // for exit()

int main() {
    FILE *fptr;

    char filename[100], c;

    printf("Enter the filename to open \n");
    scanf("%s", filename);

    // Open file
    fptr = fopen(filename, "r");
    if (fptr == NULL)
    {
        printf("Cannot open file \n");
        exit(0);
    }

    // Read Contents of file
    c = fgetc(fptr);
    while (c != EOF){
        printf("%c", c);
        c = fgetc(fptr);
    }
    // Closing open file and exiting program gracefully
    fclose(fptr);
    return 0;
}
