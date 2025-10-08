#include <stdio.h>

// ฟังก์ชันสำหรับรับและแสดงคะแนน
void inputAndShow() {
    int math, physics, chemistry;

    // รับค่าคะแนนจากผู้ใช้
    printf("Enter Math: ");
    scanf("%d", &math);

    printf("Enter Physics: ");
    scanf("%d", &physics);

    printf("Enter Chemistry: ");
    scanf("%d", &chemistry);

    // แสดงผลคะแนน
    printf("Scores: Math = %d, Physics = %d, Chemistry = %d\n", math, physics, chemistry);
}

int main() {
    // เรียกใช้งานฟังก์ชัน
    inputAndShow();
    return 0;
}
