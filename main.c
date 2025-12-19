#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>


#define EMP_FILE "empdata.txt"
#define TMP_FILE "tmpdata.txt"
 
 
#define EPF_RATE 0.18
#define ETF_RATE 0.03
#define GEN_TIME (8 * 20)
#define PWD "amita\0"
int main(int, char**);
void welcome_message(void);
void null(void);
void main_menu(void);
void manage_employee(void);
void add_employee(void);
void delete_employee(void);
void edit_employee(void);
void search_employee(void);
void print_report(void);
void print_slip(void);
void emp_menu(void);
void exit_message(void);

int main(int argc, char *argv[])
{
	char menuOpt;
	int isExit = 0;
	welcome_message();
	if(argc > 1)
	{


		printf("%s : Start Up Error >>> ", argv[0]);
		fflush(stdin);
		getch();
		return (EXIT_FAILURE);
	}
    null();
	do
	{
		main_menu();
		fflush(stdin);
		menuOpt = (char)getch();
		switch(menuOpt)
		{
			case '1':
			{
				manage_employee();
				break;
			}
			case '2':
			{
				print_report();
				break;
			}
			case '3':
			{
				print_slip();
				break;
			}
			case '4':
			{
				isExit = 1;
				break;
			}
			default:
			{

				printf("Invalid Option!");
				fflush(stdin);
				getch();
				break;
			}
		}

	}while(isExit == 0);
	exit_message();
	fflush(stdin);
	getch();
    return (0);
}

	void welcome_message(void)
{

    system("COLOR 1B");
    system("cls");
	printf("\n\t\t\t  ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
    printf("\n\t\t\t  +      ++++++++++++++++++++++++++++++++++++++++++++++++      +");
    printf("\n\t\t\t  +      +                                              +      +");
    printf("\n\t\t\t  +      +                                              +      +");
    printf("\n\t\t\t  +      + WELCOME TO PAYROLL MANAGEMENT SYSTEM 	+      +");
    printf("\n\t\t\t  +      +                                              +      +");
    printf("\n\t\t\t  +      +                                              +      +");
    printf("\n\t\t\t  +      ++++++++++++++++++++++++++++++++++++++++++++++++      +");
    printf("\n\t\t\t  ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("\n\t\t\t  ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("\n\t\t\t  PRESS ANY KEY TO CONTINUE");

 	fflush(stdin);
	getch();
}

void main_menu(void)
{
	system("cls");
	printf("\n\t\t\t\t MENU\n\t\t\t\t ______________________________________________");
    printf("\n\t\t\t\t| [1] MANAGE EMPLOYEES                         |");
    printf("\n\t\t\t\t| _____________________________________________|");
    printf("\n\t\t\t\t| [2] PRINT REPORT                             |");
    printf("\n\t\t\t\t| _____________________________________________|");
    printf("\n\t\t\t\t| [3] PRINT SLIP                               |");
    printf("\n\t\t\t\t| _____________________________________________|");
    printf("\n\t\t\t\t| [4] EXIT                                     |\n\t\t\t\t________________________________________________\n\t\t\t\t\t\t\t\t");

	printf("\n\t\t\t\tPLEASE CHOOSE A NUMBER IN THE BOX ABOVE:");



	
}
