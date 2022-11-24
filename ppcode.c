#include<stdio.h>
void add(int a, int b)
{
int total;
total=a+b;
printf("addition of %d and %d=%d \n ",a ,b,total);
}


void sub(int a, int b)
{
int total;
total=a-b;
printf("substraction of %d and %d=%d \n ",a ,b,total); //creating function
}

void multiply(int a, int b)
{
int total;
total=a*b;
printf("multiply of %d and %d=%d \n ",a ,b,total);
}

void div(int a, int b)
{
int total;
total=a/b;
printf("multiply of %d and %d=%d \n ",a ,b,total);
}
//now creating main function so that i can call function one by one
int main()
{
    int ch;
    

    printf("Enter 1 for addition\n Enter 2 for substraction\nEnter 3 for multiplication\n Enter 4 for divison\n enter 5 for exit ");
scanf("%d",&ch);
if (ch==1)
{
int num1,num2;
printf("Enter two number addition:");
scanf("%d",& num1);
scanf("%d",& num2);
add(num1,num2);


}
else if(ch==2){
int num1,num2;
printf("Enter two number substraction:");
scanf("%d",& num1);
scanf("%d",& num2);

sub(num1,num2);

}


else if(ch==3){
int num1,num2;
printf("Enter two number multiplication:");

scanf("%d",& num1);
scanf("%d",& num2);
 multiply(num1,num2);


}

else if(ch==3){
int num1,num2;
printf("Enter two number division:");

scanf("%d",& num1);
scanf("%d",& num2);
div(num1,num2);

}
else if(ch ==5 )
{
    printf("thanks for using calc");
}
else {
    printf("please select number which are in option");
}
return 0;
}