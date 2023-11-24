#include <stdio.h>

int main()
{
   /**
    * Tao 1 menu gom cac chuc nang sau. Menu lap di lap lai toi khi chon 3 thi dung.
    *   1. In cac so tu 0 - n.
    *   2. Tinh tong cac so le tu 1 - 10.
    *   3. Thoat
    */ 
    int chucNang = 0;
    // VUT VAO MENU LAP LAI 
    do{
        //B1: Viet lai MENU
        printf("1. Chuc nang 1\n");
        printf("2. Chuc nang 2\n");
        printf("3. Thoat\n");
        // B2: Moi nhap lai chuc nang 
        printf("Moi nhap chuc nang:");
        scanf("%d",&chucNang);
        // B3: Tao menu 
        switch(chucNang){
            case 1:{
                printf("chuc nang 1");
                int n;
                printf("moi nhap n:");
                scanf("%d",&n);
                for(int i=0;i<n+1;i++){
                    printf("%d",i);
                }
                break;
            }
            case 2:{
                printf("chuc nang 2");
                int sum=0;
                for(int i=0;i<11;i++){
                    if(i%2!=0){
                        sum=sum+i;
                    }
                }
                printf("sum la %d",sum);
                break;
            }
            case 3:{
                printf("chuc nang 3");
                break;
            }
            default:{
                printf("chuc nang khong ton tai");
                break;
            }
        }
    }while(chucNang !=3); // Chuc nang khac 3 thi chuong trinh moi lap lai 
    
    return 0;
}
