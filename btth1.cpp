#include <stdio.h>

int main() {
    int maxSize = 100;
    int arr[maxSize];
    int currentLength = 0;
    int num_elements;

    printf("Nhap so phan tu duoi 100 phan tu: ");
    scanf("%d", &num_elements);

    if (num_elements < 0 || num_elements > maxSize) {
        printf("So phan tu nhap khong hop le.\n");
        return 1;
    }

    for (int i = 0; i < num_elements; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    currentLength = num_elements;

    int addValue, addIndex;
    printf("Nhap gia tri ma ban muon them: ");
    scanf("%d", &addValue);
    printf("Nhap vi tri muon them (<100): ");
    scanf("%d", &addIndex);

    if (addIndex < 0 || addIndex >= maxSize) {
        printf("Vi tri khong hop le.\n");
    } else {
        if (currentLength >= maxSize) {
            printf("Khong the them phan tu, mang da day.\n");
        } else if (addIndex >= currentLength) {
            arr[addIndex] = addValue;
            currentLength = addIndex + 1;
        } else {
            for (int i = currentLength; i > addIndex; i--) {
                arr[i] = arr[i - 1];
            }
            arr[addIndex] = addValue;
            currentLength++;
        }

        printf("Mang sau khi duoc them:\n");
        for (int i = 0; i < currentLength; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
