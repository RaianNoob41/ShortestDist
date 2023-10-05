#include <stdio.h>
#include <math.h>

int main(void)
{
    int p1[3] = {0}, input1;
    int p2[3] = {0}, input2;
    int p3[3] = {0}, input3;

    double dist1, dist2, dist3, hyp;

    for (int i = 0; i < 3; i++)
    {
        printf("Enter the %d coordinate of p1: ", i);
        scanf("%d", &input1);
        p1[i] = input1;
    }

    for (int j = 0; j < 3; j++)
    {
        printf("Enter the %d coordinate of p2: ", j);
        scanf("%d", &input2);
        p2[j] = input2;
    }

    for (int k = 0; k < 3; k++)
    {
        printf("Enter the %d coordinate of p3: ", k);
        scanf("%d", &input3);
        p3[k] = input3;
    }

    printf("p1: [%d %d %d]\n", p1[0], p1[1], p1[2]);
    printf("p2: [%d %d %d]\n", p2[0], p2[1], p2[2]);
    printf("p3: [%d %d %d]\n", p3[0], p3[1], p3[2]);


    dist1 = sqrt(pow(p2[0] - p1[0], 2) + pow(p2[1] - p1[1], 2) + pow(p2[2] - p1[2], 2));
    dist2 = sqrt(pow(p3[0] - p1[0], 2) + pow(p3[1] - p1[1], 2) + pow(p3[2] - p1[2], 2));
    dist3 = sqrt(pow(p3[0] - p2[0], 2) + pow(p3[1] - p2[1], 2) + pow(p3[2] - p2[2], 2));

    printf("Distance between p1 and p2: %.2lf\n", dist1);
    printf("Distance between p1 and p3: %.2lf\n", dist2);
    printf("Distance between p2 and p3: %.2lf\n", dist3);

    // Calculate the hypotenuse
    hyp = sqrt(pow(dist1, 2) + pow(dist2, 2) + pow(dist3, 2));

    printf("The hypotenuse is %.2lf\n", hyp);

    return 0;
}
