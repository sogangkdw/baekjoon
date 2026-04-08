#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main(void) {
    int score[8] = {10, 8, 6, 5, 4, 3, 2, 1};
    char record[8][2][100];
    char time[100];
    char team;

    for (int x = 0; x < 8; x++) {
        scanf("%s %c", time, &team);
        strcpy(record[x][0], time);
        record[x][1][0] = team;
    }

    for (int x = 1; x < 8; x++) {
        for (int y = 0; y < 8 - x; y++) {
            if (strcmp(record[y][0], record[y + 1][0]) > 0) {
                swap(record[y][0], record[y + 1][0]);
                swap(record[y][1][0], record[y + 1][1][0]);
            }
        }
    }

    int red = 0, blue = 0;
    for (int j = 0; j < 8; j++) {
        if (record[j][1][0] == 'R') {
            red += score[j];
        } else {
            blue += score[j];
        }
    }

    red > blue ? cout << "Red" : cout << "Blue";
}
