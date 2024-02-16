#include <stdio.h>

#include <string.h>

void login()
{
	int a=0,i=0;
    char uname[10],c=' ';
    char pword[10],code[10];
    char user[10]="asadullah";
    char pass[10]="green";
    do
{
    printf("\n\t******************************************************************");
    printf("\n\t::::::::::::::::::::::::::  LOGIN FORM  ::::::::::::::::::::::::::");
    printf("\n\t******************************************************************\n");
    printf(" \n                       ENTER USERNAME:-");
	scanf("%s", &uname);
	printf(" \n                       ENTER PASSWORD:-");
	while(i<10)
	{
	    pword[i]=getch();
	    c=pword[i];
	    if(c==13)
        break;
	    else printf("*");
	    i++;
	}
	pword[i]='\0';
	i=0;
		if(strcmp(uname,"asadullah")==0 && strcmp(pword,"green")==0)
	{
	printf("  \n\n\n       WELCOME TO EMPLOYEE RECORD MANAGEMENT SYSTEM !!!! LOGIN IS SUCCESSFUL.");
	    printf("\n LOADING PLEASE WAIT... \n");
    for(i=0; i<3; i++)
    {
        printf(".");
        Sleep(600);
    }
        printf("\n\t**************************************************************************");
        printf("\n\t:::::::::::  Please enter Employee Documents on next page ::::::::::::::::");
        printf("\n\t**************************************************************************\n");
	printf("\n\n\n\t\t\t\tPress any key to continue...");
	getch();
	break;
	}
	else
	{
		printf("\n        SORRY !!!!  LOGIN IS UNSUCESSFUL. PLEASE TRY AGAIN.....");
		a++;
		getch();
	}
}
	while(a<=5);

	if (a>5)
	{
		printf("\nSorry you have entered the wrong username and password for many times!!!");
		goto label;
		getch();
		}
		label:
		    printf(" Please try again later. ");
		system("cls");

}
int main()
{
    login();
    char answer ;
    int name, age;
    char str[] = "";
    float bs;
    printf("\n %c");
    answer = 'y';
    while(answer == 'y')
    {
        printf("\n\t****************************************************");
        printf("\n\t:::::::::::::: Employee Documents  :::::::::::::::::");
        printf("\n\t****************************************************\n");
        printf("\n\t\t Please include correct Name, Age, Address, Blood Group, Birth Date, Mobile Number, Basic Salary\n  ");

        printf("\n\t****************************************************");
        printf("\n\t:::::::::::::::  Enter Data here  ::::::::::::::::::");
        printf("\n\t****************************************************\n");
        printf("\n\tEnter Name: ");
        scanf("%s",str);
        printf("\n\tEnter Age: ");
        scanf("%d", &age);
        printf("\n\tEnter Address: ");
        scanf("%s",str);
        printf("\n\tEnter Blood Group: ");
        scanf("%s",str);
        printf("\n\tEnter Birth Date: ");
        scanf("%s",str);
        printf("\n\tEnter Mobile Number: ");
        scanf("%s",str);
        printf("\n\tEnter Basic Salary: ");
        scanf("%f", &bs);
        printf("\n\tAdd another record(y/n) : ");


    }
     printf(" \n\tThank you very much!!!!\n");
     printf(" \n\tPlease input again later!!!!\n");
     return 0;
}
