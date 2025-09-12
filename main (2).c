#include <stdio.h>

int main() {
char name[50], gender[10], address[100], email[50], phone[20], school[50], course[50], hobby[50], dream[50];
int age;

printf("Enter your name: ");
scanf("%[^\n]", name); getchar(); 

printf("Enter your age: ");
scanf("%d", &age); getchar();

printf("Enter your gender: ");
scanf("%[^\n]", gender); getchar();

printf("Enter your address: ");
scanf("%[^\n]", address); getchar();

printf("Enter your email: ");
scanf("%[^\n]", email); getchar();

printf("Enter your phone number: ");
scanf("%[^\n]", phone); getchar();

printf("Enter your school: ");
scanf("%[^\n]", school); getchar();

printf("Enter your course: ");
scanf("%[^\n]", course); getchar();

printf("Enter your hobby: ");
scanf("%[^\n]", hobby); getchar();

printf("Enter your dream job: ");
scanf("%[^\n]", dream); getchar();

printf("\n--- USER INFORMATION ---\n");
printf("Name: %s\n", name);
printf("Age: %d\n", age);
printf("Gender: %s\n", gender);
printf("Address: %s\n", address);
printf("Email: %s\n", email);
printf("Phone: %s\n", phone);
printf("School: %s\n", school);
printf("Course: %s\n", course);
printf("Hobby: %s\n", hobby);
printf("Dream Job: %s\n", dream);

return 0;
}

 