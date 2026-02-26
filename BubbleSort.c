#include <stdio.h>

int main() {
    int arr[5] = {5, 3, 4, 1, 2};
    int n = 5;
    int temp;
    int swapped;

    for(int i = 0; i < n-1; i++) {
        swapped = 0;  // 바뀐 게 있는지 체크

        for(int j = 0; j < n-1-i; j++) {                // 제일큰 숫자는 맨끝으로 몰았으니 i = 1 부터는 몬 숫자 만큼(i)을 빼고 검증해도 됨
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = 1;
            }
        }

        if(swapped == 0) break; // 더 이상 바뀌는 게 없으면 종료
    }

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
