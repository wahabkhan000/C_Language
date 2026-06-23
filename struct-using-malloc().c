#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    char name[50];
    int Age;
    float CGPA;
};

int main() {
    int number = 0;
    printf("Enter the number of structures you want: ");
    scanf("%d",&number);

    struct student *s = malloc(number*sizeof(*s));
    for (int i=0;i<number;i++) {
        getchar();
        char name[50];
        printf("Enter the name of student %d:",i+1);
        fgets(name, sizeof(name), stdin);
        strcpy(s[i].name,name);
        int Age = 0;
        printf("Enter the Age of student %d:", i + 1);
        scanf("%d",&Age);
        s[i].Age = Age;
        float CGPA = 0.0f;
        printf("Enter the CGPA of student %d:", i + 1);
        scanf("%f",&CGPA);
        s[i].CGPA = CGPA;
    }

    for (int i=0;i<number;i++) {
        printf("The name of student %d is: %s",i+1,s[i].name);
        printf("The Age of student %d is:%d\n",i+1,s[i].Age);
        printf("The CGPA of student %d is:%.2f\n",i+1,s[i].CGPA);
    }

    free(s);
}
