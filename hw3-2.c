#include <stdio.h>

int main() {
    int s1, d1, s2, d2, s3, d3;

    // 讀取輸入
    scanf("%d %d %d %d %d %d", &s1, &d1, &s2, &d2, &s3, &d3);

    // 創建一時間線數組，每個元素代表一個小時的需求
    int timeline[25] = {0};

    // 根據訂單更新時間線
    for (int i = s1; i < d1; i++) {
        timeline[i]++;
    }
    for (int i = s2; i < d2; i++) {
        timeline[i]++;
    }
    for (int i = s3; i < d3; i++) {
        timeline[i]++;
    }

    // 計算最大需求
    int max_demand = 0;
    for (int i = 0; i < 25; i++) {
        if (timeline[i] > max_demand) {
            max_demand = timeline[i];
        }
    }

    printf("%d", max_demand);

    return 0;
}

