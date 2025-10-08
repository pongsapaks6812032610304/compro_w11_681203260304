#include <stdio.h>

// ฟังก์ชันสำหรับคำนวณค่าเฉลี่ย
float average(int a, int b, int c) {
    float avg;
    avg = (a + b + c) / 3.0;  // 3.0 เพื่อให้ได้ค่าเป็น float
    return avg;
}

int main() {
    int math, physics, chemistry;
    float avg;

    // รับค่าคะแนนทั้ง 3 วิชา
    printf("Enter Math score: ");
    scanf("%d", &math);

    printf("Enter Physics score: ");
    scanf("%d", &physics);

    printf("Enter Chemistry score: ");
    scanf("%d", &chemistry);

    // เรียกใช้ฟังก์ชันคำนวณค่าเฉลี่ย
    avg = average(math, physics, chemistry);

    // แสดงผล
    printf("\nMath = %d\n", math);
    printf("Physics = %d\n", physics);
    printf("Chemistry = %d\n", chemistry);
    printf("Average = %.2f\n", avg);

    return 0;
}
