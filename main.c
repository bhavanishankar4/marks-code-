/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i , marks[6];
    printf("enter six subject marks ");
    scanf("%d",&marks[0]);
    scanf("%d",&marks[1]);
    scanf("%d",&marks[2]);
    scanf("%d",&marks[3]);
    scanf("%d",&marks[4]);
    scanf("%d",&marks[5]);
    
    printf("subject 1 marks :%d\n",marks[0]);
    printf("subject 2 marks :%d\n",marks[1]);
    printf("subject 3 marks :%d\n",marks[2]);
    printf("subject 4 marks :%d\n",marks[3]);
    printf("subject 5 marks :%d\n",marks[4]);
    printf("subject 6 marks :%d\n",marks[5]);
    
    return 0;
    
    
}