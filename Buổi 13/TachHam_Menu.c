/**
 * Tao 1 menu lap lai toi khi chon 0 
 *  1. Tinh tong cua 2 so nhap tu ban phim 
 *  2. Kiem tra so nhap tu ban phim la so chan hay le  
 *  0. Thoat 
 */ 
#include <stdio.h>

void chucNang1(int a,int b){
    int tong = a+b;
    printf("Tong = %d\n",tong);
}
void chucnang2(int a){
    if(a%2==0){
        printf("day la so chan\n"); 
    }else{
        printf("day la so le\n");
    }
}
int main()
{
    int chucnang;
    do{
        printf("1.Chuc nang 1\n");
        printf("2.Chuc nang 2\n");
        printf("0. Thoat\n");
        printf("Moi nhap chuc nang\n");
        scanf("%d",&chucnang);
        // Cach tach ham don gian 
        // Co bn case => co bang day ham 
        switch(chucnang){
            case 1:{
                printf("Day la chuc nang 1\n");
                int a,b;
                printf("Moi nhap:");
                scanf("%d",&a);
                printf("Moi nhap:");
                scanf("%d",&b);
                chucNang1(a,b);
                break;
            }
            case 2:{
                printf("Day la chuc nang 1\n");
                int a;
                printf("moi nhap a:");
                scanf("%d",&a);
                chucnang2(a);
                break;  
            }
            case 0:{
                break;
            }
            default:{
                printf("Chuc nang k ton tai");
                break;  
            }
        } 
    }while (chucnang != 0);

    return 0;
}
