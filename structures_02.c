// Create a structure employee (id, name, salary). Accept details of n employees and write a menu driven 
// program to perform the following operations. Write separate functions for the different options.
// i) Search by name
// ii) Search by id 
// iii) Display all
// iv) Display all employees having salary > 25000
// v) Display employee having maximum

#include <stdio.h>
#include <string.h>

struct employee {
    int id;
    char name[50];
    float salary;
};

// Function to search employee by name
void searchByName(struct employee emp[], int n) {
    char search_name[50];
    int i, found = 0;

    printf("\nEnter the name to search: ");
    scanf("%s", search_name);

    for(i=0; i<n; i++) {
        if(strcmp(emp[i].name, search_name) == 0) {
            found = 1;
            printf("\nDetails of employee %s:\n", search_name);
            printf("ID: %d, Name: %s, Salary: %.2f\n", emp[i].id, emp[i].name, emp[i].salary);
            break;
        }
    }

    if(!found) {
        printf("\nEmployee %s not found\n", search_name);
    }
}

// Function to search employee by id
void searchById(struct employee emp[], int n) {
    int search_id, i, found = 0;

    printf("\nEnter the ID to search: ");
    scanf("%d", &search_id);

    for(i=0; i<n; i++) {
        if(emp[i].id == search_id) {
            found = 1;
            printf("\nDetails of employee with ID %d:\n", search_id);
            printf("Name: %s, Salary: %.2f\n", emp[i].name, emp[i].salary);
            break;
        }
    }

    if(!found) {
        printf("\nEmployee with ID %d not found\n", search_id);
    }
}

// Function to display all employees
void displayAll(struct employee emp[], int n) {
    int i;

    printf("\nDetails of all employees:\n");
    for(i=0; i<n; i++) {
        printf("ID: %d, Name: %s, Salary: %.2f\n", emp[i].id, emp[i].name, emp[i].salary);
    }
}

// Function to display employees with salary greater than 25000
void displaySalaryGreaterThan(struct employee emp[], int n) {
    int i, count = 0;

    printf("\nDetails of employees with salary greater than 25000:\n");
    for(i=0; i<n; i++) {
        if(emp[i].salary > 25000) {
            count++;
            printf("ID: %d, Name: %s, Salary: %.2f\n", emp[i].id, emp[i].name, emp[i].salary);
        }
    }

    if(count == 0) {
        printf("\nNo employees found with salary greater than 25000\n");
    }
}

// Function to display employee with maximum salary
void displayMaxSalary(struct employee emp[], int n) {
    int i, maxIndex = 0;

    for(i=1; i<n; i++) {
        if(emp[i].salary > emp[maxIndex].salary) {
            maxIndex = i;
        }
    }

    printf("\nEmployee with maximum salary:\n");
    printf("ID: %d, Name: %s, Salary: %.2f\n", emp[maxIndex].id, emp[maxIndex].name, emp[maxIndex].salary);
}

int main() {
    int n, i, choice;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct employee emp[n];

    // Accept details of employees
    for(i=0; i<n; i++) {
        printf("\nEnter details of employee %d:\n", i+1);
        printf("Enter ID: ");
        scanf("%d", &emp[i].id);
        printf("Enter name: ");
        scanf("%s", emp[i].name);
        printf("Enter salary: ");
        scanf("%f", &emp[i].salary);
    }

    do {
        printf("\nChoose an option:\n");
        printf("1. Search by name\n");
        printf("2. Search by ID\n");
        printf("3. Display all\n");
        printf("4. Display all employees with salary greater than 25000\n");
        printf("5. Display employee with maximum salary\n");
        printf("6. Exit\n");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                searchByName(emp, n);
                break;
            case 2:
                searchById(emp, n);
                break;
            case 3:
                displayAll(emp, n);
                break;
            case 4:
                displaySalaryGreaterThan(emp, n);
                break;
            case 5:
                displayMaxSalary(emp, n);
                break;
            case 6:
                printf("\nExiting program\n");
                break;
            default:
                printf("\nInvalid choice, please try again\n");
        }
    } while(choice != 6);

    return 0;
}