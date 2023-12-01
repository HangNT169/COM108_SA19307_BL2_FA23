// 3. Nhap ten, tuoi, chieu cao, dia chi , nganh hoc, ky hoc
// cua ban than va in ra man hinh
#include<stdio.h>
int main()
{
    char name[50];
    printf("moi nhap ten:");
    gets(name);
    int tuoi;
    printf("moi nhap tuoi:");
    scanf("%d",&tuoi);
    float chieucao;
    printf("moi nhap chieu cao:");
    scanf("%f",&chieucao);
    fflush(stdin) // xoa bo nho dem
    char diachi[50];
    printf("moi nhap dia chi:");
    gets(diachi);
    char nganhhoc[50];
    printf("moi nhap nganh hoc:");
    gets(nganhhoc);
    char kyhoc[50];
    printf("moi nhap ky hoc:");
    gets(kyhoc);
    printf("ten la %s",name);
    printf("tuoi la %d",tuoi);
    printf("chieu cao la %f",chieucao);
    printf("dia chi la %s",diachi);
    printf("nganh hoc la %s",nganhhoc);
    printf("ky hoc la %s",kyhoc);
    return 0;
}
