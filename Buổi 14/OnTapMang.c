#include <stdio.h>

int main()
{
    int mang[100]; // MANG 
    int n;
    printf ("moi nhap n phan tu :");
    scanf ("%d",&n);
    printf("Moi nhap cac phan tu:");
    for (int i=0;i<n;i++){
        scanf("%d",&mang[i]);
    }
    int sum = 0;
    for(int i = 0 ;i < n ;i ++){ // I VI TRI 
        sum = sum + mang[i]; // TONG GIA TRI 
    }
    printf("Tong = %d\n",sum);

    return 0;
}
