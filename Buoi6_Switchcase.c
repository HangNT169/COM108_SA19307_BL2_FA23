/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(){
    // Nhap vao 1 so. Kiem tra so day ntn vs 5
    // if(number < 5){
        
    // }
    // number == gia tri cu the 
    // if...else: Dung cho dien kien la 1 khoang 
    // Switch..case : Dung cho dieu kien no la 1 so cu the 
    // Cú pháp: 
    // switch(ten bien){
    //     case gia tri:{
    //         // code 
    //         break; // Ket thuc moi case luon luon la break
    //     }
    //     // Co bn case cung duoc 
    //     default:{
    //         // Nhung truoc hop con lai 
    //         // code 
    //         break;
    //     }
    // }
    // CHU Y: KET THUC CASE LUON LUON LA BREAK. KET THUC SWITCH LUON LUON LA DEFAULT 
    // switch(ten bien){
    // }
    
    // VD: Nhap vao 1 so kiem tra so do thuoc thang nao trong nam 
    // VD: 1 => Thang mot 
    // 2 => Thang hai
    // ...
     // B1: Nhap thang tu ban phim 
    int thang;
    printf("Moi nhap vao thang trong nam:");
    scanf("%d",&thang);
    
    // B2: Kiểm tra đấy là tháng nào trong năm 
    // 12 truong hop => se co 12 case 
    switch(thang){
        case 1:{
            // Code 
            printf("Day la thang mot\n");
            break;
        }
        case 2:{
            // code 
            printf("Day la thang hai\n");
            break;
        }
        // Se co 12 case 
        // Tu lam not 12 case 
        //... 
        default:{
            // Cac truong hop con lai // Giong else (Cac truong hop con lai)
            printf("Thang khong ton tai\n");
            break;
        }
    }
    return 0;
}
