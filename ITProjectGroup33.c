#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#define PI 3.14
int guess (char c[],char in[],int len);

void parallelogram(void);
void parallelogramProp(void);
void APparallelogram(void);

void trapezium(void);
void trapeziumProp(void);
void APtrapezium(void);

void hexagon(void);
void hexagonProp(void);
void APhexagon(void);

void pentagon(void);
void pentagonProp(void);
void APpentagon(void);

void triangle(void);
void triangleProp(void);
void APtriangle(void);

void rhombus(void);
void rhombusProp(void);
void APrhombus(void);

void rectangle(void);
void rectangleProp(void);
void APrectangle(void);

void square(void);
void squareProp(void);
void APsquare(void);

void kite(void);
void kiteProp(void);
void APkite(void);

void circle(void);
void circleProp(void);
void APcircle(void);

int main()
{
    printf("*****************************************************************");
    printf("***********************");
    printf("\n                                   ##### SHAPOLOGIX #####      ");
    printf("\n");
  for(int i=0; i<10; i++)
  {
    if (i==0)
    {
        printf("\n!Welcome!.....For your first try, we give you an advantage:");
        printf("\n!Missing letters for this word will appear in all places!\n");
      int len = 13;
      char let[] = {'P','A','R','A','L','L','E','L','O','G','R','A','M'};
      char mis[] = {'P','_','_','_','_','L','E','_','_','_','_','_','M'};
      int get = guess(let,mis,len);
      if(get==0)
      {
         printf("\n ## The correct WORD is:");
        for(int i = 0 ; i<len ; i++)
          printf("%c ",let[i]);
      }

      parallelogram();

      parallelogramProp();
      printf("\n");
      APparallelogram();
      int wantMore = 0;
printf("\nDo You Want To Try Another Word?\nEnter 1 for Yes and 0 for No\n");
      scanf("%d",&wantMore);
      if(wantMore == 0)
      {
        printf("Bye!!!\n");
        exit(0);
      }
      else
      {
        system("cls");
        continue;
      }
    }
    else if(i==1)
    {
         system("cls");
      int len = 9;
      char let[] = {'T','R','A','P','E','Z','I','U','M'};
      char mis[] = {'T','_','_','P','_','_','_','_','M'};
      int get = guess(let,mis,len);
      if(get==0)
      {
           printf("\n ## The correct WORD is:");
        for(int i = 0 ; i<len ; i++)
          printf("%c ",let[i]);
      }

      trapezium();

      trapeziumProp();
      printf("\n");
      APtrapezium();
      int wantMore = 0;
printf("\nDo You Want To Try Another Word?\nEnter 1 for Yes and 0 for No\n");
      scanf("%d",&wantMore);
      if(wantMore == 0)
      {
        printf("Bye!!!\n");
        exit(0);
      }
      else
      {
        system("cls");
        continue;
      }
    }
    else if(i==2)
    {
         system("cls");
      int len = 7;
      char let[] = {'H','E','X','A','G','O','N'};
      char mis[] = {'H','_','_','_','G','_','N'};
      int get = guess(let,mis,len);
      if(get==0)
      {
           printf("\n ## The correct WORD is:");
        for(int i = 0 ; i<len ; i++)
          printf("%c ",let[i]);
      }

      hexagon();
      hexagonProp();
      printf("\n");
      APhexagon();
      int wantMore = 0;
printf("\nDo You Want To Try Another Word?\nEnter 1 for Yes and 0 for No\n");
      scanf("%d",&wantMore);
      if(wantMore == 0)
      {
        printf("Bye!!!\n");
        exit(0);
      }
      else
      {
        system("cls");
        continue;
      }
    }

    else if(i==3)
    {
         system("cls");
      int len = 8;
      char let[] = {'T','R','I','A','N','G','L','E'};
      char mis[] = {'T','_','_','_','N','_','_','E'};
      int get = guess(let,mis,len);
      if(get==0)
      {
           printf("\n ## The correct WORD is:");
        for(int i = 0 ; i<len ; i++)
          printf("%c ",let[i]);
      }

      triangle();

      triangleProp();
      printf("\n");
      APtriangle();
      int wantMore = 0;
printf("\nDo You Want To Try Another Word?\nEnter 1 for Yes and 0 for No\n");
      scanf("%d",&wantMore);
      if(wantMore == 0)
      {
        printf("Bye!!!\n");
        exit(0);
      }
      else
      {
        system("cls");
        continue;
      }
    }

    else if(i==4)
    {
         system("cls");
      int len = 7;
      char let[] = {'R','H','O','M','B','U','S'};
      char mis[] = {'R','_','_','_','_','_','S'};
      int get = guess(let,mis,len);
      if(get==0)
      {
           printf("\n ## The correct WORD is:");
        for(int i = 0 ; i<len ; i++)
          printf("%c ",let[i]);
      }

      rhombus();

      rhombusProp();
      printf("\n");
      APrhombus();
      int wantMore = 0;
printf("\nDo You Want To Try Another Word?\nEnter 1 for Yes and 0 for No\n");
      scanf("%d",&wantMore);
      if(wantMore == 0)
      {
        printf("Bye!!!\n");
        exit(0);
      }
      else
      {
        system("cls");
        continue;
      }
    }

    else if(i==5)
    {
         system("cls");
      int len = 9;
      char let[] = {'R','E','C','T','A','N','G','L','E'};
      char mis[] = {'R','_','_','_','A','_','_','_','E'};
      int get = guess(let,mis,len);
      if(get==0)
      {
           printf("\n ## The correct WORD is:");
        for(int i = 0 ; i<len ; i++)
          printf("%c ",let[i]);
      }

      rectangle();

      rectangleProp();
      printf("\n");
      APrectangle();
      int wantMore = 0;
printf("\nDo You Want To Try Another Word?\nEnter 1 for Yes and 0 for No\n");
      scanf("%d",&wantMore);
      if(wantMore == 0)
      {
        printf("Bye!!!\n");
        exit(0);
      }
      else
      {
        system("cls");
        continue;
      }
    }

    else if(i==6)
    {
         system("cls");
      int len = 6;
      char let[] = {'S','Q','U','A','R','E'};
      char mis[] = {'S','_','_','_','_','E'};
      int get = guess(let,mis,len);
      if(get==0)
      {
           printf("\n ## The correct WORD is:");
        for(int i = 0 ; i<len ; i++)
          printf("%c ",let[i]);
      }

      square();

      squareProp();
      printf("\n");
      APsquare();
      int wantMore = 0;
printf("\nDo You Want To Try Another Word?\nEnter 1 for Yes and 0 for No\n");
      scanf("%d",&wantMore);
      if(wantMore == 0)
      {
        printf("Bye!!!\n");
        exit(0);
      }
      else
      {
        system("cls");
        continue;
      }
    }

    else if(i==7)
    {
         system("cls");
      int len = 6;
      char let[] = {'C','I','R','C','L','E'};
      char mis[] = {'C','_','_','_','_','E'};
      int get = guess(let,mis,len);
      if(get==0)
      {
           printf("\n ## The correct WORD is:");
        for(int i = 0 ; i<len ; i++)
          printf("%c ",let[i]);
      }

      circle();

      circleProp();
      printf("\n");
      APcircle();
      int wantMore = 0;
printf("\nDo You Want To Try Another Word?\nEnter 1 for Yes and 0 for No\n");
      scanf("%d",&wantMore);
      if(wantMore == 0)
      {
        printf("Bye!!!\n");
        exit(0);
      }
      else
      {
        system("cls");
        continue;
      }
    }

    else if(i==8)
    {
         system("cls");
      int len = 8;
      char let[] = {'P','E','N','T','A','G','O','N'};
      char mis[] = {'P','_','_','T','_','_','_','N'};
      int get = guess(let,mis,len);
      if(get==0)
      {
           printf("\n ## The correct WORD is:");
        for(int i = 0 ; i<len ; i++)
          printf("%c ",let[i]);
      }

      pentagon();
      pentagonProp();
      printf("\n");
      APpentagon();
      int wantMore = 0;
printf("\nDo You Want To Try Another Word?\nEnter 1 for Yes and 0 for No\n");
      scanf("%d",&wantMore);
      if(wantMore == 0)
      {
        printf("Bye!!!\n");
        exit(0);
      }
      else
      {
        system("cls");
        continue;
      }
    }

    else if(i==9)
    {
         system("cls");
      int len = 4;
      char let[] = {'K','I','T','E'};
      char mis[] = {'K','_','_','E'};
      int get = guess(let,mis,len);
      if(get==0)
      {
           printf("\n ## The correct WORD is:");
        for(int i = 0 ; i<len ; i++)
          printf("%c ",let[i]);
      }

      kite();

      kiteProp();
      printf("\n");
      APkite();
    }
  }
 return 0;
}
/******GUESSER******/
int guess (char c[],char in[], int len)
{
  for(int k = 0 ; k< len ; k++)
    printf("%c ",in[k]);
  printf("\n");
  int wrong = 0;
  char g = 'A';
  int flag = 0, checker=0,correct=0;

  for(int i = 0;wrong<4; i++)
  {
    checker = 0;
    printf("Guess the Letter:\n");
    scanf("%s",&g);
    g = toupper(g);
    // printf("%c\n",g);
    int flagi = flag;
    for(int j = 0 ; j<len ; j++)
    {
      if(c[j]==g)
      {
        // printf("%d\n",j);
        in[j]=g;
        flag++;
      }
    }
    for(int k = 0 ; k<len ; k++)
      printf("%c ",in[k]);
    printf("\n");

    if(flagi==flag)
    {
      wrong++;
      printf("Number of wrong attempts:%d.\n",wrong);
    }
    for(int m = 0 ; m<len; m++)
    {
      if(in[m]==c[m])
      {
        checker++;
      }
    }
    if(checker==len)
    {
      correct++;
      break;
    }
  }
  if(wrong==4)
  {
    return 0;
  }
  else
  {
    return 1;
  }
}
/******For Parallelograms*******/
void parallelogram(void)
{
  int i, j;
  printf("\n\n");
    for(i=1; i<=7; i++)
    {
      printf("\t");
        for(j=1; j<i; j++)
        {
          printf(" ");
        }
        for(j=1; j<=15; j++)
        {
          printf("* ");
        }
      printf("\n");
    }
}
void parallelogramProp(void)
{
  printf("\n\n\t\t\t***** WELCOME *****\n\n");
  printf("!! DEFINITION OF A PARALLELOGRAM !!\n");
 printf("Parallelogram is a quadrilateral with two pairs of parallel sides.\n");
  printf("!! PROPERTIES OF A PARALLELOGRAM !!\n");
  printf(" 1. Opposite sides are of equal length. \n");
  printf(" 2. Opposite angles have the same measure. \n");
  printf(" 3. The diagonals of parallelogram divide it into four triangles of");
  printf(" equal area. \n 4. The area of a parallelogram is twice the area of");
  printf(" a triangle created by one of its \n    diagonals. \n 5. Any line");
  printf(" through the midpoint of a parallelogram bisects the area. \n");
  printf("6. Adjacent angles are supplementary. \n");
  printf("7. The sum of the squares of sides equals the sum of the squares");
  printf(" of diagonals. \n 8. Each diagonal divides the quadrilateral into");
  printf(" two congruent triangles. \n\n");
  printf("!! Perimeter OF A PARALLELOGRAM !!\n");
  printf("The Perimeter of a Parallelogram is given as:");
  printf(" 2*(a+b) (where 'a' and 'b' are  lengths of \nadjacent sides). \n\n");
  printf("!! AREA OF A PARALLELOGRAM !!\n");
  printf("The Area of a Parallelogram is given by:");
  printf(" l*h (where 'l' is the length of any one side and");
  printf("\n'h' is the length of corresponding height).");
  printf("\nAnother formula for finding the Area of a Parallelogram is:");
  printf(" a*b*sin(C) (where 'a' and 'b' \n");
  printf("are lengths of adjacent sides and C is angle between them).\n\n ");
}
void APparallelogram(void)
{
  int area,Perimeter,a,p,b,h,s;
  printf("Enter the Base, Height and Side of parallelogram (with spaces) : ");
  scanf("%d %d %d",&b,&h,&s);
  area = b*h;
  Perimeter = 2*(b+s);
  printf("NOTE : If You got any float value write its preceeding number\n");
  printf("With the parameters chosen input the calculated area and Perimeter");
  printf(" (with spaces) :\n");
  scanf("%d %d",&a,&p);
  if((area == a) && (Perimeter == p)){
      printf("!Congratulations You have made correct Calculations!\n");
  }
  else if(area!=a && Perimeter==p){
      printf(" OOPS! You have done some mistake in area Calculation and");
      printf(" made correct Calculation in Perimeter\n");
      printf(" Area of parallelogram a=b*h\nCalculation: %d= %d*%d\n",area,b,h);
  }
  else if(Perimeter!=p && area==a){
     printf(" OOPS! You have done some mistake in Perimeter Calculation");
     printf(" and made correct Calculation in area\n");
     printf(" Perimeter of parallelogram p = 2*(b+s) \n");
     printf("Calculation is  %d = 2*(%d+%d)\n",Perimeter,b,s);
  }
  else{
     printf(" OOPS! You have done some mistake in area Calculation and");
     printf(" also Perimeter Calculation\n");
     printf(" Area of parallelogram a=b*h\n Calculation:%d = %d*%d\n",area,b,h);
     printf(" Perimeter of parallelogram p = 2*(b+s) \n");
     printf("Calculation is  %d = 2*(%d+%d)\n",Perimeter,b,s);
  }
}
/******For Trapeziums********/
void trapezium(void)
{
   int i,j,l=7,m=2,h;
   printf("\n\n");
   for(i=4;i>=0;i--)
   {
     printf("\t");
       if(i>0)
       {
         for(h=0;h<=l;h++)
           printf("  ");
         l=l-2;
       }
       for(j=0;j<4*m;j++)
       {
         printf("* ");
       }
       m++;
       printf("\n");
   }
}
void trapeziumProp(void)
{
  printf("\n\n\t\t\t***** WELCOME *****\n\n");
    printf("!! DEFINITION OF A TRAPEZIUM !!\n");
    printf("Trapezium is a quadrilateral with two parallel sides.");
    printf("The parallel sides of a Trapezium are \n");
    printf("called bases and non-parallel sides of Trapezium are called legs.");
    printf("\nIt is also called a Trapezoid.\n\n");
    printf("!! PROPERTIES OF A TRAPEZIUM !!\n");
    printf(" 1. In trapezium,exactly one pair of opposite sides are parallel.");
    printf("\n 2. The diagonals intersect each other. \n");
    printf("3. The non-parallel sides in the trapezium are unequal. \n");
    printf("4. The line that joins the mid-points of the non-parallel sides");
    printf(" is always parallel to the \n    bases or parallel sides which is");
    printf("equal to half of the sum of parallel sides. \n");
    printf("5. The two adjacent angles are supplementary.\n\n");
    printf("!! Perimeter OF A TRAPEZIUM !!\n");
    printf(" The Perimeter of a Trapezium is given as:");
    printf(" a+b+c+d (where 'a','b','c','d' are lengths of \n");
    printf("sides of the trapezium). \n\n");
    printf("!! AREA OF A TRAPEZIUM !!\n");
    printf(" The Area of a Trapezium is given by:");
    printf("(a+b)*h/2 (where 'a' and 'b' are lengths of parallel \n");
    printf("sides and 'h' is the distance between them). \n\n ");

}
void APtrapezium(void)
{
  int area,Perimeter,a,p,b1,b2,s1,s2,h;
  printf("Enter the Base1,base2,side1,side2 and Height of trapezium");
  printf("(with spaces) : ");
  scanf("%d %d %d %d %d",&b1,&b2,&s1,&s2,&h);
  area = (b1+b2)*h/2;
  Perimeter = b1+b2+s1+s2;
  printf("NOTE : If You got any float value write its preceeding number\n");
  printf("With the parameters chosen input the calculated area and Perimeter");
  printf(" (with spaces) :");
  scanf("%d %d",&a,&p);
  if((area == a) && (Perimeter == p)){
      printf("Congratulations You have made correct Calculations\n");
  }
  else if(area!=a && Perimeter==p){
      printf("OOPS! You have done some mistake in area Calculation and made");
      printf(" correct Calculation in Perimeter\n");
      printf("Area of trapezium a = (b1+b2)h/2; \n");
      printf("Calculation is %d = (%d+%d)%d/2\n",area,b1,b2,h);
  }
  else if(Perimeter!=p && area==a){
     printf("OOPS! You have done some mistake in Perimeter Calculation");
     printf(" and made correct Calculation in area\n");
     printf("Perimeter of trapezium p = b1+b2+s1+s2; \n");
     printf("Calculation is  %d = (%d+%d+%d+%d)\n",Perimeter,b1,b2,s1,s2);
  }
  else{
      printf("OOPS! You have done some mistake in area Calculation and also");
      printf(" Perimeter Calculation\n");
      printf("Area of trapezium a = b*h \nCalculation is:");
      printf("%d = (%d+%d)*%d/2\n",area,b1,b2,h);
      printf(" Perimeter of trapezium p = 2*(b+s) \nCalculation is:");
      printf("%d = (%d+%d+%d+%d)\n",Perimeter,b1,b2,s1,s2);
  }
}
/****For Hexagons****/
void hexagon(void)
{

  int i,j,w,x,y,m,n,o,l=13;
  printf("\n\n");
  for (i=0;i<4;i++)
  {
    printf("\t");
      for(j=4-i;j>1;j--)
      {
          printf("  ");
      }
      for(w=0;w<=4*i;w++)
      {
          printf("*");
      }
      printf("\n");
  }
  for(x=0;x<2;x++)
  {
    printf("\t");
      for(y=0;y<13;y++)
        printf("*");
    printf("\n");
  }
  for (m=0;m<4;m++)
  {
    printf("\t");
      for(n=0;n<m;n++)
      {
          printf("  ");
      }
      for(o=l;o>0;o--)
      {
          printf("*");
      }
    l=l-4;
    printf("\n");
  }
}
void hexagonProp(void)
{
  printf("\n\n\t\t\t***** WELCOME *****\n\n");
    printf("!! DEFINITION OF A HEXAGON !!\n");
    printf("A Regular Hexagon is defined as hexagon that is both equilateral");
    printf(" and equiangular.It is\nbicentric, meaning that it is both cyclic");
    printf(" (has a circumscribed circle) and tangential(has an \ninscribed");
    printf("circle). \n\n");
    printf("!! PROPERTIES OF A HEXAGON !!\n");
    printf(" 1. All sides are of equal length. \n");
    printf("2. All interior angles measure 120 degrees. \n");
    printf("3. It has nine diagonals of which three are longest joining the");
    printf(" exactly opposite vertices and\n    ");
    printf(" remaining six are formed by joining the alternate vertices. \n");
    printf("4. The sum of all interior angles is equal to 720 degrees. \n");
    printf("5. The sum of all exterior angles is equal to 360 degrees,");
    printf(" where each exterior angle measures \n    60 degrees. \n");
    printf("6. The length of Circumradius is equal to the length of sides.");
    printf("\n 7. The length of Inradius is equal to a*sqrt(3)/2. \n\n");
    printf("!! Perimeter OF A HEXAGON !!\n");
    printf(" The Perimeter of a Hexagon is given as 6*a (where 'a' is the");
    printf(" length of the sides of the \n Hexagon). \n\n");
    printf("!! AREA OF A HEXAGON !!\n");
    printf(" The Area of a Hexagon is given by (a^2)3*sqrt(3)/2 (where 'a' is");
    printf(" the length of \n the sides of the Hexagon). \n In terms of");
    printf(" Circumradius (R), it is given as (R^2)*3*sqrt(3)/2. \n");
    printf(" In terms of Inradius (r) it is given as, 2*sqrt(3)(r^2). \n");
    printf(" Area can also be given as 3*R*r. \n\n ");
}
void APhexagon(void)
{
  int Perimeter,p,b1;
  float area,a;
  printf("Enter the side of hexagon : ");
  scanf("%d",&b1);
  area = (3*sqrt(3)*b1*b1)/2;
  Perimeter = 6*b1;
  printf("NOTE : Calculate area upto 6 decimal values\n");
  printf("With the parameters chosen input the calculated area and Perimeter");
  printf("(with spaces) :");
  scanf("%f %d",&a,&p);
  if((area == a) && (Perimeter == p)){
      printf("Congratulations You have made correct Calculations");
  }
  else if(area!=a && Perimeter==p){
      printf("OOPS! You have done some mistake in area Calculation and made");
      printf(" correct Calculation in Perimeter\n");
      printf("Area of hexagon a = 3*sqrt(3)b1*b1/2 \nCalculation is");
      printf("%0.6f = 3*sqrt(3)%d*%d/2\n",area,b1,b1);
  }
  else if(Perimeter!=p && area==a){
     printf("OOPS! You have done some mistake in Perimeter Calculation and");
     printf(" made correct Calculation in area\n");
     printf("Perimeter of hexagon p = 6*a \nCalculation is");
     printf(" %d = 6*%d\n",Perimeter,b1);
  }
  else{
      printf("OOPS! You have done some mistake in area Calculation and");
      printf(" also Perimeter Calculation\n");
      printf("Area of hexagon a = 3*sqrt(3)b1*b1/2 \nCalculation is");
      printf(" %0.2f = 3*sqrt(3)%d*%d/2\n",area,b1,b1);
      printf("Perimeter of hexagon p = 6*a \nCalculation is  ");
      printf("%d = 6*%d\n",Perimeter,b1);
  }
}

/*********For Triangles*******/
void triangle(void)
{
  int  a,b,n=8;

  a=1;
  printf("\n\n\t");
  while(a<=n)
  {
      b=0;
      while(b<n-a)
      {
          printf(" ");
          b=b+1;
      }
      b=0;
      while(b<a)
      {
          printf("*");
          printf(" ");
          b=b+1;
      }
      printf("\n\t");
      a=a+1;
  }
}
void triangleProp(void)
{
  printf("\n\n\t\t\t***** WELCOME *****\n\n");
    printf("!! DEFINITION OF A TRIANGLE !!\n");
    printf(" A Triangle (as the name suggests) is a polygon with three edges");
    printf(" and three vertices. Any three \n points, when non-collinear, ");
    printf("determine a unique triangle and simultaneously, a unique plane \n");
    printf("(i.e. a two-dimensional Euclidean space). \n\n");
    printf("!! PROPERTIES OF A TRIANGLE !!\n");
    printf(" 1. A triangle has three sides, three vertices and three angles. ");
    printf("\n 2. Sum of all interior angles is 180 degrees. ");
    printf("\n 3. A Triangle basically can be one of following three types:");
    printf("\n    (I) Equilateral Traingle: All sides are of same length and");
    printf(" all angles are of equal \n        measure. \n    (II) Isoceles");
    printf(" Triangle: Two of the sides are of equal length and the angles");
    printf(" opposing the \n        sides are of equal measure. \n    ");
    printf("(III) Scalene Triangle: All sides are of different length and ");
    printf("all angles are differ in \n        measurement. \n    ");
    printf("(IV) Right Angled Triangle: Any one of the angles measures 90 ");
    printf("degrees. This type of \n        triangles relate to a very ");
    printf("well-known theroem, The Pythagoras Theorem. \n    ");
    printf("(V) Acute Angled Triangle: All the angles measure less than 90 ");
    printf("degrees. \n    (VI) Obtuse Angled Triange: Atleast one angle ");
    printf("has a measure greater than 90 degrees. \n 4. The measure of an ");
    printf("exterior angle is equal to the sum of the other two angles of ");
    printf("the \n    triangle. This is due to the fact that the sum of ");
    printf("interior angles of a triangle is 180 \n    degrees. ");
    printf("\n 5. Triangle is a very important shape in geometry and has ");
    printf("various tests for the congruence \n    and similarity of two or ");
    printf("more triangles. \n 6. In fact, The Right Angled Triangles form a ");
    printf("branch of study themselves, which is popular \n    by the name ");
    printf("'Trigonometry'. \n\n");
    printf("!! Perimeter OF A TRIANGLE !!\n");
    printf(" The Perimeter of a Triangle is given as a+b+c (where 'a', 'b, ");
    printf("'c' are the lengths of the \n sides of the Triangle). \n\n");
    printf("!! AREA OF A TRIANGLE !!\n");
    printf(" The Area of a Triangle is given by (1/2)*b*h (where 'b' is the ");
    printf("length of the side chosen as \n the base of the Triangle and 'h' ");
    printf("is the corresponding height). \n Area is also given as ");
    printf("(1/2)*a*b*sin(C) (Where 'a' and 'b' are any two sides of the ");
    printf("triangle \n and C is the angle at the point of concurrence of ");
    printf("those sides). \n If the Perimeter of the triangle is known, the ");
    printf("area of a triangle can also be calculated by \n the Heron's ");
    printf("Formula, Area = sqrt[s(s-a)(s-b)(s-c)] (Where 's' is the ");
    printf("semiPerimeter of the \n triangle and 'a', 'b', 'c' are the ");
    printf("lengths of sides of the triangle) \n\n ");
}
void APtriangle(void)
{
  int area,perimeter,a,p,b,s1,s2;
    float s;
    printf("Enter the Base,Side1 and Side2 of Triangle (with spaces) : ");
    scanf("%d %d %d",&b,&s1,&s2);
    s = (s1+b+s2)/2.0;
    area = sqrt(s*(s-s1)*(s-b)*(s-s2));
    perimeter = b+s1+s2;
    if(s1+s2<=b || s1+b<=s2 || s2+b<=s1){
        printf("The sides you entered will not form a triangle");
    }
    else{

        printf("NOTE: If you got any float value write preceeding number\n");
        printf("With the parameters chosen input the calculated area and ");
        printf("perimeter (with spaces) :");
        scanf("%d %d",&a,&p);
        if((area == a) && (perimeter == p)){
            printf("Congratulatons you have made correct calculations");
        }
        else if(area!=a && perimeter==p){
            printf("OOPS! you have done some mistake in area calculation and ");
            printf("made correct calculation in perimeter\n");
            printf("Area of Triangle a = sqrt(s*(s-a)(s-b)(s-c)) \n");
            printf("calculation is ");
            printf("%d = sqrt(%f*(%f-%d)(%f-%d)(%f-%d)\n",area,s,s,b,s,s1,s,s2);
        }
        else if(perimeter!=p && area==a){
        printf("OOPS! you have done some mistake in perimeter calculation ");
            printf("and made correct calculation in area\n");
            printf("perimeter of Triangle p = b+s1+s2 \ncalculation is  ");
            printf("%d = %d+%d+%d\n",perimeter,b,s1,s2);
        }
        else{
            printf("OOPS! you have done some mistake in area calculation and ");
            printf("also perimeter calculation\n");
            printf("Area of Triangle a =sqrt(s*(s-a)(s-b)(s-c))\ncalculation ");
        printf("is %d = sqrt(%f*(%f-%d)(%f-%d)(%f-%d))\n",area,s,s,b,s,s1,s,s2);
            printf("perimeter of Triangle p = 2*(b+s) \ncalculation is  ");
            printf("%d = %d+%d+%d\n",perimeter,b,s1,s2);
            }
    }
  }

/*******For Rhombus*****/
void rhombus(void)
{
  int a,rows = 9,i,j;
  a=0;
  printf("\n\n\t");
  while(a<((rows/2)+1))
  {
      for(i=1;i<rows-a;i++)
      {
          printf(" ");
      }
      for(j=1;j<=a;j++)
      {
          printf("* ");
      }
      printf("\n\t");
      a = a+1;
  }
  a = rows/2 - 1;
  while(a<=rows)
  {
      for(i=1;i<=a;i++)
      {
          printf(" ");
      }
      for(j=1;j<rows-a;j++)
      {
          printf("* ");
      }
      printf("\n\t");
      a = a+1;
  }
}
void rhombusProp(void)
{
  printf("\n\n\t\t\t***** WELCOME *****\n\n");
    printf("!! DEFINITION OF A RHOMBUS !!\n");
    printf(" A Rhombus is a quadrilateral whose four sides all have the same ");
    printf("length. Another name is equilateral quadrilateral, since ");
    printf("equilateral means that all of its sides are equal in length. \n\n");
    printf("!! PROPERTIES OF A RHOMBUS !!\n");
    printf(" 1. All sides are of equal length. \n 2. Sum of all interior ");
    printf("angles is 360 degrees. \n 3. Opposite angles of a Rhombus have ");
    printf("equal measure. \n 4. The diagonals of rhombus bisect each other ");
    printf("are mutually perpendicular. \n 5. Its diagonals bisect opposite ");
    printf("angles. \n 6. Every Rhombus is a Parallelogram. \n");
    printf(" 7. Adjacent angles are Supplementary. \n");
    printf("8. A Rhombus is a Tangential quadrilateral. That is, it has an ");
    printf("inscribed circle that is tangent to all four sides.\n\n");
    printf("!! Perimeter OF A RHOMBUS !!\n");
    printf(" The Perimeter of a Rhombus is given as 4*a (where 'a' is the ");
    printf("length of the sides of the Rhombus). \n\n");
    printf("!! AREA OF A RHOMBUS !!\n");

    printf(" The Area of a Rhombus is given by a*h (where 'a' is the length ");
    printf("of the sides of the Rhombus and 'h' is the corresponding height).");
    printf("\n In terms of length of diagonals, it is given as p*q/2 (where ");
    printf("'p' and 'q' are lengths of the two diagonals). \n ");
    printf("In terms of Inradius (r) it is given as, 2*a*r. \n\n ");
}
void APrhombus(void)
{
  int area,Perimeter,a,p,side1,s1,s2;
  printf("Enter the side,diagonal1 and diagonal2 of rhombus (with spaces) : ");
  scanf("%d %d %d",&side1,&s1,&s2);
  area = (s1*s2)*1/2;
  Perimeter = 4*side1;
  printf("NOTE : If You got any float value write its preceeding number\n");
  printf("With the parameters chosen input the calculated area and Perimeter ");
  printf("(with spaces) :");
  scanf("%d %d",&a,&p);
  if((area == a) && (Perimeter == p)){
      printf("Congratulations You have made correct Calculations");
  }
  else if(area!=a && Perimeter==p){
      printf("OOPS! You have done some mistake in area Calculation and made ");
      printf("correct Calculation in Perimeter\n");
      printf("Area of rhombus a = 1/2*d1*d2 \nCalculation is ");
      printf("%d = 1/2*%d*%d\n",area,s1,s2);
  }
  else if(Perimeter!=p && area==a){
     printf("OOPS! You have done some mistake in Perimeter Calculation and ");
     printf("made correct Calculation in area\n");
     printf("Perimeter of rhombus p = 4*a \nCalculation is  ");
     printf("%d = 4*%d\n",Perimeter,side1);
  }
  else{
     printf("OOPS! You have done some mistake in area Calculation and also ");
     printf("Perimeter Calculation\n");
     printf("Area of rhombus a = 1/2*d1*d2 \nCalculation is ");
     printf("%d = 1/2*%d*%d\n",area,s1,s2);
     printf("Perimeter of rhombus p = 4*a \nCalculation is  ");
     printf("%d = 4*%d\n",Perimeter,side1);

  }
}
/*********For Rectangles******/
void rectangle(void)
{
  int length,breadth,i,j;
  length = 10;
  breadth = 6;
  printf("\n\n\t");
  for(i=1;i<=breadth;i++)
  {

    for(j=1;j<=length;j++)
    {
      printf("* ");
    }
    printf("\n\t");
  }
}
void rectangleProp(void)
{
  printf("\n\n\t\t\t***** WELCOME *****\n\n");
    printf("!! DEFINITION OF A RECTANGLE !!\n");
    printf(" A Rectangle is quadrilateral with four right angles.It is also ");
    printf("called an equiangular quadrilateral. \n\n");
    printf("!! PROPERTIES OF A RECTANGLE !!\n");
    printf(" 1. Opposite sides are of equal length and are parallel. \n ");
    printf("2. All angles are 90 degrees. \n 3. It has two diagonals which ");
    printf("are equal in length. \n 4. Diagonals of a rectangle bisect each ");
    printf("other. \n 5. A diagonal of a rectangle bisects it into two equal ");
    printf("right triangles. \n 6. Length of diagonals of a rectangle is ");
    printf("always greater than the length of its sides. \n ");
    printf("7. Rectangle is a cyclic quadrilateral. \n 8. The length of ");
    printf("diagonal is given as sqrt(a^2 +b^2) (where 'a' and 'b' are ");
    printf("lengths of adjacent sides). \n\n");
    printf("!! Perimeter OF A RECTANGLE !!\n");
    printf(" The Perimeter of a rectangle is given as 2*(a+b) ");
    printf("where 'a' and 'b' are lengths of adjacent sides). \n\n");
    printf("!! AREA OF A RECTANGLE !!\n");
    printf(" The Area of a rectangle is given by a*b (where 'a' and 'b' ");
    printf("are lengths of adjacent sides). \n\n ");
}
void APrectangle(void)
{
  int area,Perimeter,a,p,b,h;
  printf("Enter the Breadth and Length of rectangle (with spaces) : ");
  scanf("%d %d",&b,&h);
  area = b*h;
  Perimeter = 2*(b+h);
  printf("With the parameters chosen input the calculated area and Perimeter ");
  printf("(with spaces) :");
  scanf("%d %d",&a,&p);
  if((area == a) && (Perimeter == p)){
      printf("Congratulations You have made correct Calculations");
  }
  else if(area!=a && Perimeter==p){
      printf("OOPS! You have done some mistake in area Calculation and made ");
      printf("correct Calculation in Perimeter\n");
      printf("Area of rectangle a = b*l \nCalculation is ");
      printf("%d = %d*%d\n",area,b,h);
  }
  else if(Perimeter!=p && area==a){
     printf("OOPS! You have done some mistake in Perimeter Calculation and ");
     printf("made correct Calculation in area\n");
     printf("Perimeter of rectangle p = 2*(b+l) \nCalculation is  ");
     printf("%d = 2*(%d+%d)\n",Perimeter,b,h);
  }
  else{
     printf("OOPS! You have done some mistake in area Calculation and also ");
     printf("Perimeter Calculation\n");
     printf("Area of rectanglea = b*l \nCalculation is ");
     printf("%d = %d*%d\n",area,b,h);
     printf("Perimeter of rectangle p = 2*(b+l) \nCalculation is  ");
     printf("%d = 2*(%d+%d)\n",Perimeter,b,h);

  }
}
/*****For Squares***/
void square(void)
{
  int rows = 8,i,j;

  printf("\n\n\t");
  for(i=1;i<=rows;i++)
  {
      for(j=1;j<=rows;j++)
      {
          printf("* ");
      }
      printf("\n\t");
  }
}
void squareProp(void)
{
  printf("\n\n\t\t\t***** WELCOME *****\n\n");
  printf("!! DEFINITION OF A SQUARE !!\n");
  printf(" In Geometry, a square is a regular quadrilateral with all four ");
  printf("equal sides and all the four angles are equal to 90 degrees. \n\n");
  printf("!! PROPERTIES OF A SQUARE !!\n");
  printf(" 1. All sides are of equal length. \n 2. All angles are 90 degrees.");
  printf("\n 3. It has two diagonals which are equal in length. \n ");
  printf("4. Diagonals of a square bisect each other at 90 degrees \n ");
  printf("5. A diagonal of a square bisects it into two equal isoceles ");
  printf("triangles. \n 6. Length of diagonals of a square is always greater ");
  printf("than the length of its sides. \n\n");
  printf("!! Perimeter OF A SQUARE !!\n");
  printf(" The Perimeter of a square is given as 4*a(where 'a' is the length ");
  printf("of the sides of the square). \n\n");
  printf("!! AREA OF A SQUARE !!\n");
  printf(" The Area of a sqaure is given by a*a (where 'a' is the length of ");
  printf("the sides of the square). \n If the length of the diagonal (d) is ");
  printf("known,Area is given as d*d/2 . \n\n ");
}
void APsquare(void)
{
  int area,Perimeter,a,p,side1;
  printf("Enter the side of square : ");
  scanf("%d",&side1);
  area = side1*side1;
  Perimeter = 4*side1;
  printf("With the parameters chosen input the calculated area and Perimeter ");
  printf("(with spaces) :");
  scanf("%d %d",&a,&p);
  if((area == a) && (Perimeter == p)){
      printf("Congratulations You have made correct Calculations");
  }
  else if(area!=a && Perimeter==p){
      printf("OOPS! You have done some mistake in area Calculation and made ");
      printf("correct Calculation in Perimeter\n");
      printf("Area of square a = side*side \nCalculation is ");
      printf("%d = %d*%d\n",a,side1,side1);
  }
  else if(Perimeter!=p && area==a){
     printf("OOPS! You have done some mistake in Perimeter Calculation and ");
     printf("made correct Calculation in area\n");
     printf("Perimeter of square p = 4*side \nCalculation is  ");
     printf("%d = 4*%d\n",Perimeter,side1);
  }
  else{
     printf("OOPS! You have done some mistake in area Calculation and ");
     printf("also Perimeter Calculation\n");
     printf("Area of square a = side*side \nCalculation is ");
     printf("%d = %d*%d\n",a,side1,side1);
    printf("Perimeter of square p = 4*side \nCalculation is  ");
    printf("%d = 4*%d\n",Perimeter,side1);

  }
}
/*******For Circle*******/
void circle(void)
{
    int r=5;
    int c= 2*r+1;
   for(int i= r;i>=-r;i--)
   {
       for(int j= -c;j<=c;j++)
       {
          if((pow(r,2)*pow(j,2)) + (pow(c,2)*pow(i,2)) <= ((pow(r,2)*pow(c,2))))
           {
               printf("*");
           }
           else
           {
               printf(" ");
           }

       }
        printf("\n");
   }
}
void circleProp(void)
{
  printf("\n\n\t\t\t***** WELCOME *****\n\n");
    printf("!! DEFINITION OF A CIRCLE !!\n");
    printf(" A circle is a shape consisting of all points in a plane that are");
    printf(" at a given distance from a given point, the centre; ");
    printf("equivalently it is the curve traced out by a point that moves in ");
    printf("a plane so that its distance from a given point is constant. \n\n");
    printf("!! PROPERTIES OF A CIRCLE !!\n");
    printf(" 1. The circle is the shape with the largest area for a given ");
    printf("length of Perimeter \n 2. The circle is a highly symmetric ");
    printf("shape: every line through the centre forms a line of reflection ");
    printf("symmetry, and it has rotational symmetry around the centre for ");
    printf("every angle. \n 3. Chords are equidistant from the centre of a ");
    printf("circle if and only if they are equal in length. \n");
    printf(" 4.The perpendicular bisector of a chord passes through the ");
    printf("centre of a circle \n 5. The diameter is the longest chord of ");
    printf("the circle. \n 6. A line drawn perpendicular to a radius through ");
    printf("the end point of the radius lying on the circle is a tangent to ");
    printf("the circle. A line drawn perpendicular to a tangent through the ");
    printf("point of contact with a circle passes through the centre of the ");
    printf("circle. \n 7. Two tangents can always be drawn to a circle from ");
    printf("any point outside the circle, and these tangents are equal in ");
    printf("length. \n 8. The angle between a chord and the tangent at one ");
    printf("of its endpoints is equal to one half the angle subtended at ");
    printf("the centre of the circle, on the opposite side of the chord. \n\n");
    printf("!! Perimeter OF A CIRCLE !!\n");
    printf(" The Perimeter of a Circle is given as 2*pi*r (where 'pi = 3.14 ");
    printf("or 22/7' and 'r' is length of radius of circle). \n\n");
    printf("!! AREA OF A CIRCLE !!\n");
    printf(" The Area of a Circle is given by pi*r*r (where 'pi = 3.14 or ");
    printf("22/7' and 'r' is length of radius of circle). \n\n ");
}
void APcircle(void)
{
  int area,perimeter,a,p,radius;
   printf("Enter the radius of circle : ");
   scanf("%d",&radius);
   area = PI*radius*radius;
   perimeter = 2*PI*radius;
   printf("NOTE : If you got any float value write its preceeding number and ");
   printf("take pi=3.14\n");
   printf("With the parameters chosen input the calculated area and ");
   printf("perimeter (with spaces) :");
   scanf("%d %d",&a,&p);
   if((area == a) && (perimeter == p)){
       printf("Congratulations you have made correct Calculations");
   }
   else if(area!=a && perimeter==p){
       printf("OOPS! you have done some mistake in area calculation and made ");
       printf("correct calculation in perimeter\n");
       printf("Area of circle a = pi*r*r \ncalculation is ");
       printf("%d = %f*%d*%d\n",area,PI,radius,radius);
   }
   else if(perimeter!=p && area==a){
      printf("OOPS! you have done some mistake in perimeter calculation and ");
      printf("made correct calculation in area\n");
      printf("perimeter of parallelogram p = 2*pi*r \ncalculation is  ");
      printf("%d = 2*%f*%d\n",perimeter,PI,radius);
   }
   else{
      printf("OOPS! you have done some mistake in area calculation and also ");
      printf("perimeter calculation\n");
      printf("Area of circle a = pi*r*r \ncalculation is ");
      printf("%d = %f*%d*%d\n",area,PI,radius,radius);
      printf("perimeter of parallelogram p = 2*pi*r \ncalculation is  ");
      printf("%d = 2*%f*%d\n",perimeter,PI,radius);
    }
}
/*********For Pentagon*********/
void pentagon(void)
{
  printf("\n\n");
    int a,b,i=1,c;
    a=1;
    while(a<=7){
        printf("\t");
        while(i<=7-a){
            printf("  ");
            i=i+1;
        }
        b=a+1;
        i=1;
        while(i<b){
                printf(" * *");
                i=i+1;
            }
        a=a+1;
        printf("\n");
        i=1;
    }
    a=1;
    b=1;
    i=1;
    c=14;
    while(a<=8){
        printf("\t");
        while(i<=b){
            printf(" ");
            i=i+1;
        }
        i=1;
        while(i<=c){
            printf("* ");
            i=i+1;
        }
        c=c-1;
        a=a+1;
        b=b+1;
        i=1;
        printf("\n");
    }
}
void pentagonProp(void)
{
  printf("***** WELCOME *****\n\n");
    printf("!! DEFINITION OF A PENTAGON !!\n");
    printf(" A Pentagon is any five-sided polygon or 5-gon.  \n\n");
    printf("!! PROPERTIES OF A PENTAGON !!\n");
    printf(" 1. A Regular Pentagon has five lines of reflectional symmetry, ");
    printf("and rotational symmetry of order 5 (through 72, 144, 216 and 288 ");
    printf("degrees). \n 2. Its height (distance from one side to the ");
    printf("opposite vertex) is given by 1.539*a (where 'a' is the length ");
    printf("of the side of the pentagon.) \n 3. Its width (distance between ");
    printf("two farthest separated points, which equals the diagonal length) ");
    printf("are given by 1.618*a. And this ratio is known as the Golden ");
    printf("ratio. \n 4. It has only one type of diagonal joining two ");
    printf("alternate vertices. \n 5. The Regular Pentagon fills ");
    printf("approximately 0.7568 of its circumscribed circle. \n ");
    printf("6. The length of the Inradius is given by 0.6882*a. \n\n");
    printf("!! PERIMETER OF A PENTAGON !!\n");
    printf(" The Perimeter of a Pentagon is given as 5*a (where 'a' is the ");
    printf("length of the sides of the Hexagon). \n In terms of Circumradius ");
    printf("R, length of its side is given by 1.176*R. \n\n");
    printf("!! AREA OF A PENTAGON !!\n");
    printf(" The Area of a Pentagon is given by (1/2)*P*r (where 'P' is ");
    printf("the Perimeter of the Pentagon and 'r' is measure of Inradius).");
    printf(" \n The Area of Regular Pentagon with side length a is given by ");
    printf("1.720*a. \n\n ");
}
void APpentagon(void)
{
  int area,Perimeter,a,p,s;
  printf("Enter the Side of regular Pentagon: ");
  scanf("%d",&s);
  area = 1.7204774*s;
  Perimeter = 5*s;
  printf("NOTE : If You got any float value write its preceeding number\n");
  printf("With the parameters chosen input the calculated area and Perimeter ");
  printf("(with spaces) :\n");
  scanf("%d %d",&a,&p);
  if((area == a) && (Perimeter == p)){
      printf(" !Congratulations You have made correct Calculations!\n");
  }
  else if(area!=a && Perimeter==p){
      printf(" OOPS! You have done some mistake in area Calculation and made ");
      printf("correct Calculation in Perimeter\n");
      printf(" Area of pentagon a = s*sqrt(5*(5+(2*sqrt(5))))/4 ");
      printf("\nCalculation is %d = %d*1.7204774\n",area,s);
  }
  else if(Perimeter!=p && area==a){
     printf(" OOPS! You have done some mistake in Perimeter Calculation and ");
     printf("made correct Calculation in area\n");
     printf(" Perimeter of pentagon p = 5*s \nCalculation is  ");
     printf("%d = 5*%d\n",Perimeter,s);
  }
  else{
     printf(" OOPS! You have done some mistake in area Calculation and ");
     printf("also Perimeter Calculation\n");
     printf(" Area of pentagon a = s*sqrt(5*(5+(2*sqrt(5))))/4 \n ");
     printf("Calculation is %d = %d*1.7204774\n",area,s);
     printf(" Perimeter of pentagon p = 5*s \n Calculation is  ");
     printf("%d = 5*%d\n",Perimeter,s);
}
}
/******For Kites*******/
void kite(void)
{
  int i,j,w,p,q,r,m=11;
  printf("\n\n");
  for (i=0;i<4;i++)
  {
    printf("\t");
      for(j=4-i;j>1;j--)
      {
          printf("  ");
      }
      for(w=0;w<=4*i;w++)
      {
          printf("*");
      }
      printf("\n");
  }
  for (p=0;p<8;p++)
  {
    printf("\t");
      for(r=0;r<=p;r++)
      {
          printf(" ");
      }
      for(q=m;q>0;q--)
      {
          printf("*");
      }
      m=m-2;
      printf("\n");
  }
}
void kiteProp()
{
  printf("\n\n\t\t\t***** WELCOME *****\n\n");
    printf("!! DEFINITION OF A KITE !!\n");
    printf(" A Kite is a quadrilateral whose four sides can be grouped into ");
    printf("two pairs of equal-length sides that are adjacent to each other. ");
    printf("\n\n");
    printf("!! PROPERTIES OF A KITE !!\n");
    printf(" 1. Two disjoint pairs of adjacent sides are equal. \n ");
    printf("2. One diagonal is the perpendicular bisector of the other ");
    printf("diagonal. \n 3. One diagonal is a line of symmetry (it divides ");
    printf("the quadrilateral into two congruent triangles that are mirror ");
    printf("images of each other). \n 4. One diagonal bisects a pair of ");
    printf("opposite angles. \n 5. The sum of interior angles of a Kite is ");
    printf("360 degrees. \n 6. One of the two diagonals of a convex kite ");
    printf("divides it into two isosceles triangles; the other (the axis of ");
    printf("symmetry) divides the kite into two congruent triangles. \n ");
    printf("7. The two interior angles of a kite that are on opposite sides ");
    printf("of the symmetry axis are equal. \n\n");
    printf("!! Perimeter OF A KITE !!\n");
    printf(" The Perimeter of a Kite is given as 2*(a+b) (where 'a', 'b' ");
    printf("are the lengths of the sides of the Kite,on the same side of the ");
    printf("axis of symmetry). \n\n");
    printf("!! AREA OF A KITE !!\n");
    printf(" The Area of a Kite is given by (1/2)*p*q (where 'p', 'q' are ");
    printf("the lengths of the diagonals of the Kite). \n It is also given ");
    printf("as a*b*sin(C) (Where 'a', 'b' are the lengths of sides on the ");
    printf("same side of the axis of symmetry and C is the measure of angle ");
    printf("between them.) \n\n ");
}
void APkite(void)
{
  int area,Perimeter,a,p,b,h,s1,s2;
  printf("Enter the diagonal1,diagonal2,side1,side2 of kite (with spaces) : ");
  scanf("%d %d %d %d",&b,&h,&s1,&s2);
  area = b*h;
  Perimeter = 2*(s1+s2);
  printf("With the parameters chosen input the calculated area and Perimeter ");
  printf("(with spaces) :");
  scanf("%d %d",&a,&p);
  if((area == a) && (Perimeter == p)){
      printf("Congratulations You have made correct Calculations");
  }
  else if(area!=a && Perimeter==p){
      printf("OOPS! You have done some mistake in area Calculation and made ");
      printf("correct Calculation in Perimeter\n");
      printf("Area of kite a = b*h \nCalculation is %d = %d*%d\n",area,b,h);
  }
  else if(Perimeter!=p && area==a){
     printf("OOPS! You have done some mistake in Perimeter Calculation and ");
     printf("made correct Calculation in area\n");
     printf("Perimeter of kite p = 2*(s1+s2) \nCalculation is  ");
     printf("%d = 2*(%d+%d)\n",Perimeter,s1,s2);
  }
  else{
     printf("OOPS! You have done some mistake in area Calculation and also ");
     printf("Perimeter Calculation\n");
     printf("Area of kite a = b*h \nCalculation is ");
     printf("%d = %d*%d\n",area,b,h);
     printf("Perimeter of kite p = 2*(s1+s2) \nCalculation is  ");
     printf("%d = 2*(%d+%d)\n",Perimeter,s1,s2);
  }
}
