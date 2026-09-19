#include <stdio.h>
#include <string.h>

int main() {
    char name[3][50];
    float score[3][3];
    float sum[3] = {0};

    char subject[3][10] = {"Math", "Phy", "Chem"};

    // รับข้อมูล
    for (int i = 0; i < 3; i++) {

        printf("Enter student %d name: ", i + 1);
        scanf("%49s", name[i]);

        for (int j = 0; j < 3; j++) {
            printf("Enter %s score: ", subject[j]);
            scanf("%f", &score[i][j]);

            sum[j] += score[i][j];
        }
    }

    printf("\n");
    printf("============================================================\n");
    printf("%-18s %-10s %-10s %-10s\n",
           "Student (length)", "Math", "Phy", "Chem");
    printf("------------------------------------------------------------\n");

    // แสดงผลนักศึกษา
    for (int i = 0; i < 3; i++) {
        printf("%s (%d) \t\t %.2f \t %.2f \t %.2f\n",
               name[i],
               (int)strlen(name[i]),
               score[i][0],
               score[i][1],
               score[i][2]);
    }

    printf("------------------------------------------------------------\n");

    // แสดงค่าเฉลี่ย
    printf("%-18s %.2f \t %.2f \t %.2f\n",
           "Subject average",
           sum[0] / 3,
           sum[1] / 3,
           sum[2] / 3);

    printf("============================================================\n");

    return 0;
}