#include<stdio.h>
int main(){
    int n,m;
    int arr[100][100];
    int choice;
    do{
        printf("\nMENU\n");
        printf("1. Nhap kich co va gia tri cac phan tu cua mang\n");
        printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
        printf("3. In gia tri cac phan tu la le va tinh tong\n");
        printf("4. In ra cac phan tu nam tren duong bien va tinh tich\n");
        printf("5. In ra cac phan tu nam tren duong cheo chinh\n");
        printf("6. In ra cac phan tu nam tren duong cheo phu\n");
        printf("7. In ra dong co tong gia tri cac phan tu la lon nhat\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        if(choice == 1){
            printf("Nhap so dong n: ");
            scanf("%d", &n);
            printf("Nhap so cot m: ");
            scanf("%d", &m);
            for(int i = 0; i < n; i++){
                for(int j = 0; j < m; j++){
                    printf("Nhap gia tri cho arr[%d][%d]: ", i + 1, j + 1);
                    scanf("%d", &arr[i][j]);
                }
            }
        }else if(choice == 2){
            printf("Ma tran hien tai:\n");
            for(int i = 0; i < n; i++){
                for(int j = 0; j < m; j++){
                    printf("%d ", arr[i][j]);
                }
                printf("\n");
            }
        }else if(choice == 3){
            int sum = 0;
            printf("Cac phan tu la le:\n");
            for(int i = 0; i < n; i++){
                for(int j = 0; j < m; j++){
                    if(arr[i][j] % 2 != 0){
                        printf("%d ", arr[i][j]);
                        sum += arr[i][j];
                    }
                }
            }
            printf("\nTong cua cac phan tu le: ");
            printf("%d\n", sum);
        }else if(choice == 4){
            int product = 1;
            printf("Cac phan tu nam tren duong bien:\n");
            for(int i = 0; i < n; i++){
                for(int j = 0; j < m; j++){
                    if(i == 0 || i == n - 1 || j == 0 || j == m - 1){
                        printf("%d ", arr[i][j]);
                        product *= arr[i][j];
                    }
                }
            }
            printf("\nTich cua cac phan tu tren duong bien: ");
            printf("%d\n", product);
        }else if(choice == 5){
            printf("Cac phan tu nam tren duong cheo chinh:\n");
            for(int i = 0; i < n && i < m; i++){
                printf("%d ", arr[i][i]);
            }
            printf("\n");
        }else if(choice == 6){
            printf("Cac phan tu nam tren duong cheo phu:\n");
            for(int i = 0; i < n && i < m; i++){
                printf("%d ", arr[i][m - i - 1]);
            }
            printf("\n");
        }else if(choice == 7){
            int maxSum = -1, maxRow = -1;
            for(int i = 0; i < n; i++){
                int rowSum = 0;
                for(int j = 0; j < m; j++){
                    rowSum += arr[i][j];
                }
                if(rowSum > maxSum){
                    maxSum = rowSum;
                    maxRow = i;
                }
            }
            printf("Dong co tong gia tri cac phan tu la lon nhat: ");
            printf("%d\n", maxRow + 1);
            printf("Tong cua dong %d: ", maxRow + 1);
            printf("%d\n", maxSum);
        }else if(choice == 8){
            printf("Thoat chuong trinh.\n");
        }else{
            printf("Lua chon khong hop le, vui long chon lai.\n");
        }
    }while(choice != 8);

    return 0;
}
