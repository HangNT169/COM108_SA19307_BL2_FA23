/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(){
    
    // B1: In ra danh sách menu 
    printf("1.Chuc nang 1\n");
    printf("2.Chuc nang 2\n");
    printf("3.Chuc nang 3\n");
    printf("4.Chuc nang 4\n");
    printf("5.Chuc nang 5\n");
    // B2: Moi nhap vao chuc nang 
    int chucNang;
    printf("Moi nhap vao chuc nang:");
    scanf("%d",&chucNang);
    // B3: Tao menu 
    switch(chucNang){
        case 1:{
            // Code chuc nang 1 
            printf("Chuc nang 1\n");
            int tuoi;
            printf("Moi nhap:");
            scanf("%d",&tuoi);
            printf("Tuoi = %d",tuoi);
            break;
        }
        case 2:{
            // Code chuc nang 2 
            printf("Chuc nang 2\n");
            break;
        }
        case 3:{
            // Code chuc nang 3 
            printf("Chuc nang 3\n");
            break;
        }
        case 4:{
            // Code chuc nang 4 
            printf("Chuc nang 4\n");
            break;
        }
        case 5:{
            // Code chuc nang 5 
            printf("Chuc nang 5\n");
            break;
        }
        default:{
            printf("Chuc nang khong ton tai\n");
            break;
        }
    }
    return 0;
}
