#include <stdio.h>


struct student {
    char name[30];
    int roll;
};

int main() {


printf("Ishan Kakad Roll no- 16010522030 Batch- P-4(2)\n");
    struct student s[5];
    int i;
    FILE *fp, *fp1;


    for (i = 0; i < 5; i++) {
        printf("Enter name and roll of student %d: ", i+1);
        scanf("%s %d", s[i].name, &s[i].roll);
    }


    fp = fopen("info.txt", "w");
    if (fp == NULL) {
        printf("Error creating file!\n");

    }


    for (i = 0; i < 5; i++) {
        fprintf(fp, "Name: %s\nRoll: %d\n", s[i].name, s[i].roll);
    }
    fclose(fp);


    fp = fopen("info.txt", "r");
    fp1 = fopen("backup.txt", "w");
    if (fp1 == NULL) {
        printf("Error!\n");

    }


    char ch;
    while ((ch = fgetc(fp)) != EOF) {
        fputc(ch, fp1);
    }

    fclose(fp);
    fclose(fp1);
    printf("The following data is  copied successfully!\n");

}
