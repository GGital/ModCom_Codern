#include <stdio.h>
#include <string.h>

struct Student {
    char id[6];
    int score;
};

int main() {
    int N;
    scanf("%d", &N);

    struct Student students[N];
    int total = 0;

    for (int i = 0; i < N; i++) {
        scanf("%s %d", students[i].id, &students[i].score);
        total += students[i].score;
    }

    double avg = (double)total / N;

    int count = 0;
    for (int i = 0; i < N; i++) {
        if (students[i].score >= avg) {
            count++;
        }
    }

    printf("%d\n", count);
    for (int i = 0; i < N; i++) {
        if (students[i].score >= avg) {
            printf("%s\n", students[i].id);
        }
    }
    return 0;
}
