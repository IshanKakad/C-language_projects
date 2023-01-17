#include <stdio.h>

int main() {
    int i;
    FILE *fp;https://github.com/IshanKakad/C-language_projects
    char file_name[] = "news.txt";
    char ch="EOF";

    fp = fopen(file_name, "r");
    if (fp == NULL) {
        printf("file not found %s\n", file_name);
    ;
    }

  else
  {
      while(ch!=EOF)
  {ch = fgetc(fp);
         {
        printf("%c",ch);
    } }

    fclose(fp);
    return 0;
}
}
