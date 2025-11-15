#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char filename[100];
    char line[500];

    printf("Enter file name: ");
    scanf("%s", filename);

    fp = fopen(filename, "w");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter lines (type 'END' to stop):\n");
    getchar();

    while (1) {
        gets(line);

        if (strcmp(line, "END") == 0)
            break;

        fputs(line, fp);
        fputs("\n", fp);
    }

    fclose(fp);

    printf("Data written to file successfully.\n");

    return 0;
}
