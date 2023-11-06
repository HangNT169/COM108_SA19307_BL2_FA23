#include <stdio.h>

int main(){
    /**
     * 1. In thông tin của bạn bên cạnh bao gồm : tên, tuổi, giới tính, địa chỉ, ngành học, quê quán ra màn hình.
     */ 
    // printf ("huy\n");
    // printf ("nam\n");
    // printf ("Ha Noi\n");
    // printf("18\n");
    // Khai bao 1 bien so nguyen co gia tri khoi tao ban dau la 5 
    // int number = 15;
    // // In gia tri cua bien 
    // printf("Number = %d",number);
    /**
     * int => %d 
     * long => %ld 
     * float => %f 
     * double => %lf 
     * char => %c, %s....
     */ 
    // int a = 5;
    // float b = 5.5;
    // // // C1: In dong cu the 
    // printf("Gia tri cua bien a la %d\n",a);
    // printf("Gia tri cua bien b la %f\n",b);
    // // C2: In gop 
    // printf("a = %d - b = %f",a,b);
    /**
     * 1. Tinh tong cua 2 so nguyen co gia tri khoi tao mac dinh
     */ 
    // int a = 6;
    // int b = 8;
    // int tong = a+b;
    // printf("Tong la %d",tong);
    //   // Bai 2
    // int a = 5;
    // int b = 4;
    // int tong = a+b;
    // printf(" Tong la %d\n",tong);
    // int hieu = a-b;
    // printf(" Hieu la %d\n",hieu);
    // int tich = a*b;
    // printf(" Tich la %d\n",tich);
    // Ep kieu 
    /**
     * Co 2 cach ep kieu 
     *  1. Ep kieu tuong minh: (kieu du lieu muon ep)cong thuc toan 
     *  2. Ep kieu ngam : 1.0 * cong thuc toan 
     */ 
     // int => double 
    // double thuong = (double)a/b;
    double thuong = (1.0) * a/b;
    printf("Thuong = %lf",thuong);
    // Bai 3: 
    int bankinh = 5;
    double chuvi = 2*bankinh*3.14;
    printf("Chu vi = %lf",chuvi);
    double dientich = bankinh*bankinh*3.14;
    printf("dientich = %lf",dientich);
    return 0;
}
