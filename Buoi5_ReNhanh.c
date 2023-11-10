#include <stdio.h>

int main(){
    /**
     * Phần 1: Toán tử : 
     * 1. Toán tử số học : +,-,*,/, %(lấy dư)
     *      VD: 4/4 = 1 (Thương)
     *          4%4 = 0(Số dư)
     * 2. Toán tử so sánh: >,<,>=,<=,==(Bằng), !=(Khác)
     * 3. Toán tử logic: AND(&&), OR(||), NOT(!) -> Phủ định
     * 4. Toán tử gán : =(GÁN),+=,*=,/=,-=,++,--...
     * Phần 2: Rẽ nhánh 
     * 2.1. If..else 
     *  Cú pháp:
     *  if(điều kiện){
         // Code 
        }else if(điều kiện){
             // code 
        }.... Có bao nhiêu else if cũng được
        else{
            // Trường hợp cuối cùng 
        }
        Notes:
            - Mở đầu luôn luôn là if 
            - Kết thúc luôn luôn là else 
            - Nếu thừa điều kiện thì mới là else if
     */ 
     // VD: 
     // 1. Nhập vào 1 số nguyên từ bàn phím. 
     // Kiểm tra số đấy như thế nào với số 5
     // 2. Nhập vào năm sinh từ bàn phím. Tính tuổi của bản thân
     // Và in ra xem bản thân đã trưởng thành hay chưa?
     // >=18 tuổi => In ra trưởng thành. Còn lại thì chưa.
     // B1:
    //  int a;
    // printf ("moi nhap:");
    // scanf ("%d",&a);
    // // Có 3 điều kiện (>5 , <5 hoawcj la =5)
    // if(a == 5){
    //     printf("Day la so bang 5");
    // }else if(a < 5){
    //     printf("Day la so la nho hon 5");
    // }else{ // >5
    //     printf("Day la so lon hon 5");
    // }
    // // Thich viet dieu kien nao truoc cung duoc 
    // B2:
    // int namSinh;
    // printf("Moi nhap nam sinh:");
    // scanf("%d",&namSinh);
    // int tuoi = 2023 - namSinh;
    // if(tuoi >= 18){
    //     printf("Da truong thanh");
    // }else{
    //     printf("Chua truong thanh");
    // }
    return 0;
}
