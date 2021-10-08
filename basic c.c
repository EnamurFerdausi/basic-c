#include<stdio.h>
int main()
{
    {//this is a program that print my name
    printf("Enamur Rabbi Ferdausi\n Leading University\n");

      //write a program that prints floating,double number and character
    float num1 = 10.5;
    double num2 = 10.5255555555555554;
    char ch   = 'a';
    printf("num 1 = %f\n",num1);
    printf("num 2 = %lf\n",num2);
    printf("ch=%c\n",ch);
    }
    {

    //print an integer number
     int num,num1,num2;
    printf("please enter an integer :");
    scanf("%d",&num);
    printf("You have pressed : %d\n",num);

    printf("Enter first integer :");
    scanf("%d",&num1);

    printf("Enter second integer: ");

    scanf("%d",&num2);

    printf("Numbers are: %d %d\n ",num1,num2);
}

    {int i;
    float f;
    double d;
    char c;
    printf("size of int=%d\n",sizeof (i));
    printf("size of float=%d\n",sizeof (f));
    printf("size of double=%d\n",sizeof (d));
    printf("size of char=%d\n",sizeof (c));}

   {
    int n;
    printf("Enter Any ASCII Value: ");
    scanf("%d",&n);
    printf("The ASCII Character is:%c\n",n);}


    {char ch;
    printf("Enter any character: \n");
    scanf("%c",&ch);
    printf("The ASCII value is = %d\n",ch);}

{
    char lower;
    printf("Enter any lowercase letter: \n");
    scanf("%c",&lower);
    printf("The uppercase letter is : %c\n",lower-32);
}

{
    char upper;
    printf("Enter any uppercase letter: \n");
    scanf("%c",&upper);
    printf("The lowercase letter is: %c \n",upper+32);
}

{
   char lower,upper;
   printf("Enter any lowercase letter:\n ") ;
   scanf("%c",&lower);
   upper=toupper(lower);
   printf("uppercase letter=%c\n",upper);

}
{
   char lower,upper;
   printf("Enter any uppercase letter:\n ") ;
   scanf("%c",&upper);
   lower=tolower(upper);
   printf("lowercase letter= %c\n",lower);
}
{
  int number;
  printf("Decimal number=\n");
  scanf("%d",&number);
  printf("Octal number=%o\n",number);
  /*int number;
  printf("Octal number=");[octal to decimal]
  scanf("%o",&number);
  printf("Decimal number=%d",number);*/

}

{
  int number;
  printf("Decimal number=\n");
  scanf("%d",&number);
  printf("Hexa-decimal number=%x\n",number);
  /*int number;
    printf("Hexa-decimal number=");
    scanf("%x",&number);
    printf("Decimal number=%d",number);*/
}

{
   int number;
   printf("Octal number=\n");
   scanf("%o",&number);
   printf("Hexa-decimal number=%x\n",number);


 /*int number;
   printf("Hexa-decimal  number=");
   scanf("%x",&number);
   printf("Octal number number=%o",number); */
}
{
  //write a program that takes two integer and and display sum
  int num1,num2,sum,avg;

  printf("Enter two numbers:\n ");
  scanf("%d %d",&num1,&num2);
  sum=num1+num2;
  printf("The sum is : %d\n",sum);
  avg=(float) sum/2;//type casting
  printf("The average is = %.2f\n",avg);
}
{
   int num1,num2,result;
   printf("Enter two numbers:\n ") ;
   scanf("%d %d",&num1,&num2);

   result=num1+num2;
   printf("sum=%d\n",result);

   result=num1-num2;
   printf("sub=%d\n",result);

   result=num1*num2;
   printf("mul=%d\n",result);

   result=num1/num2;
   printf("div=%d\n",result);

   result=num1%num2;
   printf("reminder=%d\n",result);
}
{
    float base, height, area;
    printf("Enter base : %f\n",base);
    scanf("%f",&base);
    printf("Enter height : %f\n",height);
    scanf("%f",&height);
    area=0.5*base*height;
    printf("area=%f\n",area);
}
{
  //area=sqrt(s*(s-a)*(s-b)*(s-c))
  double a, b , c, s, area;
  printf("Enter 3 values:\n");
  scanf("%lf %lf %lf",&a,&b,&c);
  s=(a+b+c)/2;
  area=sqrt(s*(s-a)*(s-b)*(s-c));
  printf("area of tringle =%.2lf\n",area);
}
{
  //area of rectangle = length*width
  float length, wigth, area;
  printf("Enter length = \n ");
  scanf("%f",&length);
  printf("Enter wigth = \n");
  scanf("%f",&wigth);
  area = length*wigth;
  printf("area of rectangle = %2f\n",area);

}
{
  //area=3.1416*radius*radius
  float radius,area;
  printf("Enter radius :\n ");
  scanf("%f",&radius);

  area=3.1416*radius*radius;
  printf("Area of circle = %2f\n",area);
}
#include<math.h>
{
  //poridhi=2 pi*r*r
  float radius,area;
  printf("Enter radius : \n");
  scanf("%f",&radius);

  area=2*M_PI*radius*radius;
  printf("%f\n",area);
}
{ //F=(c*1.8)+32;
  float c,F;
  printf("Enter centigrade : \n") ;
  scanf("%f",&c)  ;
  F=(c*1.8)+32;
  printf("Farn=%2f\n",F);
}
{
  float c,f;
  printf("Enter farn :\n ");
  scanf("%f",&f);

  c=(f-32)/1.8;
  printf("Centigrade : %2f\n",c);
}

{   //swaping two numbers with temporary variable
    int num1=10;
    int num2=5;

    int temp;

    temp=num1;//temp=10
    num1=num2;//num1=5
    num2=temp;//num2=10
    printf("num1 =%d\n",num1);
    printf("num2 =%d\n",num2);
}

{
    // swap without temporary variable
    int num1=10;
    int num2=5;

    num1=num1-num2;//5
    num2=num1+num2;//10
    num1=num2-num1;//5
    printf("num1 =%d\n",num1);
    printf("num2 =%d\n",num2);
}
{
    double a,b,c,d,x1,x2;
    printf("Enter a b c = ");
    scanf("%lf %lf %lf",&a,&b,&c);
    d=sqrt(b*b-4*a*c);
    x1=(-b+d)/(2*a);
    x2=(-b-d)/(2*a);
   printf("x1 = %lf\n",x1);
   printf("x2 = %lf\n",x2);

}
{
  int result = abs(-25);//absolute value
  printf("%d\n",result);
}
{ //square root
    double result =sqrt(25);
    printf("%.2lf\n",result);

}
{
    //power
    double result=pow(5,2);
    printf("%.2lf\n",result);
}
{
    double x =1;
    double result = log10(x);
    printf("log10(%lf)=%lf\n",x,result);
}
{
    double x=5.35;
    double result=round(x);
    printf("round(%lf)=%lf\n",x,result);
}
{
    int x=10;
    int result = +x;
    printf("%d\n",result);//unary operator
}
{
    int x = 10;
    int y = ++x;//x++=post increment,++x=pre increment,--x=pre decrements,x--=post decrements
    printf("x = %d\n",x);
    printf("y = %d\n",y);
}
{
    int x=10;
    printf("%d\n",x++);//x=10
    printf("%d\n",x);//x=11
    printf("%d\n",++x);//x=12
    printf("%d\n",x);//x=12
    printf("%d\n",x--);//x=12
    printf("%d\n",--x);//x=10

}
{
    int num;
    printf("Enter an integer : ");
    scanf("%d",&num);
    if(num%2==0)
        printf("Even\n");
    else//if(num%2!=0)
        printf("Odd\n");
}
{
    int time=15;
    if (time==10)
    {
        printf("GOOD Morning tomato\n ");
        printf("Have a good day ");
    }
    else

        printf("sorry it's not morning potato\n");

}
{
    int num1,num2;
    printf("Enter first integer : \n");
    scanf("%d",&num1);
    printf("Enter second integer : \n");
    scanf("%d",&num2);
    if(num1>num2)
        printf("Large =%d\n",num1);
    else if(num1<num2)
        printf("Large =%d\n",num2);
    else
        printf("Numbers are  equal\n");

}
{
    float marks;
    if(marks>=80)
        printf("A+");
     else if(marks>=70)
        printf("A");
     else if(marks>=60)
        printf("A-");
     else if(marks>=50)
        printf("B");
     else if(marks>=40)
        printf("C");
     else if(marks>=33)
        printf("D");

    else
        printf("Fail\n");

}
{
    int num;
    printf("Enter any number: \n");
    scanf("%d",num);
    if(num%2==0)
        printf("Even\n");
    else
        printf("Odd\n");
}
{
    int num;
    printf("Enter any number : \n");
    scanf("%d",&num);
    if(num>0)
        printf("positive\n");
    else if(num<0)
        printf("negative\n");
    else
        printf("zero\n");
}
{
     int num1,num2;
     printf("Enter 2 numbers : \n");
     scanf("%d %d",&num1,&num2);
     if(num1>num2)
        printf("%d\n",num1);
     else if(num1<num2)
        printf("%d\n",num2);
     else
        printf("Equal\n");
}
{
    char ch;
    printf("Enter any letter :\n ");
    scanf("%c",&ch);
    if (ch=='a' || ch=='e' || ch=='i' || ch=='o'  || ch=='u')
        printf("vowel");
    else
        printf("consonant\n");
}
//write a program that read 3 numbers and display maximum
{
    int num1,num2,num3;
    printf("Enter three numbers : ");
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1>num2 && num1>num3)
       printf("Large number =%d\n",num1);
    else if(num2>num1 && num2>num3)
       printf("Large number =%d\n",num2);
    else if(num3>num1 && num3>num2)
       printf("Large number =%d\n",num3);
    else
       printf(" numbers are equal ");

}
{
    int year;
    printf("Enter any year :\n ");
    scanf("%d ",&year);
    if(year%400==0)
        printf("Leap year\n");
    else if(year%4==0 && year%100!=0)
        printf("Leap year\n");
    else
        printf("Not leap year\n");
}
{
    char ch;
    printf("Enter any letter :");
    scanf("%c",&ch);
    if (ch>='a' && ch<='z')
        printf("Small letter");
    else if(ch>='A' && ch<='Z')
        printf("Capital letter");
    else
        printf("Not a letter");
}
{
    char ch;
    printf("Enter any letter : ");
    scanf("%c",&ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
       ch=='A' || ch=='E' || ch=='I' || ch=='O' ||ch=='U')
        printf("Vowel");
    else
        printf("consonant");
}
{
    int mark;
    printf("Enter Mark :");
    scanf("%d",&mark);
    if(mark  >= 33)
        printf("pass");
    else
        printf("fail");
}
{
    int mark;
    printf("enter mark :");
    scanf("%d",&mark);
    if(mark>100 || mark<0)
        printf("Invalid Mark");
    else if(mark>=80 && mark<=100)
        printf("A+");
   else if(mark>=70 && mark<=79)
        printf("A");
    else if(mark>=60 && mark<=69)
        printf("A-");
    else if(mark>=50 && mark<=59)
        printf("B");
    else if(mark>=40 && mark<=49)
        printf("C");
    else if(mark>=33 && mark<=39)
        printf("D");

    else
        printf("F");

}
{
//switch keyword:switch,case,break,default
//write a program that reade a degit and display its spelling
int digit;
printf("Enter a digit : ");
scanf("%d",digit);
switch(digit)
   {

    case 0:
        printf("Zero\n");
        break;
    case 1:
       printf("One\n");
       break;
    case 2:
       printf("Two\n");
       break;
    case 3:
       printf("Three\n");
       break;
    case 4:
       printf("Four\n");
       break;
    case 5:
       printf("Five\n");
       break;
    case 6:
       printf("Six\n");
       break;
    case 7:
       printf("Seven\n");
       break;
    case 8:
       printf("Eight\n");
       break;
    case 9:
       printf("Nine\n");
       break;
    default:
       printf("Not a valid digit");
}
}
{
    char ch;
    printf("Enter any letter :");
    scanf("%c",&ch);
    switch(ch)
    {
       case('a'):
       case('e'):
       case('i'):
       case('o'):
       case('u'):
       case('A'):
       case('E'):
       case('I'):
       case('O'):
       case('U'):
           printf("vowel\n");
           break;
      default:
           printf("consonant\n");
    }
}
{
    int choice;
    float temp,convertedTemp;
    printf("Temperature conversation menu\n");
    printf("1.Fahrnheit to celsius");
    printf("2.celsius to fahrenheit");
    printf("Enter yourchoice : ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        {
            printf("Enter fahrnheit temperature :");
            scanf("%f",temp);
            convertedTemp=(temp-32)/1.8;
            printf("The temperature in celsius is :%f\n",convertedTemp);
            break;
         }
    case 2:
        {

            printf("Enter celsius temperature :");
            scanf("%f",temp);
            convertedTemp=(temp+32)/1.8;
            printf("The temperature in fahrnheit is :%f\n",convertedTemp);
        }
    default:
        printf("Not a correct option!");
    }
      {
          double num1,num2;
          char op;
          printf("Enter two numbers :\n");
          scanf("%lf %lf",&num1,&num2);
          printf("Enter an operator(=,-,*,/):");
          scanf("%c",&op);
          switch(op)
          {
          case '+':
            printf("%lf+%lf=%lf\n",num1,num2,num1+num2);
          case '-':
            printf("%lf-%lf=%lf\n",num1,num2,num1-num2);
          case '*':
            printf("%lf*%lf=%lf\n",num1,num2,num1*num2);
          case '/':
            printf("%lf/%lf=%lf\n",num1,num2,num1/num2);
          break;
          default:
                printf("Not a valid operator");
          }
      }

   {
       int num1,num2,large;
       printf("Enter two numbers :");
       scanf("%d %d",&num1,&num2);
       large=num1>num2|num1|num2|
       printf("large number=%d\n",large);

   }

{
   int i;
   for(i=1;i<1;i++)
    printf("c programming");
   scanf("%d\n",i);


}

{
    int i=1;
   while(i<=10)
   {


    printf("%d\n",i);
    }
   i++;

}
}

{
    int i=11;
    do  {
        printf("%d\n",i);
        i++;
    }
    while(i<=10);
}
{
    int i;
  for(i=2;i<=100;i+2)
    printf("%d\n",i);

}

{
     int i=1;
     print:
         printf("%d\t",i);
         i++;
         if(i<5)
    goto print;
}
{
    /*enter any number:3
    3*1=3
    3*2=6
    ... ...
    3*10=30
    */
    while(1){
    int num,i;
    printf("Enter any number: ");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    {
        printf("%d  x%d = %d\n",num,i,num*i);
    }

}
}
{
   int i,fact =1,n;
   printf("Enter any positive number:");
   scanf("%d",&n);
   for(i=1;i<n;i++)
   {
       fact=fact*i;
   }
   printf("%d\n",fact);
}
{
    //prime number
    int num,count=0,i;
    printf("Enter any number:");
    scanf("%d\n",num);
    for(i=2;i<num;i++)
    {
        if(num%1==0)
        {
            count++;
            break;
        }
    }
    if (count==0)
        printf("prime number\n");
    else
        printf("Not prime number\n");
}
{
    int num1,num2,n1,n2,rem,gcd,lcm;
    printf("Enter two numbers:");
    scanf("%d %d\n",&num1,&num2);
    n1 = num1;
    n2 = num2;
    while(n2!=0)
    {
        rem=n1%n2;
        n1=n2;
        n2=rem;

    }
    gcd=n1;
    lcm=(num1*num2)/gcd;
    printf("gcd=%d\n",gcd);
    printf("lcm=%d\n",lcm);
}
{
    //sum of digits
    int num,temp,r,sum=0;
    printf("Enter any number :");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        r=temp%10;
        sum=sum+r;
        temp=temp/10;

    }
    printf("Sumof digits: \n");
}
{
     //reverse a number
    int num,temp,r,sum=0;
    printf("Enter any number :");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        r=temp%10;
        sum=sum*10+r;
        temp=temp/10;

    }
    printf("reverse of digits: \n");

}
{

     int num,temp,r,sum=0;
    printf("Enter any number :");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        r=temp%10;
        sum=sum*10+r;
        temp=temp/10;

    }
    if(sum==num)
    printf("palindrome number");
    else
        printf("not valid");

}

{

    int num,temp,r,sum=0;
    printf("Enter any number :");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        r=temp%10;
        sum=sum*r*r*r;
        temp=temp/10;

    }
   if(num==sum)
    printf("armstrong\n");
   else
    printf("not armstrong\n");

}

{
    //counting number of a digit in an integer
   int num,count;
    num=123;
    count=0;
    while(num!=0)
    {
        num=num/10;
        ++count;
    }
    printf("total number of digit:");
}
{
    int num,sum=0,rem,temp,fact,i;
    printf("Enter an integer:");
    scanf("%d\n",num);
    temp=num;
    while(temp!=0)
    {
        rem=temp%10;fact=1;
        for(i=1;i<=rem;i++)
        {
            fact=fact*1;
        }
        sum=sum*fact;
        temp=temp/10;
    }
    if(sum==num)
    {
        printf("strong number");
    }
    else
        printf("not a strong number");
}

//1+2+3+... ...+n
int n;
printf("Enter the last number : ");
scanf("%d",&n);
printf("1+2+3+... ...+n %d",n);













































































































































     return 0;





   }



























