#include <stdio.h>

void inputScores(int org[][5], int numStudents);
void calculateAverages(int org[][5], int numStudents, double averages[], double courseAverages[]);
void findHighestScore(int org[][5], int numStudents, int* maxScore, int* studentIndex, int* courseIndex);
double calculateVariance(double averages[], int numStudents);

int main() {
    int org[10][5];
    double averages[10], courseAverages[5], variance;
    int maxScore, studentIndex, courseIndex;

    inputScores(org, 10);
    calculateAverages(org, 10, averages, courseAverages);
    findHighestScore(org, 10, &maxScore, &studentIndex, &courseIndex);
    variance = calculateVariance(averages, 10);

    printf("\nNO.     cour1   cour2   cour3   cour4   cour5   aver\n");
    printf("\n");
    for (int i = 0; i < 9; i++) {
        printf("NO%2d%8.2f%8.2f%8.2f%8.2f%8.2f%8.2lf\n", i + 1, (float)org[i][0], (float)org[i][1], (float)org[i][2], (float)org[i][3], (float)org[i][4], averages[i]);
        printf("\n");
    }
    printf("NO%3d%8.2f%8.2f%8.2f%8.2f%8.2f%8.2lf\n", 10, (float)org[9][0], (float)org[9][1], (float)org[9][2], (float)org[9][3], (float)org[9][4], averages[9]);

    printf("\naverage:");
    for (int i = 0; i < 5; i++) {
        printf("%8.2lf", courseAverages[i]);
    }

    printf("\nhighest:%8.2lf NO.%2d course%2d\n", maxScore * 1.0, studentIndex + 1, courseIndex + 1);
    printf("variance%8.2lf\n", variance);

    return 0;
}

void inputScores(int org[][5], int numStudents) {
    for (int i = 0; i < numStudents; i++) {
        printf("input score of student %d:", i + 1);
        scanf("%d %d %d %d %d", &org[i][0], &org[i][1], &org[i][2], &org[i][3], &org[i][4]);
    }
}

void calculateAverages(int org[][5], int numStudents, double averages[], double courseAverages[]) {
    for (int i = 0; i < numStudents; i++) {
        int sum = 0;
        for (int j = 0; j < 5; j++) {
            sum += org[i][j];
        }
        averages[i] = sum / 5.0;
    }

    for (int i = 0; i < 5; i++) {
        int sum = 0;
        for (int j = 0; j < numStudents; j++) {
            sum += org[j][i];
        }
        courseAverages[i] = sum / (double)numStudents;
    }
}

void findHighestScore(int org[][5], int numStudents, int* maxScore, int* studentIndex, int* courseIndex) {
    *maxScore = org[0][0];
    *studentIndex = 0;
    *courseIndex = 0;

    for (int i = 0; i < numStudents; i++) {
        for (int j = 0; j < 5; j++) {
            if (org[i][j] > *maxScore) {
                *maxScore = org[i][j];
                *studentIndex = i;
                *courseIndex = j;
            }
        }
    }
}

double calculateVariance(double averages[], int numStudents) {
    double sum1 = 0.0, sum2 = 0.0;
    for (int i = 0; i < numStudents; i++) {
        sum1 += averages[i] * averages[i];
        sum2 += averages[i];
    }
    return sum1 / numStudents - (sum2 / numStudents) * (sum2 / numStudents);
}

