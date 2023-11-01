// Khai bao thu vien trong C 
#include<stdio.h> 
// Ctrl /: dung de comment 
int main(){
    // Tat ca cac code dat trong main va tren return 0
    // Ket thuc dong code la dau cham phay 
    // In 1 chuoi ra man hinh => printf
    // Muon xuong dong => Dung \n
    // Muon lui vao 1 tab => Dung \t
    printf("Nguyen thuy hang\n");
    printf("\tabcdisdfusldghhu");
    // In thong tin cua ban than gom ten, tuoi, dia chi, 
    // nganh hoc ra man hinh
    printf("Linh\n");
    printf("18tuoi\n");
    printf("Lai xa\n");
    printf("ung dung");
    // Kieu du lieu 
    // 1. So nguyen (0,1,2,-1,...)
    // => int , long
    // Pham vi cua long lớn hơn int 
    // 2. Số thực (1.2,...)
    // => float, double 
    // Phạm vi của double lớn hơn float 
    // 3. Chuỗi/ký tự 
    // VD: A,AA, Nguyễn Văn A... 
    // => Kiểu dữ liệu : char,... 
    // 4. True/ false 
    // => Kiểu là bool
    // Cách khai báo biến :
    // Kiểu dữ liệu tên biến;
    // VD: 
        int a;
        int b;
        float c;
    // Gán giá trị cho biến (=) => Phép gán 
    // VD: Khởi tạo 1 biến là số nguyen có giá trị ban đầu bằng 5 
    int number = 5;
    return 0;
}