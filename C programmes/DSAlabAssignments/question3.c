// 3. Write a program that will take files generated in Q2 as input and store the sum of each line in a
// new file in different lines

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fin, *fout;
    char line[200];
    int sum, num;
    char *ptr;

    fin = fopen("data.txt", "r");        // input file
    fout = fopen("sum.txt", "w");        // output file

    if (fin == NULL || fout == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    while (fgets(line, sizeof(line), fin)) {
        sum = 0;
        ptr = line;

        while (*ptr != '\0') {
            num = strtol(ptr, &ptr, 10);
            sum += num;

            if (*ptr == ',')
                ptr++;   // skip comma
        }

        fprintf(fout, "%d\n", sum);
    }

    fclose(fin);
    fclose(fout);

    printf("Sum file generated successfully.\n");
    return 0;
}
