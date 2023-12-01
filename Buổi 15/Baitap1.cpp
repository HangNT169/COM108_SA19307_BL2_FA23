/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    // 1: Nhap ten, dia chi, nganh hoc, que quan cua ban than 
    // va in ra man hinh 
    // 2. Nhap tuoi, can nang, chieu cao cua ban than va in ra man hinh 
    char name[1000];
    printf("Moi ban nhap ten: ");
    gets(name);
    char diachi[50];
    printf("Moi nhap dia chi: ");
    gets(diachi);
    char nganhhoc[50];
    printf("Moi nhap nganh hoc: ");
    gets(nganhhoc);
    char quequan[50];
    printf("Moi nhap que quan: ");
    gets(quequan);
    printf("Ten cua ban la: %s\n",name);
    printf("Dia chi cua ban la: %s\n",diachi);
    printf("Nganh hoc cua ban la: %s\n",nganhhoc);
    printf("Que quan cua ban la: %s\n",quequan);
    
    return 0;
}
