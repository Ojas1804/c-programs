#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>


float ans;
#define PI 3.141592653589793238
int l=0;


void functions()
{  /* all the functions available int he calculator */

    printf("\n__________________________________________________________________________________________________________________________________");
    printf("\n\n\t01. ' add ' - Addition");
    printf("\t\t\t                        02. ' sub ' - Subtraction");
    printf("\n\t03. ' div ' - Division  ");
    printf("\t\t\t                04. ' mult ' - Multiplication");
    printf("\n\t05. ' pow ' - To find Power (x^y)");
    printf("\t\t\t        06. ' mod ' - Modulous of a number");
    printf("\n\t07. ' inv ' - Multiplicative inverse");
    printf("\t\t\t        08. ' log ' - log to the base 10");
    printf("\n\t09. ' ln ' - log to the base e");
    printf("\t\t\t                10. ' sqr ' - Square of a number");
    printf("\n\t11. ' sqrt ' - Square root of a number");
    printf("\t\t\t        12. ' sin ' - Triginometric Function (sin(x))");
    printf("\n\t13. ' cos ' - Triginometric Function cos(x)");
    printf("\t\t\t14. ' tan ' - Triginometric Function tan(x)");
    printf("\n\t15. ' cot ' - Triginometric Function cot(x)");
    printf("\t\t\t16. ' cosec ' - Triginometric Function cosec(x)");
    printf("\n\t17. ' sec ' - Triginometric Function sec(x)");
    printf("\t\t\t18. ' ceil ' - Ceil function");
    printf("\n\t19. ' floor ' - Floor function");
    printf("\t\t\t                20. ' e^x ' - Returns e^x for some valu eof x");
    printf("\n\t21. ' cosh ' - Hyperbolic function cosh( x )");
    printf("\t\t        22. ' sinh ' - Hyperbolic function sinh( x )");
    printf("\n\t23. ' tanh ' - Hyperbolic function tanh( x )");
    printf("\t\t        24. ' sech ' - Hyperbolic function sech( x )");
    printf("\n\t25. ' coth ' - Hyperbolic function coth( x )");
    printf("\t\t        26. ' cosech ' - Hyperbolic function cosech( x )");
    printf("\n\t27. ' +/- ' - Changes +ve number to -ve and vice-versa");
    printf("\n\t%s", "ENTER ' Funtions ' TO REFER THIS TABLE AGAIN");
    printf("\n\tENTER ' Exit ' TO STOP THE PROGRAM");
    printf("\n__________________________________________________________________________________________________________________________________");
}



int add(char rep[10])
{ /* function for addition */

    float x;
    if((strcmp(rep,"YES")==0)&&l!=0)
    { /*condition if the user wants to continue with the previous answer*/

        x=ans;
        printf("x = %f\n",x);
    }

    if((strcmp(rep,"NO")==0)||l==0)
    { /* condition for starting new calculations */

      printf("\n__________________________________________________________________________________________________________________________________");
      printf("\n\t\t\t\t\tNEW CALCULATIONS\n");
      printf("Enter x : ");
      scanf("%f",&x);
    }
    float y;
    printf("Enter y : ");
    scanf("%f",&y);
    ans=x+y;
    printf("\n\t\t\tx + y  =  %.4f",ans);
}



int power(char rep[10])
{ /* function for finding x^y */

    float x;
    if((strcmp(rep,"YES")==0)&&l!=0)
    { /* condition for continuing with previous answer */

        x=ans;
        printf("x = %f\n",x);
    }
    if((strcmp(rep,"NO")==0)||l==0)
    { /* condition for staring new calculations */

        printf("\n__________________________________________________________________________________________________________________________________");
        printf("\n\t\t\t\t\tNEW CALCULATIONS\n");
        printf("Enter x : ");
        scanf("%f",&x);
    }

    float y;
    printf("Enter y : ");
    scanf("%f",&y);
    ans=pow(x,y);
    printf("\n\t\t\tx ^ y  =  %.4f",ans);
}



int sub(char rep[10])
{ /* function for subtraction */

    float x;
    if((strcmp(rep,"YES")==0)&&l!=0)
    { /* condition for continuing with previous answer */

        x=ans;
        printf("x = %f\n",x);
    }

    if((strcmp(rep,"NO")==0)||l==0)
    { /*condititon for starting new ca;culations */
        printf("\n__________________________________________________________________________________________________________________________________");
        printf("\n\t\t\t\t\tNEW CALCULATIONS\n");
        printf("Enter x : ");
        scanf("%f",&x);
    }

    float y;
    printf("Enter y : ");
    scanf("%f",&y);
    ans=x-y;
    printf("\n\t\t\tx - y  =  %.4f",ans);
}



int mult(char rep[10])
{ /* function for multiplication */

    float x;
    if((strcmp(rep,"YES")==0)&&l!=0)
    { /* condition for continuing with previous answer */

        x=ans;
        printf("x = %f\n",x);
    }

    if((strcmp(rep,"NO")==0)||l==0)
    { /*condititon for starting new calculations */

        printf("\n__________________________________________________________________________________________________________________________________");
        printf("\n\t\t\t\t\tNEW CALCULATIONS\n");
        printf("Enter x : ");
        scanf("%f",&x);
    }

    float y;
    printf("Enter y : ");
    scanf("%f",&y);
    ans=x*y;
    printf("\n\t\t\tx * y  =  %.4f",ans);
}


int division(char rep[10])
{ /* function for division */
    float x;
    if((strcmp(rep,"YES")==0)&&l!=0)
    { /* condition for continuing with previous answer */

        x=ans;
        printf("x = %f\n",x);
    }

    if((strcmp(rep,"NO")==0)||l==0)
    { /*condititon for starting new calculations */

        printf("\n__________________________________________________________________________________________________________________________________");
        printf("\n\t\t\t\t\tNEW CALCULATIONS\n");
        printf("Enter x : ");
        scanf("%f",&x);
    }

    float y;
    printf("Enter y : ");
    scanf("%f",&y);
    ans=x/y;
    printf("\n\t\t\tx / y  =  %.4f",ans);
}



int inv(char rep[10])
{ /* function for finding inverse of a number */
    float x;
    if((strcmp(rep,"YES")==0)&&l!=0)
    { /* condition for continuing with previous answer */

        x=ans;
        printf("x = %f",x);
    }

    if((strcmp(rep,"NO")==0)||l==0)
    { /*condititon for starting new calculations */

        printf("\n__________________________________________________________________________________________________________________________________");
        printf("\n\t\t\t\t\tNEW CALCULATIONS\n");
        printf("Enter x : ");
        scanf("%f",&x);
    }

    ans=1/x;
    printf("\n\t\t\t 1 / x = %.4f", ans);
}



int mod(char rep[10])
{ /* function for finding modulous */
    float x;
    if((strcmp(rep,"YES")==0)&&l!=0)
    { /* condition for continuing with previous answer */

        x=ans;
        printf("x = %f",x);
    }

    if((strcmp(rep,"NO")==0)||l==0)
    { /* condititon for starting new calculations */

        printf("\n__________________________________________________________________________________________________________________________________");
        printf("\n\t\t\t\t\tNEW CALCULATIONS\n");
        printf("Enter x : ");
        scanf("%f",&x);
    }

    ans=fabs(x);
    printf("\n\t\t\t |x| = %.4f", ans);
}



int logarithm(char rep[10])
{ /* function for finding log to the base 10 */

    float x;
    if((strcmp(rep,"YES")==0)&&l!=0)
    { /* condition for continuing with previous answer */

        x=ans;
        printf("x = %f",x);
    }

    if((strcmp(rep,"NO")==0)||l==0)
    { /* condititon for starting new calculations */

        printf("\n__________________________________________________________________________________________________________________________________");
        printf("\n\t\t\t\t\tNEW CALCULATIONS\n");
        printf("Enter x : ");
        scanf("%f",&x);
    }

    ans=log10(x);
    printf("\n\t\t\t log( x ) = %.4f", ans);
}



int ln(char rep[10])
{ /* function for finding log to the base e */

    float x;
    if((strcmp(rep,"YES")==0)&&l!=0)
    { /* condition for continuing with previous answer */

        x=ans;
        printf("x = %f",x);
    }

    if((strcmp(rep,"NO")==0)||l==0)
    { /* condititon for starting new calculations */

        printf("\n__________________________________________________________________________________________________________________________________");
        printf("\n\t\t\t\t\tNEW CALCULATIONS\n");
        printf("Enter x : ");
        scanf("%f",&x);
    }

    ans=log(x);
    printf("\n\t\t\t ln( x ) = %.4f", ans);
}



int sqr(char rep[10])
{ /* function for finding square of a number */

    float x;
    if((strcmp(rep,"YES")==0)&&l!=0)
    { /* condition for continuing with previous answer */

        x=ans;
        printf("x = %f",x);
    }

    if((strcmp(rep,"NO")==0)||l==0)
    { /* condititon for starting new calculations */

        printf("\n__________________________________________________________________________________________________________________________________");
        printf("\n\t\t\t\t\tNEW CALCULATIONS\n");
        printf("Enter x : ");
        scanf("%f",&x);
    }

    ans=x*x;
    printf("\n\t\t\t x ^ 2 = %.4f", ans);
}



int root(char rep[10])
{ /* function for finding root of a number */

    float x;
    if((strcmp(rep,"YES")==0)&&l!=0)
    { /* condition for continuing with previous answer */

        x=ans;
        printf("x = %f",x);
    }

    if((strcmp(rep,"NO")==0)||l==0)
    { /* condititon for starting new calculations */

        printf("\n__________________________________________________________________________________________________________________________________");
        printf("\n\t\t\t\t\tNEW CALCULATIONS\n");
        printf("Enter x : ");
        scanf("%f",&x);
    }

    ans=sqrt(x);
    printf("\n\t\t\t _/x = %.4f", ans);
}



int sine(char rep[10])
{ /* function for finding sin(x) */

    float x;
    if((strcmp(rep,"YES")==0)&&l!=0)
    { /* condition for continuing with previous answer */

        x=ans;
        printf("x = %f",x);
    }

    if((strcmp(rep,"NO")==0)||l==0)
    { /* condititon for starting new calculations */

        printf("\n__________________________________________________________________________________________________________________________________");
        printf("\n\t\t\t\t\tNEW CALCULATIONS\n");
        printf("Enter x : ");
        scanf("%f",&x);
    }

    x=x*PI/180;
    ans=sin(x);
    printf("\n\t\t\t sin( x ) = %.4f", ans);
}



int cosine(char rep[10])
{  /* function for finding cos(x) */

    float x;
    if((strcmp(rep,"YES")==0)&&l!=0)
    { /* condition for continuing with previous answer */
        x=ans;
        printf("x = %f",x);
    }

    if((strcmp(rep,"NO")==0)||l==0)
    { /* condititon for starting new calculations */

        printf("\n__________________________________________________________________________________________________________________________________");
        printf("\n\t\t\t\t\tNEW CALCULATIONS\n");
        printf("Enter x : ");
        scanf("%f",&x);
    }

    x=x*PI/180;
    ans=cos(x);
    printf("\n\t\t\t cos( x ) = %.4f", ans);
}



int tangent(char rep[10])
{  /* function for finding tan(x) */

    float x;
    if((strcmp(rep,"YES")==0)&&l!=0)
    { /* condition for continuing with previous answer */

        x=ans;
        printf("x = %f",x);
    }

    if((strcmp(rep,"NO")==0)||l==0)
    { /* condititon for starting new calculations */

        printf("\n__________________________________________________________________________________________________________________________________");
        printf("\n\t\t\t\t\tNEW CALCULATIONS\n");
        printf("Enter x : ");
        scanf("%f",&x);
    }

    x=x*PI/180;
    ans=tan(x);
    printf("\n\t\t\t tan( x ) = %.4f", ans);
}



int cot(char rep[10])
{  /* function for finding cot(x) */

    float x;
    if((strcmp(rep,"YES")==0)&&l!=0)
    { /* condition for continuing with previous answer */

        x=ans;
        printf("x = %f",x);
    }

    if((strcmp(rep,"NO")==0)||l==0)
    { /* condititon for starting new calculations */

        printf("\n__________________________________________________________________________________________________________________________________");
        printf("\n\t\t\t\t\tNEW CALCULATIONS\n");
        printf("Enter x : ");
        scanf("%f",&x);
    }

    x=x*PI/180;
    x=tan(x);
    ans=1/x;
    printf("\n\t\t\t cot( x ) = %.4f", ans);
}



int sec(char rep[10])
{  /* function for finding sec(x) */

    float x;
    if((strcmp(rep,"YES")==0)&&l!=0)
    { /* condition for continuing with previous answer */

        x=ans;
        printf("x = %f",x);
    }

    if((strcmp(rep,"NO")==0)||l==0)
    { /* condititon for starting new calculations */

        printf("\n__________________________________________________________________________________________________________________________________");
        printf("\n\t\t\t\t\tNEW CALCULATIONS\n");
        printf("Enter x : ");
        scanf("%f",&x);
    }

    x=x*PI/180;
    x=cos(x);
    ans=1/x;
    printf("\n\t\t\t sec( x )= %.4f", ans);
}



int cosec(char rep[10])
{  /* function for finding cosec (x) */

    float x;
    if((strcmp(rep,"YES")==0)&&l!=0)
    { /* condition for continuing with previous answer */

        x=ans;
        printf("x = %f",x);
    }

    if((strcmp(rep,"NO")==0)||l==0)
    { /* condititon for starting new calculations */

        printf("\n__________________________________________________________________________________________________________________________________");
        printf("\n\t\t\t\t\tNEW CALCULATIONS\n");
        printf("Enter x : ");
        scanf("%f",&x);
    }

    x=x*PI/180;
    x=sin(x);
    ans=1/x;
    printf("\n\t\t\t cosec( x ) = %.4f", ans);
}



int ceilof(char rep[10])
{  /* function for finding ceil value */

    float x;
    if((strcmp(rep,"YES")==0)&&l!=0)
    { /* condition for continuing with previous answer */

        x=ans;
        printf("x = %f",x);
    }

    if((strcmp(rep,"NO")==0)||l==0)
    { /* condititon for starting new calculations */

        printf("\n__________________________________________________________________________________________________________________________________");
        printf("\n\t\t\t\t\tNEW CALCULATIONS\n");
        printf("Enter x : ");
        scanf("%f",&x);
    }

    ans=ceil(x);
    printf("\n\t\t\t ceil( x ) = %.4f", ans);
}



void floorof(char rep[10])
{  /* function for finding floor value */

    float x;
    if((strcmp(rep,"YES")==0)&&l!=0)
    { /* condition for continuing with previous answer */

        x=ans;
        printf("x = %f",x);
    }

    if((strcmp(rep,"NO")==0)||l==0)
    { /* condititon for starting new calculations */

        printf("\n__________________________________________________________________________________________________________________________________");
        printf("\n\t\t\t\t\tNEW CALCULATIONS\n");
        printf("Enter x : ");
        scanf("%f",&x);
    }

    ans=floor(x);
    printf("\n\t\t\t floor( x ) = %.4f", ans);
}



int e_x(char rep[10])
{  /* function for finding e^x */

    float x;
    if((strcmp(rep,"YES")==0)&&l!=0)
    { /* condition for continuing with previous answer */

        x=ans;
        printf("x = %f",x);
    }

    if((strcmp(rep,"NO")==0)||l==0)
    { /* condititon for starting new calculations */

        printf("\n__________________________________________________________________________________________________________________________________");
        printf("\n\t\t\t\t\tNEW CALCULATIONS\n");
        printf("Enter x : ");
        scanf("%f",&x);
    }

    ans=exp(x);
    printf("\n\t\t\t e^x = %.4f", ans);
}



int coshof(char rep[10])
{  /* function for finding cosh(x) */

    float x;
    if((strcmp(rep,"YES")==0)&&l!=0)
    { /* condition for continuing with previous answer */

        x=ans;
        printf("x = %f",x);
    }

    if((strcmp(rep,"NO")==0)||l==0)
    { /* condititon for starting new calculations */

        printf("\n__________________________________________________________________________________________________________________________________");
        printf("\n\t\t\t\t\tNEW CALCULATIONS\n");
        printf("Enter x : ");
        scanf("%f",&x);
    }

    ans=cosh(x);
    printf("\n\t\t\t cosh( x ) = %.4f", ans);
}



int sinhof(char rep[10])
{  /* function for finding sinh (x) */

    float x;
    if((strcmp(rep,"YES")==0)&&l!=0)
    { /* condition for continuing with previous answer */

        x=ans;
        printf("x = %f",x);
    }

    if((strcmp(rep,"NO")==0)||l==0)
    { /* condititon for starting new calculations */

        printf("\n__________________________________________________________________________________________________________________________________");
        printf("\n\t\t\t\t\tNEW CALCULATIONS\n");
        printf("Enter x : ");
        scanf("%f",&x);
    }

    ans=sinh(x);
    printf("\n\t\t\t sinh( x ) = %.4f", ans);
}



int tanhof(char rep[10])
{  /* function for finding tanh(x) */

    float x;
    if((strcmp(rep,"YES")==0)&&l!=0)
    { /* condition for continuing with previous answer */

        x=ans;
        printf("x = %f",x);
    }

    if((strcmp(rep,"NO")==0)||l==0)
    { /* condititon for starting new calculations */

        printf("\n__________________________________________________________________________________________________________________________________");
        printf("\n\t\t\t\t\tNEW CALCULATIONS\n");
        printf("Enter x : ");
        scanf("%f",&x);
    }

    ans=tanh(x);
    printf("\n\t\t\t tanh( x ) = %.4f", ans);
}



int sechof(char rep[10])
{  /* function for finding sech(x) */

    float x;
    if((strcmp(rep,"YES")==0)&&l!=0)
    { /* condition for continuing with previous answer */

        x=ans;
        printf("x = %f",x);
    }

    if((strcmp(rep,"NO")==0)||l==0)
    { /* condititon for starting new calculations */

        printf("\n__________________________________________________________________________________________________________________________________");
        printf("\n\t\t\t\t\tNEW CALCULATIONS\n");
        printf("Enter x : ");
        scanf("%f",&x);
    }

    ans=cosh(x);
    ans=1/ans;
    printf("\n\t\t\t sech( x ) = %.4f", ans);
}



int cothof(char rep[10])
{  /* function for finding coth(x) */

    float x;
    if((strcmp(rep,"YES")==0)&&l!=0)
    { /* condition for continuing with previous answer */

        x=ans;
        printf("x = %f",x);
    }

    if((strcmp(rep,"NO")==0)||l==0)
    { /* condititon for starting new calculations */

        printf("\n__________________________________________________________________________________________________________________________________");
        printf("\n\t\t\t\t\tNEW CALCULATIONS\n");
        printf("Enter x : ");
        scanf("%f",&x);
    }

    ans=tanh(x);
    ans=1/ans;
    printf("\n\t\t\t coth( x ) = %.4f", ans);
}



int cosechof(char rep[10])
{  /* function for finding cosech(x) */

    float x;
    if((strcmp(rep,"YES")==0)&&l!=0)
    { /* condition for continuing with previous answer */

        x=ans;
        printf("x = %f",x);
    }

    if((strcmp(rep,"NO")==0)||l==0)
    { /* condititon for starting new calculations */

        printf("\n__________________________________________________________________________________________________________________________________");
        printf("\n\t\t\t\t\tNEW CALCULATIONS\n");
        printf("Enter x : ");
        scanf("%f",&x);
    }

    ans=sinh(x);
    ans=1/ans;
    printf("\n\t\t\t cosech( x ) = %.4f", ans);
}



int pn(char rep[10])
{  /* function for +ve to -Ve and viceversa */

    float x;
    if((strcmp(rep,"YES")==0)&&l!=0)
    { /* condition for continuing with previous answer */

        x=ans;
        printf("x = %f",x);
    }

    if((strcmp(rep,"NO")==0)||l==0)
    { /* condititon for starting new calculations */

        printf("\n__________________________________________________________________________________________________________________________________");
        printf("\n\t\t\t\t\tNEW CALCULATIONS\n");
        printf("Enter x : ");
        scanf("%f",&x);
    }

    ans=(-1*x);
    printf("\n\t\t\t +/-( x ) = %.4f", ans);
}




int main()
{
    int n=0;

    // Instructions for scientific calculator and some rules
    printf("This is a scientific calculator. PLEASE READ THIS CAREFULLY");
    printf("\n\n\n1. DO NOT ENTER SPACE IN BETWEEN. IT WILL GIVE AN ERROR.");
    printf("\n2. Two/one number(s) on which function will be perfromed will be referred as x and y(or only x)");
    printf("\n\n\n\t\t-----Below are the charectars you need to enter for different functions-----");
    functions();
    printf("\n\nPROGRAM IS CASE-FRIENDLY i.e. you can enter upper-case or lower-case words");

    while(n==0)
    { /* This condition makes the program run until the user wants to exit */

        char func[100];
        int flag=0;
        printf("\n\n\n%s\n", "If you want to refer functions table again type ' Funtions '. If you want to exit this program type ' Exit '.");
        printf("\t\t\tFunction  :=>    ");
        scanf("%s", &func);
        int len=strlen(func);
        for(int i=0;i<len;i++)
        { /* converting all the letters entered by user to upper case
             for unifrmity */

            func[i]=toupper(func[i]);
        }

        if((strcmp(func,"EXIT")==0)||(strcmp(func,"FUNCTIONS")==0))
        {
            l=0;
            flag=1;
        }
        char rep[10];

        int check = 0;
        if(l!=0)
        {
            /* asking user if they want to continue with the previous
               answer or not */

                printf("Do you want to continue using operations on previous answer (Enter 'yes' / 'no') : ");
                scanf("%s", &rep);
        }

        int len1=strlen(rep);
        for(int i1=0;i1<len1;i1++)
        {
           rep[i1]=toupper(rep[i1]);
        }
        if(strcmp(rep, "YES") != 0 && strcmp(rep, "NO") != 0)
            strcpy(rep, "NO");

        if(strcmp(func,"ADD")==0)
        {
            add(rep);
            flag=1;
            l=1;
        }

        if(strcmp(func,"SUB")==0)
        {
            sub(rep);
            flag=1;
            l=1;
        }

        if(strcmp(func,"DIV")==0)
        {
            division(rep);
            flag=1;
            l=1;
        }

        if(strcmp(func,"MULT")==0)
        {
            mult(rep);
            flag=1;
            l=1;
        }

        if(strcmp(func,"MOD")==0)
        {
            mod(rep);
            flag=1;
            l=1;
        }

        if(strcmp(func,"INV")==0)
        {
            inv(rep);
            flag=1;
            l=1;
        }

        if(strcmp(func,"SQR")==0)
        {
            sqr(rep);
            flag=1;
            l=1;
        }

        if(strcmp(func,"SQRT")==0)
        {
            root(rep);
            flag=1;
            l=1;
        }

        if(strcmp(func,"SIN")==0)
        {
            sine(rep);
            flag=1;
            l=1;
        }

        if(strcmp(func,"COS")==0)
        {
            cosine(rep);
            flag=1;
            l=1;
        }

        if(strcmp(func,"TAN")==0)
        {
            tangent(rep);
            flag=1;
            l=1;
        }

        if(strcmp(func,"COT")==0)
        {
            cot(rep);
            flag=1;
            l=1;
        }

        if(strcmp(func,"COSEC")==0)
        {
            cosec(rep);
            flag=1;
            l=1;
        }

        if(strcmp(func,"SEC")==0)
        {
            sec(rep);
            flag=1;
            l=1;
        }

        if(strcmp(func,"POW")==0)
        {
            power(rep);
            flag=1;
            l=1;
        }

        if(strcmp(func,"+/-")==0)
        {
            pn(rep);
            flag=1;
            l=1;
        }

        if(strcmp(func,"LOG")==0)
        {
            logarithm(rep);
            flag=1;
            l=1;
        }

        if(strcmp(func,"LN")==0)
        {
            ln(rep);
            flag=1;
            l=1;
        }

        if(strcmp(func,"CEIL")==0)
        {
            ceilof(rep);
            flag=1;
            l=1;
        }

        if(strcmp(func,"FLOOR")==0)
        {
            floorof(rep);
            flag=1;
            l=1;
        }

        if(strcmp(func,"E^X")==0)
        {
            e_x(rep);
            flag=1;
            l=1;
        }

        if(strcmp(func,"COSH")==0)
        {
            coshof(rep);
            flag=1;
            l=1;
        }

        if(strcmp(func,"SINH")==0)
        {
            sinhof(rep);
            flag=1;
            l=1;
        }

        if(strcmp(func,"TANH")==0)
        {
            tanhof(rep);
            flag=1;
            l=1;
        }

        if(strcmp(func,"COTH")==0)
        {
            cothof(rep);
            flag=1;
            l=1;
        }

        if(strcmp(func,"SECH")==0)
        {
            sechof(rep);
            flag=1;
            l=1;
        }

        if(strcmp(func,"COSECH")==0)
        {
            cosechof(rep);
            flag=1;
            l=1;
        }

        if(strcmp(func,"EXIT")==0)
        {
            exit(0);
        }

        if(strcmp(func,"FUNCTIONS")==0)
        {
            functions();
        }

        if(flag==0)
        {
            printf("\nUNKNOWN FUNCTION ENTERED...\n");
        }
    }
    return(0);
}
