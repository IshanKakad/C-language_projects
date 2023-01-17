#include <stdio.h>

int main() {
    int i;
    FILE *fp;
    char file_name[] = "news.txt";
    char ch;

    fp = fopen(file_name, "r");
    if (fp == NULL) {
        printf("file not found %s\n", file_name);
    ;
    }

  else
  {
      for( i=1;i<1000;i++)
  {ch = fgetc(fp);
         {
        printf("%c",ch);
    } }

    fclose(fp);
    return 0;
}
}
