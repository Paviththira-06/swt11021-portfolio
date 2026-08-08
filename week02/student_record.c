/*   int    %d   */
/*   double %lf  */
/*   char     %c */
 #include <stdio.h>

 int main()
 {
    char initial;
    int reg_no;
    double gpa;
    int year;

    printf("Enter initial    : ");
    scanf(" %c", &initial);

    printf("Enter reg. no.   : ");
    scanf("%d", &reg_no);

    printf("Enter GPA        : ");
    scanf("%lf", &gpa);

    printf("Enter year       : ");
    scanf("%d", &year);

    printf("----------------------------\n");

    printf("Initial   : %c\n", initial);
    printf("Reg. No.  : %d\n", reg_no);
    printf("GPA       : %.2f\n", gpa);
    printf("Year      : %d\n", year);

    return 0;
 }