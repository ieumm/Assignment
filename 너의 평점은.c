#include <stdio.h>

int main() {

    char subject[51];
    char grade[3];
    double score;

    double totalScore = 0.0;
    double temp;
    double sum = 0.0;

    for (int i = 0; i < 20; i++) 
    {
        scanf_s("%s %lf %s", subject, &score, grade);
        
        if (grade[0] == 'P') 
            continue;
        totalScore += score;
        if (grade[0] == 'F') 
            continue;

        if (grade[0] == 'A') 
            temp = 4;
        else if (grade[0] == 'B') 
            temp = 3;
        else if (grade[0] == 'C') 
            temp = 2;
        else 
            temp = 1;

        if (grade[1] == '+') 
            temp += 0.5;

        sum += score * temp;
    }

    printf("%lf", sum / totalScore);

    return 0;
}