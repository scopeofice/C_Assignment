// Create a structure student (roll number, name, marks of 3 subjects, percentage). Accept details of n 
// students and write a menu driven program to perform the following operations. 
// Write separate functions for the different options.
// i) Search 
// ii) Modify
// iii) Display all student details
// iv) Display all student having percentage > 80
// v) Display student having maximum percentage

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    int roll_no;
    char name[50];
    float marks[3];
    float percentage;
};

void search(struct student *s, int n);
void modify(struct student *s, int n);
void display_all(struct student *s, int n);
void display_above_80(struct student *s, int n);
void display_max_percentage(struct student *s, int n);

int main() {
    int n, choice;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct student s[n];
    for (int i = 0; i < n; i++) {
        printf("Enter the details of student %d:\n", i+1);
        printf("Roll number: ");
        scanf("%d", &s[i].roll_no);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Marks of three subjects: ");
        scanf("%f%f%f", &s[i].marks[0], &s[i].marks[1], &s[i].marks[2]);
        s[i].percentage = (s[i].marks[0] + s[i].marks[1] + s[i].marks[2]) / 3.0;
    }
    while (1) {
        printf("\nMenu:\n");
        printf("1. Search\n");
        printf("2. Modify\n");
        printf("3. Display all students\n");
        printf("4. Display all students with percentage > 80\n");
        printf("5. Display student with maximum percentage\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                search(s, n);
                break;
            case 2:
                modify(s, n);
                break;
            case 3:
                display_all(s, n);
                break;
            case 4:
                display_above_80(s, n);
                break;
            case 5:
                display_max_percentage(s, n);
                break;
            case 6:
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}

void search(struct student *s, int n) {
    int roll_no;
    printf("Enter the roll number to search: ");
    scanf("%d", &roll_no);
    for (int i = 0; i < n; i++) {
        if (s[i].roll_no == roll_no) {
            printf("Roll number: %d\n", s[i].roll_no);
            printf("Name: %s\n", s[i].name);
            printf("Marks: %.2f %.2f %.2f\n", s[i].marks[0], s[i].marks[1], s[i].marks[2]);
            printf("Percentage: %.2f%%\n", s[i].percentage);
            return;
        }
    }
    printf("Roll number %d not found!\n", roll_no);
}

void modify(struct student *s, int n) {
    int roll_no, choice;
    printf("Enter the roll number to modify: ");
    scanf("%d", &roll_no);
    for (int i = 0; i < n; i++) {
        if (s[i].roll_no == roll_no) {
            printf("Roll number: %d\n", s[i].roll_no);
            printf("Name: %s\n", s[i].name);
            printf("Marks: %.2f %.2f %.2f\n", s[i].marks[0], s[i].marks[1], s[i].marks[2]);
            printf("Percentage: %.2f%%\n", s[i].percentage);
            printf("Select the field to modify:\n");
            printf("1. Roll number\n");
            printf("2. Name\n");
            printf("3. Marks\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);
            switch (choice) {
                case 1:
                    printf("Enter the new roll number: ");
                    scanf("%d", &s[i].roll_no);
                    break;
                case 2:
                    printf("Enter the new name: ");
                    scanf("%s", s[i].name);
                    break;
                case 3:
                    printf("Enter the new marks: ");
                    scanf("%f%f%f", &s[i].marks[0], &s[i].marks[1], &s[i].marks[2]);
                    s[i].percentage = (s[i].marks[0] + s[i].marks[1] + s[i].marks[2]) / 3.0;
                    break;
                default:
                    printf("Invalid choice!\n");
            }
            printf("Details modified!\n");
            printf("Roll number: %d\n", s[i].roll_no);
            printf("Name: %s\n", s[i].name);
            printf("Marks: %.2f %.2f %.2f\n", s[i].marks[0], s[i].marks[1], s[i].marks[2]);
            printf("Percentage: %.2f%%\n", s[i].percentage);
            return;
        }
    }
    printf("Roll number %d not found!\n", roll_no);
}

void display_all(struct student *s, int n) {
    printf("Roll No.  Name                 Marks            Percentage\n");
    for (int i = 0; i < n; i++) {
        printf("%-8d %-20s %-16.2f %-16.2f %-16.2f\n", s[i].roll_no, s[i].name, s[i].marks[0], s[i].marks[1], s[i].marks[2]);
    }
}

void display_above_80(struct student *s, int n) {
    printf("Roll No.  Name                 Marks            Percentage\n");
    for (int i = 0; i < n; i++) {
        if (s[i].percentage > 80.0) {
            printf("%-8d %-20s %-16.2f %-16.2f %-16.2f\n", s[i].roll_no, s[i].name, s[i].marks[0], s[i].marks[1], s[i].marks[2]);
        }
    }
}

void display_max_percentage(struct student *s, int n) {
    int max_index = 0;
    for (int i = 1; i < n; i++) {
        if (s[i].percentage > s[max_index].percentage) {
            max_index = i;
        }
    }
    printf("Roll number: %d\n", s[max_index].roll_no);
    printf("Name: %s\n", s[max_index].name);
    printf("Marks: %.2f %.2f %.2f\n", s[max_index].marks[0], s[max_index].marks[1], s[max_index].marks[2]);
    printf("Percentage: %.2f%%\n", s[max_index].percentage);
}
