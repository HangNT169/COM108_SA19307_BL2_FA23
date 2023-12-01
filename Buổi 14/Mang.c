#include <stdio.h>

int main()
{
    /**
     * Mang : Là tập hợp của các phần tử 
     *          cùng kiểu dữ liệu
     * VD:     5 9 -7 6 3 0 
     * Vị trí: 0 1 2  3 4 5 
     * Chú ý: 
     *  + Vị trí đầu tiên bắt đầu bằng 0 
     *  + Vị trí cuối cùng : size - 1
     * Mảng : (a gồm size phần tử)
     *  + Giá trị 
     *  + Vị trí 
     * Giá trị ở vị trị đầu tiên : a[0]
     * Giá trị ở vị trí cuối cùng : a[size -1] 
     * Giá trị ở vị trí i bất kì: a[i]
     */ 
     // VD: 
     // 1. Nhâp vào mảng số nguyên gồm n phần tử. 
     //     In các mảng các số nguyên ra màn hình 
     // 2. Nhâp vào mảng số nguyên gồm n phần tử. 
     //     Tính tổng các phần tử của mảng 
     // B1: Khai bao mang 
    int arr[100]; // KHAI BAO MANG => DEFAULT O HIEN TAI 
    // B2: Khai bao so luong phan tu cua mang 
    int n;
    printf("Moi nhap size:");
    scanf("%d",&n);
    // B3: Nhap cac phan tu vao mang 
    printf("Moi nhap cac phan tu:\n");
    for(int i = 0 ; i < n; i++ ){ // i => vi tri 
        scanf("%d",&arr[i]); // NHAP GIA TRI VAO TRONG MANG 
    }
    // B4: In cac phan tu trong mang 
    printf("In cac phan tu\n");
    for(int i = 0 ;i <n;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}
