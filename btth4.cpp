#include<stdio.h>
int main(){
    int arr[100];
    int currentLength=0;
    int choice;
    int maxSize=100;
    do{
        printf("\nMENU\n");
        printf("1.Nhap vao mang\n");
        printf("2.Hien thi mang\n");
        printf("3.Them phan tu\n");
        printf("4.Sua phan tu\n");
        printf("5.Xoa phan tu\n");
        printf("6.Thoat\n");
        printf("Lua chon la cua ban: ");
        scanf("%d",&choice);
        if(choice==1){
            int n;
            printf("nhap so phan tu: ");
            scanf("%d",&n);
            if(n<0||n>maxSize){
                printf("khong duoc!\n");
            }else{
                currentLength=n;
                for(int i=0;i<n;i++){
                    printf("nhap phan tu thu %d: ",i+1);
                    scanf("%d",&arr[i]);
                }
            }
        }else if(choice==2){
            if(currentLength==0){
                printf("khong co!\n");
            }else{
                printf("cac phan tu dang quan li: ");
                for(int i=0;i<currentLength;i++){
                    printf("%d ",arr[i]);
                }
                printf("\n");
            }
        }else if(choice==3){
            if(currentLength>=maxSize){
                printf("khong duoc!\n");
            }else{
                int value,index;
                printf("nhap gia tri phan thu muon them: ");
                scanf("%d",&value);
                printf("vi tri muon them(0-%d): ",currentLength);
                scanf("%d",&index);
                if(index<0||index>currentLength){
                    printf("khong hop le!\n");
                }else{
                    for(int i=currentLength;i>index;i--){
                        arr[i]=arr[i-1];
                    }
                    arr[index]=value;
                    currentLength++;
                    printf("them thanh cong!\n");
                }
            }
        }else if(choice==4){
            int index,newValue;
            printf("nhap vi tri phan tu muon sua (0-%d): ",currentLength-1);
            scanf("%d",&index);
            if(index<0||index>=currentLength){
                printf("khong duoc!\n");
            }else{
                printf("nhap gia tri moi: ");
                scanf("%d",&newValue);
                arr[index]=newValue;
                printf("sua xong!\n");
            }
        }else if(choice==5){
            int index;
            printf("nhap vao vi tri muon xoa(0-%d): ",currentLength-1);
            scanf("%d",&index);
            if(index<0||index>=currentLength){
                printf("khong hop le!\n");
            }else{
                for(int i=index;i<currentLength-1;i++){
                    arr[i]=arr[i+1];
                }
                currentLength--;
                printf("xoa oke!\n");
            }
        }else if(choice==6){
            printf("thoat.\n");
        }else{
            printf("lua chon khong hop le.\n");
        }
    }while(choice!=6);
    return 0;
}
