#include <stdio.h>
#include <string.h>

int main() {
    int a = 0;
    printf("Enter the value for int: ");
    scanf("%d",&a);
    printf("Output for int is: ");
    printf("%d\n",a);

    float b = 0.0f;
    printf("Enter value for float: ");
    scanf("%f",&b);
    printf("output for float is: ");
    printf("%.2f\n",b);

    double c = 0;
    printf("Enter value for double: ");
    scanf("%lf",&c);
    printf("Output for double is: ");
    printf("%lf\n",c);

    char d = 0;
    printf("Enter the value for char: ");
    scanf(" %c",&d);
    printf("output for char is: ");
    printf("%c\n",d);

    char string[100];
    printf("Enter the string : ");
    scanf("%s",string);
    printf("The string in c is: ");
    printf("%s\n",string);
    printf("The size of string is: ");
    printf("%zu\n", strlen(string));

    char string_2[100];
    strcpy(string_2,string);
    printf("The output of copied string is: %s\n",string_2);
    printf("The length of copied string is: %zu\n",strlen(string_2));
    int e = strcmp(string,string_2);
    if (e == 0) {
        printf("Strings are equal as compared value is: %d\n",e);
    }
    else {
        printf("Strings are not equal as compared value is: %d\n",e);
    }

    strcat(string,string_2);
    printf("The appended string is: %s\n",string);

    getchar();
    char string_3[100];
    printf("Enter the string: ");
    fgets(string_3, sizeof(string_3), stdin);
    printf("Output of fgets is: %s\n",string_3);


}
