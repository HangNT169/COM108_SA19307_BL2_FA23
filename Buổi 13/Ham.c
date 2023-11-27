#include <stdio.h>

// Cu phap ham :
// kieu dữ liệu của hàm ten ham (tham so truyen vao - neu co){
    
// }
// C1: Ham void => KHONG CO RETURN(KIEU DU LIEU KHÔNG TRA VE)
void tinhTong1(int soThuNhat,int soThuHai){
    int tong = soThuNhat + soThuHai;
    printf("Tong = %d\n",tong);
}
// C2: Ham co kieu du lieu tra ve 
float tinhThuong(int a,int b){
    float thuong = 1.0*a/b;
    return thuong; 
    // PHAI RETURN 1 BIEN CO KIEU DU LIEU TRUNG 
    // VS KIEU TRA VE CUA HAM 
}
int main(){
    /**
     * Hàm: 
     *   - Tách nhỏ code 
     *   - Tái sử dụng code nếu cần 
     * Có 2 loại hàm :
     *  - Hàm không kiểu dữ liệu trả về (TUC LA KHONG CO RETURN): VOID 
     *  - Hàm có kiểu dữ liệu trả về (CO RETURN)
     * TAT CẢ CÁC LOẠI HÀM BẮT BUỘC PHẢI VIẾT TRÊN MAIN. 
     */ 
    // VD: Tinh tong, hieu, tích, thương
    // cua 2 so nguyen nhập từ bàn phím
    int a;
    int b;
    printf("moi nhap a");
    scanf("%d",&a);
    printf("moi nhap b");
    scanf("%d",&b);
    tinhTong1(a,b); // Cach goi ham k kieu tra ve 
    float thuong = tinhThuong(a,b);// Cach goi ham co kieu tra ve 
    printf("Thuong = %f",thuong);
    // int tong=a+b;
    // int hieu=a-b;
    // int tich=a*b;
    // float thuong=1.0*a/b;
    // printf("tong=%d",tong);
    // printf("hieu=%d",hieu);
    // printf("tich=%d",tich);
    // printf("thuong=%f",thuong);
    
    return 0;
}
