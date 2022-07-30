#include <stdio.h>
#include <string.h>
int main()
{
    char text[20],pat[20];
    int a,b;
    printf("Enter the string : ");
    gets(text);
    printf("Enter the pattern to find : ");
    gets(pat);
    a = strlen(pat);
    b = strlen(text);
    int found = 1;
    for (int i = 0; i <= b - a; i++) {
        int j;
        for (j = 0; j < a; j++){
            if (text[i + j] != pat[j])
                found = 0;
                break;
        }

        if (j == a)
            printf("Pattern found at position %d \n", i+1);
    }
            if(found==0){
            printf("No");
        }
    return 0;
}
