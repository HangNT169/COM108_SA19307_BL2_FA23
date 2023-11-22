// Tao 1 menu gom cac chuc nang sau:
    // 1. Nhap vao so nguyen n. Tinh tich cac so le tu 1-n
    // 2. Nhap vao so nguyen n. Liet ke cac so chia het cho 3 va 5 tu 0 - n
    // 3. Thoat
#include<stdio.h>
int main(){
    int chucnang;
    printf("chucnang 1:\n");
    printf("chucnang 2:\n");
    printf("chucnang 3:\n");
    printf("moi nhap:\n");
    scanf("%d",&chucnang);
    switch(chucnang){
        case 1:{
            printf("chucnang 1");
            int a;
            printf("Moi nhap a:");
            scanf("%d",&a);
            int tich=1;
            for(int i=1;i<a+1;i++){
                if(i%2!=0){
                    tich=tich*i;
                }
            }
            printf("Tich =%d",tich);
            
            break;
        }
        case 2:{
            printf("chucnang 2");
            int n;
            printf("moi nhap so nguyen");
            scanf("%d",&n);
            for(int i = 0; i <= n;i++){
                if(i%3==0 && i%5==0){
                    printf("%d\n",i);
                }
            }
            break;
        }
        case 3:{
            break;
        }
        default:{
            printf("chucnang khong ton tai");
            break;
        }
    }
    return 0;
}