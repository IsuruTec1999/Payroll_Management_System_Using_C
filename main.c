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