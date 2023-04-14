#include <stdio.h>

void welcome();
int main_menu(void);
int teacher_pass(void);
int student_pass(void);
int developers(void);
int teacher_menu(void);
int student_menu(void);

int main(void)
{
    int x;
    system("cls"); // clear screen
    welcome();

START:
    while(1)
    {
        x = 0;
        x = main_menu();/*Return value meanings
                        //0 == Exit //-1 == go back to main menu //1 == Teacher login approved //2 == student Login approved*/
        //printf("x = %d", x);

        switch(x)
        {
        case 0:
            goto END;
            break;
        case -1:
            continue;
            break;
        case 1:
            teacher_menu();
            break;
        case 2:
            student_menu();
            break;
        }
    }


END:
    return 0;
}



//Welcome
void welcome()
{
    for(int i = 0; i < 40; i++){printf(" ");}
    for(int i = 0; i < 39; i++){printf("*");}
    printf("\n");

    for(int i = 0; i < 40; i++){printf(" ");}
    printf("|");
    for(int i = 0; i < 37; i++){printf(" ");}
    printf("|\n");

    for(int i = 0; i < 40; i++){printf(" ");}
    printf("|");
    //welcome to
    for(int i = 0; i < 13; i++){printf(" ");}
    printf("Welcome to");
    for(int i = 0; i < 14; i++){printf(" ");}
    printf("|\n");

    for(int i = 0; i < 40; i++){printf(" ");}
    printf("|");
    //Daffodil Student Management App
    for(int i = 0; i < 3; i++){printf(" ");}
    printf("Daffodil Student Management App");
    for(int i = 0; i < 3; i++){printf(" ");}
    printf("|\n");

    for(int i = 0; i < 40; i++){printf(" ");}
    printf("|");
    for(int i = 0; i < 37; i++){printf(" ");}
    printf("|\n");

    for(int i = 0; i < 40; i++){printf(" ");}
    for(int i = 0; i < 39; i++){printf("*");}
    printf("\n");
    system("pause"); // pause the screen and press any button to continue

}

int main_menu(void)
{

    int op, pannel, z;
    do
    {
        system("cls");
        printf("\t\t\t----------------------------------------------------\n");
        printf("\t\t\t\t\t      Main Menu                     \n");
        printf("\t\t\t----------------------------------------------------\n");
        printf("Press: ");
        printf("\n1. Teacher Login.");
        printf("\n2. Student Login.");
        printf("\n3. Know about the developers.");
        printf("\n0. Exit.");
        printf("\n\nEnter your choice: ");

        scanf("%d", &op);

    }
    while (op < 0 || op > 3);

    switch(op)
    {
    case 0:
        system("cls");
        return 0;
        break;
    case 1:
        system("cls");
        return teacher_pass();
        break;
    case 2:
        system("cls");
        return student_pass();
        break;
    case 3:
        return developers();
        break;
    }
}

int teacher_pass(void)// If return is 1, that means both ID and Pass are correct. // If return is -1, them user want to exit.
{
Teacher_ID:
    printf("Enter your ID (Enter 0 to go back to Main Menu): ");
    int id;
    scanf("%d", &id);
    const int ID = 123456;
    if(id == 0) {return -1;}
    else if(id == ID){goto Teacher_PASS;}
    else{printf("Wrong ID!\n"); goto Teacher_ID;}

Teacher_PASS:
    printf("Enter your Password (Enter 0 to go back to Main Menu): ");
    int pass;
    scanf("%d", &pass);
    const int PASS = 123456;
    if(pass == 0){return -1;}
    else if(pass == PASS){return 1;}
    else{printf("Wrong pass!\n"); goto Teacher_PASS;}
}

int student_pass(void)
{
    Student_ID:
    printf("Enter your ID (Enter 0 to go back to Main Menu): ");
    int id;
    scanf("%d", &id);
    const int ID = 123456;
    if(id == 0) {return -1;}
    else if(id == ID){goto Student_PASS;}
    else{printf("Wrong ID!\n"); goto Student_ID;}

Student_PASS:
    printf("Enter your Password (Enter 0 to go back to Main Menu): ");
    int pass;
    scanf("%d", &pass);
    const int PASS = 123456;
    if(pass == 0){return -1;}
    else if(pass == PASS){return 2;}
    else{printf("Wrong pass!\n"); goto Student_PASS;}
}

int developers(void)
{
    int a;
    system("cls");
    printf("\t\t\t----------------------------------------------------\n");
    printf("\t\t\t\t\t    Developers list                     \n");
    printf("\t\t\t----------------------------------------------------\n");

    printf("\nName: Md. Nawshin Zaman\nDepartment of Computer Science and Engineering\nDaffodil International Univarsity, Savar, Ashilia, Dhaka.\nContact:01996707921\n");
    printf("\nName:    \nDepartment of Computer Science and Engineering\nDaffodil International Univarsity, Savar, Ashilia, Dhaka.\nContact:\n");
    printf("\nName:    \nDepartment of Computer Science and Engineering\nDaffodil International Univarsity, Savar, Ashilia, Dhaka.\nContact:\n");
    printf("\nName:    \nDepartment of Computer Science and Engineering\nDaffodil International Univarsity, Savar, Ashilia, Dhaka.\nContact:\n");
    printf("\n0.Go Back\n1. to exit.\n");
    printf("Enter your choice: ");
    scanf("%d", &a);

    if (a == 0){return -1;}
    else if (a == 1){return 0;}
}

int teacher_menu(void)
{
    system("cls");
    printf("\t\t\t----------------------------------------------------\n");
    printf("\t\t\t\t\t      Teacher Menu                     \n");
    printf("\t\t\t----------------------------------------------------\n\n");
    system("pause");
}

int student_menu(void)
{
    system("cls");
    printf("\t\t\t----------------------------------------------------\n");
    printf("\t\t\t\t\t      Student Menu                     \n");
    printf("\t\t\t----------------------------------------------------\n\n");
    system("pause");
}




