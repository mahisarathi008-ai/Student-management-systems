#include <stdio.h>

struct Student
{
    int rollNo;
    char name[50];
    float marks;
};

int main()
{
    struct Student s[100];
    int n = 0, choice, i, searchRoll;
    float total = 0, average;

    do
    {
        printf("\n===== STUDENT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Calculate Average Marks\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nEnter Roll Number: ");
                scanf("%d", &s[n].rollNo);

                printf("Enter Name: ");
                scanf("%s", s[n].name);

                printf("Enter Marks: ");
                scanf("%f", &s[n].marks);

                n++;
                printf("Student Added Successfully!\n");
                break;

            case 2:
                if(n == 0)
                {
                    printf("No student records found.\n");
                }
                else
                {
                    printf("\nStudent Records:\n");
                    for(i = 0; i < n; i++)
                    {
                        printf("\nRoll No : %d", s[i].rollNo);
                        printf("\nName    : %s", s[i].name);
                        printf("\nMarks   : %.2f\n", s[i].marks);
                    }
                }
                break;

            case 3:
                printf("Enter Roll Number to Search: ");
                scanf("%d", &searchRoll);

                for(i = 0; i < n; i++)
                {
                    if(s[i].rollNo == searchRoll)
                    {
                        printf("\nStudent Found!");
                        printf("\nRoll No : %d", s[i].rollNo);
                        printf("\nName    : %s", s[i].name);
                        printf("\nMarks   : %.2f\n", s[i].marks);
                        break;
                    }
                }

                if(i == n)
                    printf("Student Not Found!\n");

                break;

            case 4:
                if(n == 0)
                {
                    printf("No records available.\n");
                }
                else
                {
                    total = 0;

                    for(i = 0; i < n; i++)
                    {
                        total += s[i].marks;
                    }

                    average = total / n;
                    printf("Average Marks = %.2f\n", average);
                }
                break;

            case 5:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}
