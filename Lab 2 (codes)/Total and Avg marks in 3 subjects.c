#include <stdio.h>

int main()
{
    int sub1, sub2, sub3, total;
    float average;

    printf("Enter marks for Subject 1: ");
    scanf("%d", &sub1);

    printf("Enter marks for Subject 2: ");
    scanf("%d", &sub2);

    printf("Enter marks for Subject 3: ");
    scanf("%d", &sub3);



    total = sub1 + sub2 + sub3;
    average = total / 3;

    printf("Total Marks: %d\n", total);
    printf("Average Marks: %f\n", average);

    if (sub1 < 35 || sub2 < 35 || sub3 < 35)
    {
        printf("Grade: FAIL\n");
    }
    else if (average >= 70)
    {
        printf("Grade: DISTINCTION\n");
    }
    else if (average >= 60)
    {
        printf("Grade:FIRST CLASS\n");
    }
    else if (average >= 50)
    {
        printf("Grade:SECOND CLASS\n");
    }
    else if (average >= 35)
    {
        printf("Grade:THIRD CLASS\n");
    }
    else
    {
        printf("Grade:FAIL \n");
    }

    return 0;
}
