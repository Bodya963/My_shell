#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <assert.h>
#include <string.h>
#include <sys/wait.h>

#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_RESET   "\x1b[0m"



#define SIZE_BUFF 250 // гойда
#define SIZE_ARGV 20


void print_arr( char **, int ); // принтует массив argv
char ** run_prog( char**, int);
char ** run_prog( char ** , int , int* , int );
int nto0(char *, int); //заменяет \n в строке на \0
int argv_len( char, int ); // определяет кол-во аргументов из входного буфера
int str_len( char *);
int pipe_prog( char **, int ,char **, int); // соединяет пайрлайном два программы
char** buff_split( char *, int, int*); // разделяет входной буфер на аргументы для exec
char * str_cpy( char *, int ); // 
void wait_all( int); 
void all_free(char**, int); // 
void print_interface(); // печаетает интерфейс для shell