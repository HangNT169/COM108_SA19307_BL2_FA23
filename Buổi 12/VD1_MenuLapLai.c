#include <stdio.h>

int main(){
// Tạo 1 menu lặp lại gồm các chức năng sau. Menu lặp lại tới khi chọn 0:
//       1. Tính tổng của các số từ 1 - n với n là số nguyên nhập từ bàn phím
//       2. Tính tổng, hiệu, tích , thương của 2 số nguyên nhập từ bàn phím
//       0. Thoát

    int chucNang = 0;
    do{
        // B1: In menu 
        printf("1.Chuc nang 1\n");
        printf("2.Chuc nang 2\n");
        printf("0.Thoat\n");  
        
        // B2: Moi nhap 
        printf("Moi ban chuc nang:");
        scanf("%d",&chucNang);
        
        // B3: Tao menu => switch case 
        switch(chucNang){
            case 1:{
                // Code 
                printf("Chuc nang 1 \n");
                int number;
                printf("Nhap so:");
                scanf("%d",&number);
                int tong = 0;
                for(int i = 1; i <number + 1; i++){
                    tong+=i;
                }
                printf("Tong = %d\n",tong);
                break;
            }
            case 2:{
                // Code 
                printf("Chuc nang 2 \n");
                int soThuNhat;
                printf("Nhap so 1:");
                scanf("%d",&soThuNhat);
                int soThuHai;
                printf("Nhap so 2:");
                scanf("%d",&soThuHai);
                int tong = soThuNhat + soThuHai;
                printf("Tong = %d\n",tong);
                int hieu = soThuNhat - soThuHai;
                printf("Hieu = %d\n",hieu);
                long nhan = soThuNhat * soThuHai; // Co the dung kieu long /int
                printf("Nhan = %ld\n",nhan); // Co the dung 1 trong 2 long / int
                // int => so thuc (float/double)
                // double thuong = (double)soThuNhat / soThuHai; // ep kieu tuong minh => moi thu clear
                double thuong = (1.0)* soThuNhat / soThuHai; // ep kieu ngam => 1.0 * cong thuc 
                printf("Thuong = %lf\n",thuong);
                break;
            }
            case 0:{
                printf("Thoat chuong trinh");
                break;
            }
            default:{
                printf("Chuc nang khong ton tai\n");
                break;
            }
        }
    }while(chucNang !=21); // KHAC CHUC NANG THOAT 
    return 0;
}
