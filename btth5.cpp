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
        printf("1.NhapsoPhantuvaGiaTricacPhantu\n");
        printf("2.InragiatricacPhantudangQuanly\n");
        printf("3.InragiatricacPhantuchanvatinhtong\n");
        printf("4.Inragiatrilonnhatvannhonhattrongmang\n");
        printf("5.InragacPhantulasonguyentoTrongmangvatintong\n");
        printf("6.Nhapvamoitrophanchivathongkesolanxuathien\n");
        printf("7.ThemmotPhantuvaitoVitrichidinh\n");
        printf("8.Thoat\n");
        printf("Luachoncuaban: ");
        scanf("%d",&choice);
        if(choice==1) {
            int n;
            printf("NhapsoPhantutoida100: ");
            scanf("%d",&n);
            if(n<0||n>maxSize) {
                printf("Sopantukhonghople!\n");
            } else {
                currentLength=n;
                for(int i=0;i<n;i++) {
                    printf("NhapPhantuthu%d: ",i+1);
                    scanf("%d",&arr[i]);
                }
            }
        } else if(choice==2) {
            printf("CacPhantudangQuanly: ");
            for(int i=0;i<currentLength;i++) {
                printf("%d ",arr[i]);
            }
            printf("\n");
        } else if(choice==3) {
            int sum=0;
            printf("CacPhantuchan: ");
            for(int i=0;i<currentLength;i++) {
                if(arr[i]%2==0) {
                    printf("%d ",arr[i]);
                    sum+=arr[i];
                }
            }
            printf("\nTongcacPhantuchan: %d\n",sum);
        } else if(choice==4) {
            if(currentLength==0) {
                printf("Mangtrong!\n");
            } else {
                int max=arr[0],min=arr[0];
                for(int i=1;i<currentLength;i++) {
                    if(arr[i]>max) max=arr[i];
                    if(arr[i]<min) min=arr[i];
                }
                printf("Giatrilonnhat: %d\n",max);
                printf("Giatrinhonhat: %d\n",min);
            }
        } else if(choice==5) {
            int sum=0;
            printf("Cacsonguyento: ");
            for(int i=0;i<currentLength;i++) {
                if(isPrime(arr[i])) {
                    printf("%d ",arr[i]);
                    sum+=arr[i];
                }
            }
            printf("\nTongcacsonguyento: %d\n",sum);
        } else if(choice==6) {
            printf("Nhapgiatricanthongke: ");
            int value,count=0;
            scanf("%d",&value);
            for(int i=0;i<currentLength;i++) {
                if(arr[i]==value) count++;
            }
            printf("Giatri%dxuathien%dlan.\n",value,count);
        } else if(choice==7) {
            if(currentLength>=maxSize) {
                printf("Khongthethem,mangdaday!\n");
            } else {
                printf("Nhapgiatricanthem: ");
                int value,index;
                scanf("%d",&value);
                printf("Nhapvitrichidinh(0-%d): ",currentLength);
                scanf("%d",&index);
                if(index<0||index>currentLength) {
                    printf("khonghople!\n");
                } else {
                    for(int i=currentLength;i>index;i--) {
                        arr[i]=arr[i-1];
                    }
                    arr[index]=value;
                    currentLength++;
                    printf("Themthanhcong\n");
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
