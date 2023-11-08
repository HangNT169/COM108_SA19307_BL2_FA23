/**
 * 1. Tinh chu vi, dien tich cua hinh tron voi bán kính là giá trị mặc định
 * 2. Tính chu vi, diện tích của hình vuông với cạnh là giá trị mặc định
 * 3. Tính tổng, hiệu, tích, thương của 2 số có giá gtrị mặc định
 * 4. Tính điểm trung bình của sinh viên gồm các đầu điểm toán , lý, hoá với giá trị 
 * mặc định - 3 đầu điểm này phải là số nguyên 
 */ 
 #include <stdio.h>
 int main(){
    // B1:
    //  int a = 5;
    //  float chuvi = 2*a*3.14;
    //  int dientich = a*a*3.14;
    //  printf("chu vi = %0.1f\n",chuvi);
    //  printf("dien tich = %d",dientich);
     
    //   // B2:
    // int a=5;
    // int chuvi=a*4;
    // int dientich=a*a;
    // printf("chu vi la %d\n",chuvi);
    // printf("dien tich la %d",dientich);
    
    // // B4
    // int a = 8;
    // int b = 7;
    // int c = 7;
    // float diemtrungbinh=1.0*(a+b+c)/3;
    // printf ("diem trung binh %f",diemtrungbinh );
    // P1: Nhap du lieu tu ban phim 
    // Su dung scanf 
    // Cu phap :
    // scanf("% tuong ung cua kieu du lieu",&ten bien);
    // VD: 
    // 1. Nhap 1 so thuc va in so day ra man hinh 
    // 2. Nhap vao nam sinh cua ban than va in ra tuoi 
    // float number;
    // printf("Moi nhap:");
    // scanf("%f",&number);
    // printf("So vua nhap la:%f",number);
    // int namSinh;
    // printf("Moi nhap nam sinh:");
    // scanf("%d",&namSinh);
    // int tuoi = 2023 - namSinh;
    // printf("Tuoi = %d\n",tuoi);
    // float a ;
    //  printf ("Moi nhap");
    //  scanf ("%f",&a);
    //  float chuvi=2*3.14*a;
    //  printf("chu vi la%f",chuvi);
    /**
     * 1. Tinh chu vi, dien tich cua hinh tron voi bán kính là số thực có giá trị nhập từ bàn phím 
     * 2. Tính chu vi, diện tích của hình vuông với cạnh là số nguyên có giá trị nhập từ bàn phím 
     * 3. Tính tổng, hiệu, tích, thương của 2 số nguyên có giá trị nhập từ bàn phím 
     * 4. Tính điểm trung bình của sinh viên gồm các đầu điểm toán , lý, hoá là số nguyên
     * có giá trị nhập từ bàn phím
     */ 
    int toan;
    int ly;
    int hoa;
    printf("moi nhap toan:");
    scanf("%d",&toan);
    printf("moi nhap ly");
    scanf("%d",&ly);
    printf("moi nhap hoa");
    scanf("%d",&hoa);
    float diemtrungbinh=1.0*(toan+ly+hoa)/3;
    printf("diem trung binh la %f",diemtrungbinh);
    return 0;
 }