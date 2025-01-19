-------------------------------------------------------------------------------------------------------------
CODE FOR SQUARE OF A NUMBER USING FUNCTION.
--------------------------------------------------------------------------------------------------------------------------------
/*
#include<stdio.h>
#include<math.h>

void sqr(int a);

int main() {
    int a;
    printf("enter a number:");
    scanf("%d", &a);
    sqr(a);

    return 0;
}

void sqr(int x) {
    float s = pow(x,2);
    printf("%f", s);
}
*/

----------------------------------------------------------------------------------------------------------------------------
AREA OF A CIRCLE, SQAURE AND RECTANGLE USING FUNCTIONS.
--------------------------------------------------------------------------------------------------------------------------------

/*
#include<stdio.h>

void circlearea();
void sqrarea();
void rectarea();

int main() {
    char s;
    printf("area of circle, square or rectangle? : ");
    scanf(" %c", &s);

    if(s=='c') {
        int r;
        printf("enter radius: ");
        scanf("%d", &r);
        circlearea(r);
    }

    else if(s=='s') {
        int side;
        printf("enter side of square: ");
        scanf("%d", &side);
        sqrarea(side);
    }
    else if(s=='r') {
        int a,b;
        printf("enter side a:");
        scanf("%d", &a);
        printf("enter side b:");
        scanf("%d", &b);
        rectarea(a,b);
        
    }
    return 0;
}

void circlearea(int x) {
    printf("area is %f units", x*3.14*x);
}

void sqrarea(int y) {
    printf("area of square is : %d", y*y);
}

void rectarea(int x, int y) {
    printf("area of rectangle is: %d", x*y);
} 
*/

-----------------------------------------------------------------------------------------------------------------------------------
factorial of n using RECURSION
--------------------------------------------------------------------------------------------------------------------------
/*
#include<stdio.h>

int fact(int n);

int main() {
    int a;
    printf("enter a number: ");
    scanf("%d", &a);
    printf("%d", fact(a));
    return 0;
}

int fact(int n) {
    if(n==1) {
        return 1;
    }
    int f1 = fact(n-1);
    int f = f1*n;
    return f;
}
*/
-----------------------------------------------------------------------------------------------
triangle pattern of n rows
-------------------------------------------------------------------------------------------
/*
#include<stdio.h> 

int main() {
    int n=8;
    for (int i = 0; i<n; i++)
    {
       for (int j = 1; j <n-i; j++)
       {
        printf(" ");
       }
       for (int k = 0; k < ((i*2)-1) ; k++)
       {
        printf("*");
       }
       
    printf("\n");
    }
    
    return 0;
}
*/
----------------------------------------------------------------------------------------
print spearte number

/*
#include<stdio.h> 

int main() {
    int num;
    printf("enter number: ");
    scanf("%d" , &num);
    int r,q , n=num;
    for (q = n; q!=0 ; q=q/10)
    {
        r=q%10;
       printf("%d \n",r );
    }
    
    return 0;
}
*/
----------------------------------------------------------------------------------
retur n the amount entered in denominations of 100,50,10,5,2,1 with minmum no. of notes of each
-----------------------------------------------------------------------------------
/*
#include<stdio.h> 

int main() {
    int a, hun=0, fif=0, ten=0, fiv=0, two=0, one=0;

    printf("enter the amount:");
    scanf("%d", &a);

    for (int i = a; i > 100; i=i-100)
    {
        hun++ ;
    }
    printf("no. of 100's notes = %d\n", hun);

    if (a%100 > 50)
    {
        int b=a%100;
        printf("no. of 50's notes = 1\n");
        //for 10's
        for (int i = (b-50); i > 10; i=i-10)
        {
            ten++ ;
        }
        printf("no. of 10's notes = %d\n", ten);
        //five
        if ((a%10) >= 5)
        {
            printf("no. of 5's  notes = 1\n");
            if (((a%10)-5)%2 == 0)
            {
                int c = ((a%10)-5) ;
               for (size_t i = c; i >1; i=i/2){
                two++ ;
               }
               printf("no. of 2's notes = %d\n", two);
               printf("no. of 1's notes = 0\n");
            }
            else if (a%10 == 3){
                printf("no. of 2's notes = 0");
                printf("no. of 1's notes = 3");
            }
            else if(a%10 == 1) {
                printf("no. of 2's notes = 0");
                printf("no. of 1's notes = 1");
            }
            
        }
        else if(a%10 < 5) {
            printf("no. of 5's notes = 0\n");
            if (((a%10))%2 == 0)
            {
                int c = ((a%10)) ;
               for (size_t i = c; i >1; i=i/2){
                two++ ;
               }
               printf("no. of 2's notes is %d\n", two);
               ("no. of 1's notes is 0\n");
            }
        }
        
    }


    else{
        printf("no. of 50's notes = 0\n");
        int b=a%100;
        for (int i = b; i > 10; i=i-10)
        {
            ten++ ;
        }
        printf("no. of 10's notes = %d\n", ten);
        //five
        if ((a%10) >= 5)
        {
            printf("no. of 5's  notes = 1\n");
            if (((a%10)-5)%2 == 0)
            {
                int c = ((a%10)-5) ;
               for (size_t i = c; i >=1; i=i/2){
                two++ ;
               }
               printf("no. of 2's notes is %d\n", two);
               printf("no. of 1's notes is 0\n");
            }
            
        }
        else if(a%10 < 5) {
            printf("no. of 5's notes = 0\n");
            if (((a%10))%2 == 0)
            {
                int c = ((a%10)) ;
               for (size_t i = c; i >=1; i=i/2){
                two++ ;
               }
               printf("no. of 2's notes is %d\n", two);
               printf("no. of 1's notes is 0\n");
            }
            else if (a%10 == 3){
                printf("no. of 2's notes = 0");
                printf("no. of 1's notes = 3");
            }
            else if(a%10 == 1) {
                printf("no. of 2's notes = 0");
                printf("no. of 1's notes = 1");
            }
        }
    }

    return 0;
}
*/

-----------------------------------------------------------------------------------------
Taking numbers from user until he inserts 0, then sum of all.
-----------------------------------------------------------------------------------------
/*
#include<stdio.h> 

int main() {
    int a,b=0;
   // printf("enter:");
   scanf("%d", &a);
    while (a!=0)
    {
        printf("enter a number:");
        scanf("%d", &a);
        b=b+a;
    }
    //printf("oiy");
    printf("%d", b);
    return 0;
}

*/
---------------------------------------------------------------------------------------------------------------------
ARMSTRONG NUMBERS
----------------------------------------------------------------------------------------------------------------------
/*
#include<stdio.h> 
#include<math.h>

int main() {
    int a,b,c,d=0, count=0;
    printf("enter a nunber:");
    scanf("%d", &a);

    for(int i=a;i>=1;i=i/10) {
        count++;
    }

    for (int i = a; i >=1; i=i/10)
    {
        b=i%10;
        c=pow(b,count);
        d=d+c;
    }
    if(a==d) {
        printf("armstrong number");
    }
    else{
        printf("not one");
    }
    return 0;
}
*/