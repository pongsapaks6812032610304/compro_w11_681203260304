#include <stdio.h>

#define STUDENTS 3
#define SUBJECTS 3

// ฟังก์ชันรับค่าคะแนนจากผู้ใช้
void inputScores(float arr[STUDENTS][SUBJECTS]) {
    for (int i = 0; i < STUDENTS; i++) {
        printf("Enter scores for Student %d:\n", i + 1);
        printf("  Math: ");
        scanf("%f", &arr[i][0]);
        printf("  Physics: ");
        scanf("%f", &arr[i][1]);
        printf("  Chemistry: ");
        scanf("%f", &arr[i][2]);
    }
}

// ฟังก์ชันแสดงตารางคะแนน
void printTable(float arr[STUDENTS][SUBJECTS]) {
    printf("\nScore Table:\n");
    printf("Student\tMath\tPhysics\tChemistry\n");
    for (int i = 0; i < STUDENTS; i++) {
        printf("%d\t", i + 1);
        for (int j = 0; j < SUBJECTS; j++) {
            printf("%.2f\t", arr[i][j]);
        }
        printf("\n");
    }
}

// ฟังก์ชันคำนวณและแสดงค่าเฉลี่ยของแต่ละวิชา
void printAverage(float arr[STUDENTS][SUBJECTS]) {
    float sumMath = 0, sumPhysics = 0, sumChemistry = 0;

    for (int i = 0; i < STUDENTS; i++) {
        sumMath += arr[i][0];
        sumPhysics += arr[i][1];
        sumChemistry += arr[i][2];
    }

    printf("\nAverage per subject:\n");
    printf("Math: %.2f\n", sumMath / STUDENTS);
    printf("Physics: %.2f\n", sumPhysics / STUDENTS);
    printf("Chemistry: %.2f\n", sumChemistry / STUDENTS);
}

int main() {
    float scores[STUDENTS][SUBJECTS];

    inputScores(scores);
    printTable(scores);
    printAverage(scores);

    return 0;
}
