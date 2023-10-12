#include <string.h>
#include <malloc.h>
#include <time.h>
#include<iostream>
using namespace std;

char * settime(struct tm *u)
{
  char s[10];
  char *tmp;
  for (int i = 0; i<10; i++) s[i] = 0;
  int length = strftime(s, 10, "%H%M%S", u);
  tmp = (char*)malloc(sizeof(s));
  strcpy(tmp, s);
  return(tmp);
}

int main()
{


string number[11][8]={
{        
" ______ ",    
"|  __  |",
"| |  | |",     
"| |  | |",          
"| |  | |",         
"| |  | |",      
"| |__| |",     
"|______|"},     
{
"    ____",       
"   /   |",
"  / /| |",    
" / / | |",  
"/_/  | |",  
"     | |",
"     | |",
"     |_|"},
{         
"  _____ ",          
" / ___ |",   
"/_/  / /", 
"    / / ", 
"   / /  ",
"  / /   ",
" / /____",
"/______|"},
{         
" ______ ",      
"|  __  |",  
"|_|  | |",     
"  ___| |",
" |___  |",
" _   | |",    
"| |__| |",    
"|______|"},
{
" _    _ ",
"| |  | |",
"| |  | |", 
"| |__| |", 
"|_____ |",
"     | |",
"     | |",
"     |_|"}, 
{        
" _______", 
"|  ____|",    
"| |____ ",   
"|____  |", 
"     | |",  
"     | |",
" ____/ /",   
"|_____/ " }, 
{        
" ______ ",          
"|  ____|",     
"| |     ", 
"| |     ", 
"| |____ ",   
"|  __  |",      
"| |__| |",  
"|______|"},
{        
" ______ ",         
"|____  |",     
"     / /",
"    / / ",
"   / /  ",
"  / /   ", 
" / /    ", 
"/_/     "},    
{        
" ______ ",     
"/  __  |",
"| |__| |",
"|_    _|",
" _|   |_",
"|  __  |",
"| |__| |",
"|______/"},
{        
" ______ ", 
"|  __  |",
"| |__| |",
"|___   |",
"    |  |", 
"    |  |", 
" ___|  |",  
"|______|"},
{        
"   ____  ",  
"  |    | ",   
"  |____| ",          
"         ",       
"   ____  ",                
"  |    | ",           
"  |____| ",           
"         "}        
           
 };
struct tm *u;
  char *f;
  system("chcp 1251");
  system("cls");
  
  

  int timed[6];
 while(true)
 {  
    const time_t timer = time(NULL);
    u = localtime(&timer);
    f = settime(u);
    timed[0]=f[0]-48;
    timed[1]=f[1]-48;
    timed[2]=f[2]-48;
    timed[3]=f[3]-48;
    timed[4]=f[4]-48;
    timed[5]=f[5]-48;
   
    for(int i = 0;i <8;i++)cout << number[timed[0]][i] << "          "<< number[timed[1]][i] << number[10][i] << number[timed[2]][i] << "          "<< number[timed[3]][i]<< number[10][i]<< number[timed[4]][i] << "          "<< number[timed[5]][i] << endl ;
    for(int i = 0;i < 22;i++)cout << endl;
    _sleep(750);
 }
 
 

  
  

   system("pause");
}
