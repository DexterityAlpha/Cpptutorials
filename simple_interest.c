#include<stdio.h>

int main()
{
    // Simple Interest
    //  no spaces not first letter should be number
    // no special characters and number  at the starting
    float principle;
    float interest;
    int time;

    scanf("%f", &principle);
    scanf("%f", &interest);
    scanf("%d", &time);

    float simple_interest;
    simple_interest = (principle * interest * time) / 100;
    //Amount after some time t
    principle = principle + simple_interest;
    printf("The Amount after %d years is %f  ", time, principle);
    return 0;
}