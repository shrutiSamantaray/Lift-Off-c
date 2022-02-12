#include<stdio.h>

int main()
{
    int num;
    char branch[70] , name[100] , hobby[27];
    

    printf("Please enter your name\n");
    gets(name);

    printf("Enter your branch\n");
    gets(branch);

    printf("What is/are your hobby(s) ? \n");
    gets(hobby);
    
    printf("Enter your registration no. (only last three digits)\n");
    scanf("%d" , &num);
    
    printf("Required details : \n Name : %s \n Registration no. : %d\n Branch : %s\n Hobby(s) : %s\n" , name , num , branch , hobby);

    return 0 ;

}
