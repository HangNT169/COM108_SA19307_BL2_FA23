#include <stdio.h>

int main()
{
    // In tu 1 - 100 => lap lai nhieu lan 
    // printf("1");
    // printf("1");
    // => Vong lap: Lap di lap lai 1 hanh dong nhieu lan 
    // Co 3 loai vong lap trong C 
    // 1. for 
    // 2. while 
    // 3. do..while 
    // 1. Cu phap for 
    // for(gia tri khoi tao;dieu kien; buoc nhay){
    //     // Code 
    // }
    // BT:
    // 1. In cac so tu 0 - 10 
    // 2. In cac so tu 1 - 50 
    // 3. Tinh tong cac so tu 1 - 10 
    // 4. Tinh tich cac so tu 1- 5 
    // 5. Nhap vao 1 so nguyen nguyen n. In cac so tu tu 0 -n 
    // 6. Nhap vao 1 so nguyen nguyen n. In cac so chan tu tu 0 -n 
    // 7. Nhap vao 1 so nguyen nguyen n. In cac so le tu tu 0 -n 
    // 8  Nhap vao 1 so nguyen nguyen n. Tinh tong cac so tu 0-n 
    // 9  Nhap vao 1 so nguyen nguyen n. Tinh tich cac so tu 0-n 
    // 10.Nhap vao 1 so nguyen nguyen n. Tinh tich cac so le tu 0-n 
     // Tinh tong cac so tu 1 - 10: (1+2 + 3+ ... + 10) 
    // 2+4+6+8+10 
    //  int sum = 0;
     int tich = 1;
     for(int i = 1 ; i < 11 ; i++){
        //  if(i % 2 == 0){
        //     sum = sum+i; 
        //  }
        //  sum = sum+i; 
         tich = tich *i;
         // Hoac sum +=i;
     }
    //  printf("Sum = %d\n",sum);
    printf("Tich = %d\n",tich);
    // B1: IN cac so tu 1- 50 
    // B2: Tinh tich cac so tu 1- 10 
    // B3: Tinh tong cac so le tu 1- 20 
    // B4: In cac so chan tu 0 - 10 
     // 5. Nhap vao 1 so nguyen nguyen n. In cac so tu tu 0 -n 
    // 6. Nhap vao 1 so nguyen nguyen n. In cac so chan tu tu 0 -n 
    // 7. Nhap vao 1 so nguyen nguyen n. In cac so le tu tu 0 -n 
    // 8  Nhap vao 1 so nguyen nguyen n. Tinh tong cac so tu 0-n 
    // 9  Nhap vao 1 so nguyen nguyen n. Tinh tich cac so tu 1-n 
    // 10.Nhap vao 1 so nguyen nguyen n. Tinh tich cac so le tu 0-n 
    for( int i=0; i < 51; i++){
        printf("%d\n", i);
    }
    int tich =1;
    for(int i = 1 ; i <10 ; i++){
        tich = tich*i;
    }
    printf(" tich = %d\n", tich);
    int tong =0;
    for(int i = 1 ; i < 21 ; i++){
        if(i %2!=0){
         tong = tong+i;
        }
    }
    printf("tong la %d\n", tong);
    // B1: Nhap n 
    int n;
    printf("Moi nhap n:");
    scanf("%d",&n);
    // B2: In cac so tu 0 -n 
    for(int i = 0 ; i < n+1; i++){
        printf("%d\n",i);
    }
    return 0;
}
