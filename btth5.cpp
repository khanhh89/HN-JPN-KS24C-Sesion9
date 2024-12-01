#include<stdio.h>
int isPrime(int n) {
    if(n<2) return 0;
    for(int i=2;i*i<=n;i++) {
        if(n%i==0) return 0;
    }
    return 1;
}
int main() {
    int arr[100];
    int currentLength=0;
    int choice;
    int maxSize=100;
    do {
        printf("\nMENU\n");
        printf("1.nhap so phan tu va gia tri cac phan tu\n");
        printf("2.in ra gia tri cac phan tu dang quan li\n");
        printf("3.in ra gia tri cac phan tu chan va tinh tong\n");
        printf("4.in ra gia tri lon nhat va nho nhat trong mang\n");
        printf("5.in ra cac gia tri la so nguyen to trong mang va tinh tong\n");
        printf("6.nhap va moi tro phan chi va thong ke so lan xuat hien\n");
        printf("7.them mot phan tu vao vi tri chi dinh\n");
        printf("8.Thoat\n");
        printf("lua chon la cua ban: ");
        scanf("%d",&choice);
        if(choice==1) {
            int n;
            printf("nhap so phan tu(toi da 100): ");
            scanf("%d",&n);
            if(n<0||n>maxSize) {
                printf("so phan tu khong hop le!\n");
            } else {
                currentLength=n;
                for(int i=0;i<n;i++) {
                    printf("nhap phan tu thu %d: ",i+1);
                    scanf("%d",&arr[i]);
                }
            }
        } else if(choice==2) {
            printf("cac phan tu dang quan li: ");
            for(int i=0;i<currentLength;i++) {
                printf("%d ",arr[i]);
            }
            printf("\n");
        } else if(choice==3) {
            int sum=0;
            printf("cac phan tu chan: ");
            for(int i=0;i<currentLength;i++) {
                if(arr[i]%2==0) {
                    printf("%d ",arr[i]);
                    sum+=arr[i];
                }
            }
            printf("\n tong cac phan tu chan: %d\n",sum);
        } else if(choice==4) {
            if(currentLength==0) {
                printf("mang trong!\n");
            } else {
                int max=arr[0],min=arr[0];
                for(int i=1;i<currentLength;i++) {
                    if(arr[i]>max) max=arr[i];
                    if(arr[i]<min) min=arr[i];
                }
                printf("gia tri lon nhat: %d\n",max);
                printf("gia tri lon nhat: %d\n",min);
            }
        } else if(choice==5) {
            int sum=0;
            printf("cac so nguyen to: ");
            for(int i=0;i<currentLength;i++) {
                if(isPrime(arr[i])) {
                    printf("%d ",arr[i]);
                    sum+=arr[i];
                }
            }
            printf("\ntong cac so nguyen to: %d\n",sum);
        } else if(choice==6) {
            printf("gia tri can thong ke: ");
            int value,count=0;
            scanf("%d",&value);
            for(int i=0;i<currentLength;i++) {
                if(arr[i]==value) count++;
            }
            printf("Gia tri %d xuat hien %d lan.\n",value,count);
        } else if(choice==7) {
            if(currentLength>=maxSize) {
                printf("khong the !\n");
            } else {
                printf("nhap gia tri can them: ");
                int value,index;
                scanf("%d",&value);
                printf("nhap vao vi tri(0-%d): ",currentLength);
                scanf("%d",&index);
                if(index<0||index>currentLength) {
                    printf("khong duoc!\n");
                } else {
                    for(int i=currentLength;i>index;i--) {
                        arr[i]=arr[i-1];
                    }
                    arr[index]=value;
                    currentLength++;
                    printf("oke roi\n");
                }
            }
        } else if(choice==8) {
            printf("Thoatchuongtrinh.\n");
        } else {
            printf("khonghople,chonlai.\n");
        }
    } while(choice!=8);
    return 0;
}
