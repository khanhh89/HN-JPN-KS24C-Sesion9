#include<stdio.h>
int main(){
    int arr[100];
    int currentLength=0;
    int choice;
    int maxSize=100;
    do{
        printf("\nMENU\n");
        printf("1.Nhapvaomang\n");
        printf("2.Hienthimang\n");
        printf("3.Themphantu\n");
        printf("4.Suaphantu\n");
        printf("5.Xoaphantu\n");
        printf("6.Thoat\n");
        printf("Luachoncuaban: ");
        scanf("%d",&choice);
        if(choice==1){
            int n;
            printf("NhapsoPhantu: ");
            scanf("%d",&n);
            if(n<0||n>maxSize){
                printf("Sophantukhonghople!\n");
            }else{
                currentLength=n;
                for(int i=0;i<n;i++){
                    printf("NhapPhantuthu%d: ",i+1);
                    scanf("%d",&arr[i]);
                }
            }
        }else if(choice==2){
            if(currentLength==0){
                printf("Mangrong!\n");
            }else{
                printf("Cacphantudangquanly: ");
                for(int i=0;i<currentLength;i++){
                    printf("%d ",arr[i]);
                }
                printf("\n");
            }
        }else if(choice==3){
            if(currentLength>=maxSize){
                printf("Mangdaday,khongthethethemphantu!\n");
            }else{
                int value,index;
                printf("Nhapgiatriphantumuanthem: ");
                scanf("%d",&value);
                printf("Nhapvitrimuonthem(0-%d): ",currentLength);
                scanf("%d",&index);
                if(index<0||index>currentLength){
                    printf("Vitrikhonghople!\n");
                }else{
                    for(int i=currentLength;i>index;i--){
                        arr[i]=arr[i-1];
                    }
                    arr[index]=value;
                    currentLength++;
                    printf("Themphantuthanhcong!\n");
                }
            }
        }else if(choice==4){
            int index,newValue;
            printf("Nhapvitriphantumuosua(0-%d): ",currentLength-1);
            scanf("%d",&index);
            if(index<0||index>=currentLength){
                printf("Vitrikhonghople!\n");
            }else{
                printf("Nhapgiatrimoi: ");
                scanf("%d",&newValue);
                arr[index]=newValue;
                printf("Suaphantuthanhcong!\n");
            }
        }else if(choice==5){
            int index;
            printf("Nhapvitriphantumuonxoa(0-%d): ",currentLength-1);
            scanf("%d",&index);
            if(index<0||index>=currentLength){
                printf("Vitrikhonghople!\n");
            }else{
                for(int i=index;i<currentLength-1;i++){
                    arr[i]=arr[i+1];
                }
                currentLength--;
                printf("Xoaphantuthanhcong!\n");
            }
        }else if(choice==6){
            printf("Thoatchuongtrinh.\n");
        }else{
            printf("Luachonkhonghople,vuilongchonlai.\n");
        }
    }while(choice!=6);
    return 0;
}
