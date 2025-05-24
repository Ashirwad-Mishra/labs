#include<stdio.h>
int salary_calculator(int b,char grade)
{
    int salary, allow ;
    float hra, da , pf;
    if (grade=='A') allow = 1700;
    else if (grade == 'B') allow = 1500;
    else  allow = 1100;

    hra = .2 * b;
    da = .5 * b;
    pf = .11 * b;

    salary = b + hra + da + allow - pf;
    return salary;
}
void main()
{
    int basic ; char grade;
    printf ("Enter your basic salary and grade: ");
    scanf ("%d %c",&basic,&grade);

    printf ("your total salary: %d",salary_calculator(basic,grade));
}
