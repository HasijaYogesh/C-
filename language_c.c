// *********Product of a & b **************

// #include<stdio.h>

// int main() {

//     int a,b;
//     printf("Enter a\n");
//     scanf("%d", &a);

//     printf("Enter b\n");
//     scanf("%d", &b);

//     printf("Product of a & b is %d", a*b);

//     return 0;
// }

// **************Size of int, char & double********
// #include <stdio.h>

// int main() {
//     printf("%lu\n", sizeof(int));
//     printf("%lu\n", sizeof(char));
//     printf("%lu\n", sizeof(double));

//     return 0;
// }

// ****************Multiplication table of a number****************

// #include <stdio.h>

// int main() {
//     int i;
//     printf("Enter a number for printing a table: ");
//     scanf("%d", &i);

//     printf("%d x 1 = %d\n",i,i*1);
//     printf("%d x 2 = %d\n",i,i*2);
//     printf("%d x 3 = %d\n",i,i*3);
//     printf("%d x 4 = %d\n",i,i*4);
//     printf("%d x 5 = %d\n",i,i*5);
//     printf("%d x 6 = %d\n",i,i*6);
//     printf("%d x 7 = %d\n",i,i*7);
//     printf("%d x 8 = %d\n",i,i*8);
//     printf("%d x 9 = %d\n",i,i*9);
//     printf("%d x 10 = %d\n",i,i*10);
//     printf("Thank you");

//     return 0;
// }

// **************** You will get Rs 15 if you pass Math or Science & Rs 45 if you pass both******************
// #include <stdio.h>

// int main () {
//     int n;
//     printf("Enter number: 1. if you pass Math, 2. if you pass Science, 3. if you pass Math & Science -\n");
//     scanf("%d", &n);

//     if (n==1) {
//         printf("You got a gift of Rs 15");
//     }

//     else if (n==2) {
//         printf("You got a gift of Rs 15");
//     }

//     else if (n==3) {
//         printf("You got a gift of Rs 45");
//     }

//     else {
//         printf("Invalid output");
//     }

//     return 0;
// }

// ****************** Enter a number to output the day of week using switch function****************
// #include <stdio.h>

// int main() {
//     int day;
//     printf("Enter a day(1-7): ");
//     scanf("%d", &day);

//     switch(day) {

//         case 1:
//         printf("Your day is Monday");
//         break;
//         case 2:
//         printf("Your day is Tuesday");
//         break;
//         case 3:
//         printf("Your day is Wednesday");
//         break;
//         case 4:
//         printf("Your day is Thursday");
//         break;
//         case 5:
//         printf("Your day is Friday");
//         break;
//         case 6:
//         printf("Your day is Saturday");
//         break;
//         case 7:
//         printf("Your day is Sunday");
//         break;

//         default:
//         printf("Invalid Input");
//     }

//     return 0;
// }

// *************** Its a loop to print a multiplication table entered by user (by do while loop)******************
// #include <stdio.h>

// int main() {
//     int num, index=1, i=1;
//     printf("Enter a number: ");
//     scanf("%d", &num);

//     do
//     {
//         printf("%d\t", num*i++);
//         index=index+1;

//     } while (index<=10);

//     return 0;
// }

// ************ Sum of all natural number by "for" loop***********************
// #include <stdio.h>

// int main(){
//     int i, n, sum=0;
//     printf("Enter a number: \n");
//     scanf("%d", &n);

//     for ( i=0; i<=n; i++)
//     {
//         sum=sum+i;
//         printf("i is %d\n", i);
//     }

//     printf("Sum of all numbers is %d", sum);

//     return 0;
// }

// ***************Sum of all odd natural number by "for" loop*****************
// #include <stdio.h>

// int main() {
//     int n, i, sum=0;
//     printf("Enter a number: ");
//     scanf("%d", &n);

//     for(i=1; i<=n; i+=2) {
//             sum = sum +i;
//     }

//     printf("Sum of all odd number is %d", sum);
// }

// ***************Semi pyramid star pattern using "for loop"****************
// #include <stdio.h>

// int main() {
//     int i, j, rows;
//     printf("Enter number of rows: ");
//     scanf("%d", &rows);

//     for (i=1; i<=rows; i++) {
//         for(j=1;j<=i; j++) {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// ****************For loop, input 10 numbers and output sum & average of 10 numbers************
// #include <stdio.h>

// int main() {
//     int i, n, sum=0;
//     int avg;

//     printf("Enter 10 numbers: ");

//     for(i=1;i<=10;i++) {
//         printf("Number - %d",i);
//         scanf("%d",&n);
//         sum=sum+n;
//     }
//     avg=(sum/10);
//     printf("The sum is %d\nThe average is %d\n", sum, avg);

//     return 0;

// }

// ***********This loop will take input and enter cube of number till the number entered by user*****************
// #include <stdio.h>

// int main() {
//     int i, n;
//     printf("Enter the number: ");
//     scanf("%d", &n);

//     for(i=1; i<=n; i++) {
//         printf("Cube of %d is %d\n", i, i*i*i);
//     }

//     return 0;
// }

// **********Pattarn of right angled triangle with numbers instead of "*" with for loop********************
// #include <stdio.h>

// int main() {
//     int i, j, rows;
//     printf("Enter number of rows: ");
//     scanf("%d", &rows);

//     for (i=1; i<=rows; i++) {
//         for(j=1;j<=i; j++) {
//             printf("%d",i);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// ***********IT WILL TAKE INPUT FROM USER & OUTPUT WILL BE THE FACTORIAL OF THAT NUMBER************
// #include <stdio.h>

// int main() {
//     int i, n, f=1;
//     printf("Enter the number for factorial: ");
//     scanf("%d", &n);

//     for(i=1; i<=n; i++) {
//         f=f*i;
//     }
//     printf("Factorial of %d is %d", n, f);

//     return 0;
// }

// ********IF INPUT IS 3, OUTPUT WILL BE 9  99 999, SUME =1107, IT MAKES A SERIES OF 9*****************
// #include <stdio.h>
// int main() {
//     int i,n,t=9, sum=0;
//     printf("Enter the number: ");
//     scanf("%d", &n);

//     for(i=1;i<=n;i++) {
//         sum=sum+t;
//         printf("%d\t", t);
//         t=t*10+9;
//     }
//     printf("\nThe sum of the series is %d", sum);
//     return 0;
// }

// *****************THIS FUNCTION WILL TAKE A AGE AND OUTPUT WHEATHER YOU ARE ELIGIBLE TO DRIVE USING BREAK IN LOOP***********************
// #include <stdio.h>

// int main() {
//     int age, i;
//     printf("Enter your age: ");
//     scanf("%d", &age);

//     for(i=1;;i++) {
//         if (age<18) {
//             printf("You are not eligible to drive!\n");
//             printf("Enter your age: ");
//             scanf("%d", &age);
//         }
//         else {
//             printf("Great! You are eligible to drive.");
//             break;
//         }
//     }
//     return 0;
// }

// **************THIS WILL INPUT 2 NUMBERS AND OUTPUT WILL BE THE SUM USING FUNCTION**************
// #include <stdio.h>

// int sum(int a, int b);

// int main() {
//     int x, y;
//     printf("Enter first num: ");
//     scanf("%d", &x);
//     printf("Enter second num: ");
//     scanf("%d", &y);

//     sum(x,y);

//     return 0;
// }

// int sum(int a, int b) {
//     int s;
//     s=a+b;
//     printf("Sum is %d", s);
// }

// *************FIND A SQUARE OF A NUMBER USING FUNCTION******************
// #include <stdio.h>

// int squr(int a);

// int main() {
//     int x;
//     printf("Enter the number for returning it's square: ");
//     scanf("%d", &x);

//     squr(x);

//     return 0;
// }

// int squr(int a) {
//     int s;
//     s = a*a;
//     printf("The square of %d is %d", a, s);
// }

// *****************IT WILL TAKE INPUT AND RETURN FACTORIAL OF NUMBER*****************
// #include <stdio.h>

// int factorial(int number) {
//     if (number == 0 || number == 1) {
//         return 1;
//     }
//     else {
//         return (number * factorial(number-1));
//     }
// }

// int main() {
//     int num;
//     printf("Enter the number for factorial: ");
//     scanf("%d", &num);

//     printf("The factorial of %d is %d", num, factorial(num));

//     return 0;
// }


// ************IT WILL TAKE INPUT AS RADIUS OF CIRCLE AND GIVE OUTPUT AS DIAMETER, CIRCUMFRENCE & AREA OF CIRCLE********************
// #include <stdio.h>

// double diameter(double r) {
//     return (2*r);
// }

// double circum(double r) {
//     return 2*3.14*r;
// }

// double area(double r) {
//     return 3.14*r*r;
// }

// int main() {
//     float r, dia, cir, ar;
//     printf("Enter radius of circle: \n");
//     scanf("%f", &r);

//     dia=diameter(r);
//     cir=circum(r);
//     ar=area(r);
//     printf("The diameter of circle is %.2f\n", dia);
//     printf("The circumfrence of circle is %.2f\n", cir);
//     printf("The area of circle is %.2f\n", ar);
//     printf("Thank you!");
    

//     return 0;
// }


// ********************THIS FUNCTION WILL TAKE KILOMETER AS INOUT, WILL CONVERT AND RETURN IN MILES*********************
// #include <stdio.h>

// double kilometer(double n) {
//     return (n*0.62);
// }

// int main() {
//     float n, kilo;
//     printf("Enter kilometer for miles: ");
//     scanf("%f", &n);

//     kilo=kilometer(n);

//     printf("\n%.2f Kilometer in Miles is %.2f", n, kilo);

//     return 0;
// }

// **************************THIS LOOP WILL PRINT THE ARRAY OF 2 ROWS & 4 COLOUMN************************
// #include <stdio.h>

// int main() {
//     int i,j;
//     int marks[2][4] = {{1,2,3,4},{4,3,2,1}};

//     for(i=0;i<2;i++) {
//         for(j=0;j<4;j++) {
//             printf("The value of %d, %d element of array is %d\n", i, j, marks[i][j]);
//         }
//         printf("\n\n");
//     }

//     return 0;
// }


// *********************************THIS CODE CONVERTES THE BELOW GIVEN UNIT TO ANOTHER UNIT************************************
// ***********************KMS TO MILES, INCHES TO FOOT, CMS TO INCHES, POUND TO KGS, INCHES TO METER*************************
// #include <stdio.h>

// int main() {

//     char input;
//     float kmstomiles = 0.621371;
//     float inchestofoot = 0.0833333;
//     float cmstoinches = 0.393701;
//     float poundtokgs = 0.453592;
//     float inchestometer = 0.0254;
//     float unit;

//     while(1) {

//         printf("Enter \n1. for kms to miles\n2. for inches to foot\n3. for cms to inches\n4. for pounds to kgs\n5. for inches to meters\nq for quit\n");
//         scanf(" %c", &input);
//         switch (input)
//         {
//         case 'q':
//         printf("Exited for the program!");
//         goto end;
//         break;

//         case '1':
//         printf("Enter the unit to be converted: ");
//         scanf("%f", &unit);
//         printf("%.2f Kms in Miles is %.2f\n\n\n", unit, unit*kmstomiles);
//         break;

//         case '2':
//         printf("Enter the unit to be converted: ");
//         scanf("%f", &unit);
//         printf("%.2f Inches in Foot is %.2f\n\n\n", unit, unit*inchestofoot);
//         break;

//         case '3':
//         printf("Enter the unit to be converted: ");
//         scanf("%f", &unit);
//         printf("%.2f Cms in Inches is %.2f\n\n\n", unit, unit*cmstoinches);
//         break;

//         case '4':
//         printf("Enter the unit to be converted: ");
//         scanf("%f", &unit);
//         printf("%.2f Pounds in Kgs is %.2f\n\n\n", unit, unit*poundtokgs);
//         break;

//         case '5':
//         printf("Enter the unit to be converted: ");
//         scanf("%f", &unit);
//         printf("%.2f Inches in Meter is %.2f\n\n\n", unit, unit*inchestometer);
//         break;
        
//         default:
//             break;
//         }

//         }
//         end:
//         return 0;
// }


// *******************THIS CODE WILL PRINT Nth TERM OF FIBONACCI SERIES*****************
// #include <stdio.h>

// int fib(int n);


// int main() {
//     int n;
//     printf("Enter the Nth term of Fibonacci series: ");
//     scanf("%d", &n);

//     printf("No. on %dth term is %d", n, fib(n));

//     return 0;
// }


// int fib(int n) {
//     if (n==0) {
//         return 0;
//     }
//     if (n==1) {
//         return 1;
//     }
//     int fibNm1 = fib(n-1);
//     int fibNm2 = fib(n-2);
//     int fibN = fibNm1 + fibNm2;

//     return fibN;
// }


// **************THIS IS A CALL BY REFERENCE FUNCTION WHICH SWAP THE TWO INTEGERS**************
// #include <stdio.h>

// void swap(int *x, int *y) {
//     int temp;
//     temp=*x;
//     *x=*y;
//     *y=temp;
//     return;
// }

// int main() {
//     int a = 34, b = 74;
//     printf("The value of a is %d, value of b is %d\n", a, b);
//     swap(&a,&b);
//     printf("The value of a is %d, value of b is %d\n", a, b);
//     return 0;
// }


// ***************THIS IS A CALL BY REFRENCE FUNCTION WHICH TAKES 2 INTEGERS(A&B) & WILL MAKE THEM AS A=A+B, B=A-B****************************
// #include <stdio.h>

// void newab(int *a, int*b) {
//     int add, sub;
//     add = *a + *b;
//     sub = *a - *b;
//     *a = add;
//     *b = sub;
//     return;
// }

// int main() {
//     int x=10, y=5;
//     printf("The old value of x is %d & y is %d\n", x, y);
//     newab(&x, &y);
//     printf("The new value of x is %d & y is %d\n", x, y);

//     return 0;
// }

// ********************THIS FUNCTION WILL PRINT THE ARRAY OF 2X2******************************
// #include <stdio.h>

// void func1(int arr[2][2]) {

//     for (int i=0;i<2;i++) {
//         for(int j=0;j<2;j++) {
//             printf("The value at %d, %d is %d\n", i, j, arr[i][j]);
//         }       
//     }
// }


// *******************THIS FUNCTION WILL TAKE AN ARRAY AND INPUT THE ODD AND EVEN FUNCTION OF AN ARRAY*******************
// #include <stdio.h>

// void evenfunc(int array[5]) {
//     int max=array[0], i;
//     for (int i=1; i<5; i++) {
//         if (array[i]%2==0){
//             if (max<array[i]){
//                 max=array[i];
//                 }       
//         }    
//     }
//     printf("Even max = %d\n",max);
// }

// void oddfunc(int array[5]) {
//     int max1=array[0], i;
//     for ( int i=1; i<5; i++) {
//         if (array[i]%2!=0){
//             if (max1<array[i]){
//                 max1=array[i];
//                 }       
//         }    
//     }
//     printf("Odd max = %d\n",max1);
// }

// int main() {
//     int arr[5]={389,968,257,762,1001};
//     oddfunc(arr);
//     evenfunc(arr);

//     return 0;
// }


// ***********THIS FUNCTION WILL TAKE INPUT TYPE OF STAR PATTERN AS WELL AS ROWS OF STAR PATTERN AND WILL PRINT THE PATTERN ACCORDINGLY********************
// #include <stdio.h>

// void starpattern(int rows) {
//     for (int i=0;i<rows;i++){
//         for(int j=0;j<=i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }

// }

// void reversedstarpattern(int rows) {
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<=rows-i-1;j++){
//             printf("*");
//         }
//         printf("\n");
//     }

// }

// int main() {
//     int type, rows;
//     printf("Enter 0 for star pattern & 1 for reversed star patter:\n");
//     scanf("%d", &type);

//     switch (type)
//     {
//     case 0:
//     printf("How many rows you want to print: \n");
//     scanf("%d", &rows);
//     starpattern(rows);        
//         break;

//     case 1:
//     printf("How many rows you want to print: \n");
//     scanf("%d", &rows);
//     reversedstarpattern(rows);  
//         break;    
    
//     default:
//     printf("You have entered invalid output!");
//         break;
//     }
//     return 0;
// }


// **************THIS CODE WILL INPUT A STRING AND PRINT IT***************
// #include <stdio.h>

// void printstr(int i){

// }

// int main() {
//     char str[50];
//     printf("Enter the string to print it: \n");
//     gets(str);
//     puts(str);

//     return 0;
// }


// *********THIS CODE WILL TAKE INPUT OF 10 ELEMENTS IN ARRAY & PRINT IT********************
// #include <stdio.h>

// int main() {
//     int arr[10];
//     int i;
//     printf("Enter 10 elements of an array: \n");
//     for (i=0; i<10; i++) {
//         scanf("%d", &arr[i]);
//     }
//     for(i=0;i<10;i++) {
//         printf("%d\t", arr[i]);
//     }
//     return 0;
// }



// THIS CODE WILL TAKE N NUMBER OF INPUT OF AN ARRAY FROM USER AND PRINT THE ARRAY IN ORIGINAL & REVERSED FORMAT************
// #include <stdio.h>

// int main() {
//     int arr[3];
//     int i, n;
//     printf("Enter number of element in an array: ");
//     scanf("%d", &n);
//     for (i=0; i<n; i++) {
//         printf("Enter %dth elements of an array: ", i);
//         scanf("%d", &arr[i]);
//     }
//     for (i=0; i<n; i++) {
//         printf("%d\t", arr[i]);
//     }
//     printf("\n");
//     for(i=(n-1);i>=0;i--) {
//         printf("%d\t", arr[i]);
//     }
//     return 0;
// }



//*****************THIS IS AN EXAMPLE OF STRUCTURE WHICH CONTAINS INFORMATION OF 3 STUDENTS AND PRINT IT***************** 
// #include <stdio.h>
// #include <string.h>

// struct student
// {
//     char name[20];
//     int roll_no;
//     float marks;
// };

// int main() {
//     struct student e1,e2,e3;
//     e1.roll_no=101;
//     e1.marks=96.5;
//     e2.roll_no=102;
//     e2.marks=89.2;
//     e3.roll_no=103;
//     e3.marks=55.8;
//     strcpy(e1.name, "Ramesh");
//     strcpy(e2.name, "Suresh");
//     strcpy(e3.name, "Mukesh");

//     printf("1st student:\nName - %s\n", e1.name);
//     printf("Roll no. - %d\nMarks - %0.2f\n\n", e1.roll_no, e1.marks);
//     printf("2nd student:\nName - %s\n", e2.name);
//     printf("Roll no. - %d\nMarks - %0.2f\n\n", e2.roll_no, e2.marks);
//     printf("3rd student:\nName - %s\n", e3.name);
//     printf("Roll no. - %d\nMarks - %0.2f\n\n", e3.roll_no, e3.marks);


//     return 0;
// }


// ***************CHECK WHEATHER THE INPUT NUMBER IS PRIME OR NOT*****************************
// #include <stdio.h>

// int main() {
//     int n, i, count=0;

//     printf("Enter the number to check for prime number: \n");
//     scanf("%d", &n);

//     for(i=1;i<=n;i++) {
//         if (n%i==0){
//             count++;
//         }
//     }
//     if (count==2) {
//         printf("Its a prime number...");
//         }
//         else {
//         printf("Not a prime number...");
//         }
//     return 0;
// }


// **********************ITS AN INCOMPLETE CODE TOLD BY DEVRAJ*************************************************
// #include <stdio.h>

// int hello() {

//     printf("Hello World\n");
// }

// int factorial() {
//     int a, b=1;
//     printf("Enter the number for factorial:\n");
//     scanf("%d", &a);

//     for(int i=1; i<=a; i++){
//         b=i*b;
//     }
//     printf("The factorial of %d is %d\n", a, b);

//     return 0;
// }

// int fib() {
//     int n;
//     printf("Enter the Nth term of Fibonacci series: ");
//     scanf("%d", &n);
//     if (n==0) {
//         return 0;
//     }
//     if (n==1) {
//         return 1;
//     }
//     int fibNm1 = fib(n-1);
//     int fibNm2 = fib(n-2);
//     int fibN = fibNm1 + fibNm2;

//     printf("No. on %dth term is %d", n, fibN);
//     return 0;
// }

// int main() {
//     int z;
    
//     label:
//     printf("Enter 0 for Hello World, 1 for factorial, 2 for fibonacci series & 3 for exit: \n");
//     scanf("%d", &z);

//     switch (z)
//     {
//     case 0:
//     hello();
//     goto label;
//         break;

//     case 1:
//     factorial();
//     goto label;
//         break;
    
//     case 2:
//     fib();
//     goto label;
//         break;

//     case 3:
//     goto exit;
//         break;

//     default:
//     printf("Invalid value!");

//     }
//     exit:
//     return 0;
// }


// ********************THIS CODE WILL REVERSE THE ARRAY AND PRINT THE ARRAY BEFORE AND AFTER REVERSING********************
// #include <stdio.h>

// void Reversearray(int arr[]) {
//     int temp;
//     for (int i=0;i<(10/2);i++){
//         temp=arr[i];
//         arr[i]=arr[9-i];
//         arr[9-i]=temp;
//     }
// }

// void Actualarray(int arr[]) {

//     for(int i=0; i<10;i++) {
//         printf("The value at index %d is %d\n", i, arr[i]);
//     }

// }

// int main() {
//     int arr[10]={1,2,3,4,5,6,7,8,9,10};
//     printf("Array before reversal:\n");
//     Actualarray(arr);
//     Reversearray(arr);
//     printf("\n\nArray after reversal:\n");
//     Actualarray(arr);

//     return 0;
// }


// **********************THIS CODE WILL TAKE INPUT OF 2 ARRAY AND RETURN A 3RD ARRAY WHICH IS SUM OF 2 USER GIVEN ARRAY**********************
// #include <stdio.h>

// int main() {
//     int arr[3][3];
//     int brr[3][3];
//     int crr[3][3];

//     printf("Enter the 1st array:\n");
//     for(int i=0; i<3;i++){
//         for(int j=0;j<3; j++) {
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     printf("Enter the 2nd array:\n");
//     for(int i=0;i<3;i++) {
//         for(int j=0;j<3;j++){
//             scanf("%d", &brr[i][j]);
//         }
//     }
//     printf("1st array is as follows: \n");
//     for(int i=0;i<3;i++) {
//         for(int j=0;j<3;j++) {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
//     printf("2nd array is as follows:\n");
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++) {
//             printf("%d ", brr[i][j]);
//         }
//         printf("\n");
//     }
//     for(int i=0;i<3;i++) {
//         for(int j=0;j<3;j++){
//             crr[i][j]=(arr[i][j]) + (brr[i][j]);
//         }
//     }
//     printf("The additional array of 1st & 2nd is as follows: \n");
//     for(int i=0;i<3;i++) {
//         for(int j=0;j<3;j++) {
//                 printf("%d ", crr[i][j]);   
//             }
//             printf("\n");
//         }    

//     return 0;
// }


// *****************THIS CODE WILL TURN "<H1>    THIS IS HEADING      <H1>" TO "THIS IS HEADING", IT WILL REMOVE <H1> & BLANKE SPACES**************
// #include <stdio.h>
// #include <string.h>

// void parse(char*string) {
//     int in=0;
//     int index=0;

//     for(int i=0;i<strlen(string);i++) {
//         if(string[i]=='<'){
//             in=1;
//             continue;
//         }
//         else if(string[i]=='>'){
//             in=0;
//             continue;
//         }
//         if(in==0){
//             string[index]=string[i];
//             index++;
//         }
//     }
//     string[index]='\0';

//     while(string[0]==' '){
//         for(int i=0;i<strlen(string);i++){
//             string[i]=string[i+1];
//         }
//     }
//     while((string[strlen(string)-1]==' ')) {
//             string[strlen(string)-1] = '\0';   
//     }
// }


// int main() {
//     char string[100]="<h1>       this is a heading          <h1>";
//     parse(string);
//     printf("The new string is *%s*", string);

//     return 0;
// }


// INCOMPLETE CODE*************INCOMPLETE CODE FOR REMOVING BLANK SPACES FROM A STRING**********************
// #include <stdio.h>

// char *remove_spaces(char* string) {
//     int i=0, j=0;

//     while(string[i]) {
//         if(string[i]!=' ') {
//             string[j++]=string[i];
//             i++;
//         }
//     }
//     string[j]='\0';

//     return string;
// }

// int main() {
//     char string[50];
//     printf("Enter the string to remove spaces: \n");
//     gets(string);
//     printf("The orginal string is*%s*\n", string);
//     remove_spaces(string);
//     printf("The string after removing spaces is*%s\n*", string);

//     return 0;
// }


// *************THIS IS A EXAMPLE OF STRUCTURE WHICH TAKES DETAILS AS INPUT OF 3 DRIVERS AND PRINT IT ON THE SCREEN*****************
// #include <stdio.h>

// struct Drivers_details
// {
//     char name[20];
//     int driving_licence_no;
//     char route[50];
//     int kms_travelled;
// };

// int main() {
//     struct Drivers_details d1, d2, d3;

//     printf("---Welcome to the software---\n");

//     //**Taking input of driver 1**
//     printf("Enter your Name: \n");
//     scanf("%s", &d1.name);
//     printf("Enter your driving licence number : \n");
//     scanf("%d", &d1.driving_licence_no);
//     printf("Enter your route: \n");
//     scanf("%s", &d1.route);
//     printf("Enter your kilometers travelled: \n");
//     scanf("%d", &d1.kms_travelled);
//     printf("Thank you for entering your details\n\n");

//     // **Taking input of driver 2**
//     printf("Enter your Name: \n");
//     scanf("%s", &d2.name);
//     printf("Enter your driving licence number : \n");
//     scanf("%d", &d2.driving_licence_no);
//     printf("Enter your route: \n");
//     scanf("%s", &d2.route);
//     printf("Enter your kilometers travelled: \n");
//     scanf("%d", &d2.kms_travelled);
//     printf("Thank you for entering your details\n\n");

//     // **Taking input of driver 3**
//     printf("Enter your Name: \n");
//     scanf("%s", &d3.name);
//     printf("Enter your driving licence number : \n");
//     scanf("%d", &d3.driving_licence_no);
//     printf("Enter your route: \n");
//     scanf("%s", &d3.route);
//     printf("Enter your kilometers travelled: \n");
//     scanf("%d", &d3.kms_travelled);
//     printf("Thank you for entering your details\n\n");

//     // **Printing detail of Driver 1**
//     printf("Details of Driver 1: \n");
//     printf("Name - %s\n", d1.name);
//     printf("Driving licence number - %d\n", d1.driving_licence_no);
//     printf("Route - %s\n", d1.route);
//     printf("Kilometers Travelled - %d\n\n",d1.kms_travelled);

//     // **Printing detail of Driver 2**
//     printf("Details of Driver 2: \n");
//     printf("Name - %s\n", d2.name);
//     printf("Driving licence number - %d\n", d2.driving_licence_no);
//     printf("Route - %s\n", d2.route);
//     printf("Kilometers Travelled - %d\n\n",d2.kms_travelled);

//     // **Printing detail of Driver 3**
//     printf("Details of Driver 3: \n");
//     printf("Name - %s\n", d3.name);
//     printf("Driving licence number - %d\n", d3.driving_licence_no);
//     printf("Route - %s\n", d3.route);
//     printf("Kilometers Travelled - %d\n\n",d3.kms_travelled);
    
//     printf("*****All details printed*****/n/n");

//     return 0;
// }

// ***************THIS IS A CODE WHICH USE MALLOC TO INPUT AN ARRAY BY USER AND THEN PRINT THE ARRAY*****************
// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int *ptr;
//     int n;

//     ptr=(int*)malloc(n*sizeof(int));

//     printf("Enter the size of an array: \n");
//     scanf("%d", &n);

//     for(int i=0;i<n;i++) {
//         printf("Enter the %d element of an array:\n", i);
//         scanf("%d", &ptr[i]);
//     }
//     for(int i=0;i<n;i++) {
//         printf("The %d index has value - %d\n", i, ptr[i]);
//     }

//     return 0;
// }


// *************THIS CODE WILL INPUT A ARRAY WITH MALLOC & PRINT THE SAME, AFTER THAT, IT WILL INPUT NEW ARRAY USING REALLOC & PRINT THE NEW ARRAY, AFTER THAT IT WILL FREE THE MEMORY USING FREE FUNCTION**************
// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int *ptr;
//     int n;

//     ptr=(int*)malloc(n*sizeof(int));

//     printf("Enter the size of an array: \n");
//     scanf("%d", &n);

//     for(int i=0;i<n;i++) {
//         printf("Enter the %d element of an array:\n", i);
//         scanf("%d", &ptr[i]);
//     }
//     for(int i=0;i<n;i++) {
//         printf("The %d index has value - %d\n", i, ptr[i]);
//     }

//     // Reallocation of an array
//     printf("Enter the new size of an array\n");
//     scanf("%d", &n);

//     ptr=(int*)realloc(ptr,n*sizeof(int));

//     for(int i=0;i<n;i++) {
//         printf("Enter the %d element of an array:\n", i);
//         scanf("%d", &ptr[i]);
//     }
//     for(int i=0;i<n;i++) {
//         printf("The new %d index has value - %d\n", i, ptr[i]);
//     }

//     free(ptr);

//     return 0;
// }


// ********************THIS CODE WILL TAKE INPUT(EMPLOYEE ID) & PRINT IT. ALSO, IT WILL REPEAT THE PROCESS 3 TIMES WHILE MAKING THE PREVIOUS MEMORY FREE*******************
// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// int main() {
//     char* ptr;
//     int i=0, chars;

//     printf("\n\n******Welcome to the software******\n\n");

//     while(i<3){
//         printf("\nEmployee %d: Enter the length of your employee id:\n", i+1);
//         scanf("%d", &chars);
//         ptr=(char*)malloc((chars+1)*sizeof(char));
//         printf("Enter your employee id\n");
//         scanf("%s", ptr);
//         printf("Your employee id is %s\n", ptr);
//         free(ptr);
//         i=i+1;
//     }

//     printf("\n\n******Thank you******\n\n");

//     return 0;
// }


// ***************~~SPECIAL CODE~~~~~THIS IS THE FIRST GAME BUILT, WHICH IS ROCK, PAPER, SCISSORS:):):):)**********************************************

// IGNORE THIS WORKING FORM HERE
// Rock(0) -- Sciser(1) == Rock(0)
// Rock(0) -- Paper(2) == Paper(2)
// Scicer(1) -- Rock(0) = Rock(0)
// Scicer(1) -- Paper(2) = Scicer(1)
// Paper(2) -- Rock(0) = Paper(2)
// Paper(2) -- Scicer(1) = Scicer(1)
// IGNORE THIS WORKING TILL HERE


// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int generaterandom(int a) {
//     srand(time(NULL));

//     return rand()%a;
// }

// int main() {
//     char name[20];
//     int userinput, cpuinput;
//     int game=0;
//     int winuser=0, wincpu=0, draw=0;
//     printf("\n\n~~~~~Welcome to the Game~~~~~\n\n");
//     printf("Enter your name:\n");
//     scanf("%s", &name);
//     printf("\n\nHello %s\nGet ready for Rock, Paper, Scissors!!\n");
//     printf("The game will be of 3 rounds and the winner will be declared at the end...\n\n");

//     while(game<3) {
//     printf("Enter\n0. for Rock..\n1. for Scissors\n2. for Paper\n");
//     scanf("%d", &userinput);
//     printf("\nYour input is %d", userinput);
//     cpuinput=generaterandom(3);
//     printf("\nThe input from CPU is %d\n\n", cpuinput);

//     if(userinput==cpuinput) {
//         draw++;
//     }
//     else if(userinput==0 && cpuinput==1){
//         winuser++;
//     }
//     else if(userinput==0 && cpuinput==2){
//         wincpu++;
//     }
//     else if(userinput==1 && cpuinput==0){
//         wincpu++;
//     }
//     else if(userinput==1 && cpuinput==2){
//         winuser++;
//     }
//     else if(userinput==2 && cpuinput==0){
//         winuser++;
//     }
//     else if(userinput==2 && cpuinput==1){
//         wincpu++;
//     }
//     else {
//         printf("Not valid input!!\n\n");
//     }
//     game++;
//     }

//     if(winuser>wincpu && winuser>draw){
//         printf("~~~~~The Winner is '%s'~~~~~\n\n", name);
//     }
//     else if(wincpu>winuser && wincpu>draw){
//         printf("~~~~~The Winner is'CPU'~~~~~\n\n");
//     }
//     else{
//         printf("The game is draw!!\n\n");
//     }

//     printf("Thank you for playing :):):)\n\n");

//     return 0;
// }

// *****************************TWO MATRIX MULTIPLICATION CODE*********************************************
// m[0][0]    m[0][1]         n[0][0]    n2[0][1] 
// m3[1][0]   m4[1][1]        n3[1][0]   n4[1][1] 

// array o = { m[0][0]*n[0][0] + m[0][1]*n3[1][0]       m[0][0]*n[0][1] + m[0][1]*n[1][1] }
//           { m[1][0]*n[0][0] + m[1][1]*n[1][0]        m[1][0]*n[0][1] + m[1][1]*n[1][1] }

// #include <stdio.h>

// int main() {
//     int a[2][2];
//     int b[2][2];
//     int c[2][2];
//     int sum=0;

//     printf("\nEnter the first matrix\n");
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             printf("Enter the %d %d element of matrix: \n", i, j);
//             scanf("%d", &a[i][j]);
//         }
//     }

//     printf("\nEnter the second matrix\n");
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             printf("Enter the %d %d element of matrix: \n", i, j);
//             scanf("%d", &b[i][j]);
//         }
//     }

//     printf("The first matrix:\n");
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             printf("%d\t", a[i][j]);
//         }
//         printf("\n");
//     }

//     printf("The second matrix:\n");
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             printf("%d\t", b[i][j]);
//         }
//         printf("\n");
//     }

//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             for(int k=0;k<2;k++){
//                 sum += (a[i][k] * b[k][j]);
//             }
//             c[i][j]=sum;
//             sum=0;
//         }
//     }

//     printf("The multiplication of both the matrix is\n");
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             printf("%d\t", c[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// ****************CALCULATE THE SQUARE OF GIVEN NUMBER*****************************

// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter the number for it's square:\n");
//     scanf("%d", &n);

//     printf("The square of %d is %d", n, n*n);

//     return 0;
// }

// *************************SWAP WITHOUT USING THRID VARIBLE*************************************

// #include <stdio.h>
// int main() {
//     int a, b;
//     a=20, b=30;

//     printf("The value of a & b is %d & %d\n", a, b);

//     a=a+b;
//     b=a-b;
//     a=a-b;

//     printf("The new value of a & b is %d & %d\n", a, b);

//     return 0;
// }

// **************************CALCULATE AREA OF TRIANGLE**************************************

// #include <stdio.h>

// int main() {
//     int base, height;
//     base=15, height=25;

//     float area;
//     area=0.5*base*height;
    
//     printf("The area of Triangle with base(%d) & height(%d) is '%.2f'", base, height, area);

//     return 0;
// }


// *************************CALCULATE AREA OF CIRCLE************************************

// #include <stdio.h>

// int main() {
//     int radius;
//     radius=9;

//     float area;
//     area=3.14*radius*radius;
    
//     printf("The area of circle with radius(%d) is '%.2f'", radius, area);

//     return 0;
// }


// ****************CALCULATE AREA AS PER USER INPUT*******************
// area of square = side*side
// area of circle = 3.14*r*r
// area of rectangle = length*width

// #include <stdio.h>

// float areaofsqaure() {
//     int side;
//     float area;
//     printf("Enter the side of square:\n");
//     scanf("%d", &side);
//     area=side*side;
//     printf("The area of square with side(%d) is %.2f\n", side, area);
//     return area;
// }

// float areaofcircle(){
//     int radius;
//     float area;
//     printf("Enter the radius of circle:\n");
//     scanf("%d", &radius);
//     area=3.14*radius*radius;
//     printf("The area of circle with radius(%d) is %.2f\n", radius, area);
//     return area;
// }

// float areaofrectangle() {
//     int length, width;
//     float area;
//     printf("Enter the length of rectangle:\n");
//     scanf("%d", &length);
//     printf("Enter the width of rectangle: \n");
//     scanf("%d", &width);
//     area=length*width;
//     printf("The area of rectangle with lenght(%d) & width(%d) is %.2f\n", length, width, area);

//     return area;
// }

// int main() {
//     char choice;

//     printf("Please enter:\ns. for area of square\nc. for area of circle\nr. for area of rectangle\n\n");
//     scanf("%c", &choice);

//     switch (choice) {
//     case 's':
//     areaofsqaure();
//         break;

//     case 'c':
//     areaofcircle();
//         break;

//     case 'r':
//     areaofrectangle();
//         break;    

//     default:
//     printf("Invalid input!\nPlease try again...");
//         break;
//     }

//     return 0;
// }

// ******************CALULATE SIMPLE INTEREST**********************************

// #include <stdio.h>

// int main() {
//     int principle, time;
//     float rate, simpleint;
//     principle=1000;
//     time=7;
//     rate=5.75;

//     simpleint=(principle*rate*time)/100;
//     printf("The simple interest with principle(%d), rate(%.2f) & time(%d) is '%.2f'\n", principle, rate, time, simpleint);

//     return 0;
// }


//*************************CONVERT CELCIUS TO FAHRENHEIT*******************************

// #include <stdio.h>

// int main() {
//     int celsius, fahrenheit;

//     printf("Enter the value of celsius :\n");
//     scanf("%d", &celsius);

//     fahrenheit=((celsius*9)/5)+32;

//     printf("The %d degree celsius temprature in fahrenheit is %d", celsius, fahrenheit);

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int number;
//     int firstnum, lastnum;
//     int sum;
//     printf("Enter any four digit number:\n");
//     scanf("%d", &number);

//     lastnum=number%10;
//     firstnum=number;
//     while (firstnum>=10) {
//         firstnum=firstnum/10;
//     }
    
//     sum=firstnum+lastnum;

//     printf("The sum of first and last digit of your number is %d", sum);


//     return 0;
// }


// *****************CALCULATION OF GROSS SALARY & NET SALARY*****************************
// Basic salary by user
// Travel all = 10% of basic salary
// PF = 7.8% of basic salary
// DA = 500
// Gross salary = basic salary + DA + TA
// Net salary = Gross salary - PF

// gross = 100000 + 500 + 10000 = 110500
// net = 110500 - 7800 = 102700 

// #include <stdio.h>

// int main() {
//     float basicsalary, grosssalary, travel, providentf, dearness, netsalary;
//     printf("Enter your Basic salary:\n");
//     scanf("%f", &basicsalary);

//     dearness = 500.00;
//     travel = basicsalary * 0.10;
//     grosssalary = basicsalary + dearness + travel;
//     providentf = basicsalary * 0.078;
//     netsalary = grosssalary - providentf;

//     printf("Your Gross salary is %.2f\n", grosssalary);
//     printf("Your Net salary is %.2f\n", netsalary);


//     return 0;
// }

// *********************CHECK WHEATHER THE NUMBER IS PALINDROM OR NOT*****************************

// #include <stdio.h>

// int main() {
//     int number, number2, reminder;
//     int sum=0;
    
//     printf("Enter 3 digit number to check wheather it's a palindrom or not:\n");
//     scanf("%d", &number);

//     number2=number;

//     while(number>0){
//         reminder=number%10;
//         number=number/10;
//         sum=(sum*10)+reminder;
//     }

//     if(number2==sum){
//         printf("It's a palindrome...\n");
//     }
//     else {
//         printf("It's not a palindrome..\n");
//     }

//     return 0;
// }

// ***************************CHECK WHEATHER THE NUMBER IS ARMSTRONG NUMBER OR NOT**************************

// #include <stdio.h>

// int main() {
//     int n, r, sum=0, temp;

//     printf("Enter the number to check wheather it's an armstrong number or not:\n");
//     scanf("%d", &n);

//     temp=n;

//     while (n>0) {
//         r = n%10;
//         sum = sum + (r*r*r);
//         n = n/10;
        
//     }

//     if (temp==sum){
//         printf("It's an Armstrong number..\n");
//     }
//     else {
//         printf("It's not an Armstrong number..\n");
//     }

//     return 0;
// }

// *******************CHECK WHEATHER THE YEAR IS LEAP YEAR OR NOT***************************

// #include <stdio.h>

// int main() {
//     int year;

//     printf("Enter the year:\n");
//     scanf("%d", &year);

//     if ((year%4==0 && year%100!=0) || (year%400==0)) {
//         printf("It's a leap year..");
//     }
//     else {
//         printf("It's not a leap year..");
//     }


//     return 0;
// }

// **********************CHECK IF CHARACTER IS VOWEL OR NOT***********************

// #include <stdio.h>

// int main() {
//     char ch;

//     printf("Enter the character:\n");
//     scanf("%c", &ch);

//     if (((ch=='a') || (ch=='e') || (ch=='i') || (ch=='o') || (ch=='u'))){
//         printf("It's a vowel..");
//     }
//     else {
//         printf("It's not a vowel..");
//     }


//     return 0;
// }


// *********************COMMAND LINE ARUGEMENTS EXAMPLE**************************
// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     printf("The value of argc is %d\n", argc);
//     for (int i = 0; i < argc; i++) {
//         printf("The argument at index number %d has value of %s\n", i, argv[i]);
//     }
    
//     return 0;
// }


// *****************ARTHAMETIC OPEARTIONS USING COMMAND LINE UTILITY***********************
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main(int argc, char const *argv[])
// {
//     char * operation;
//     int num1, num2;

//     operation = argv[1];
//     num1 = atoi(argv[2]);
//     num2 = atoi(argv[3]);

//     if (strcmp(operation,"add")==0) {
//         printf("%d\n", num1+num2);
//     }
//     else if (strcmp(operation,"subtract")==0) {
//         printf("%d\n", num1-num2);
//     }
//     else if (strcmp(operation,"multiply")==0) {
//         printf("%d\n", num1*num2);
//     }
//     else if (strcmp(operation,"divide")==0) {
//         printf("%d\n", num1/num2);
//     }
//     else{
//         printf("Not valid");
//     }

//     return 0;
// }


// *****************CONVERT STRING IN UPPERCASE***************************
// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str[100]="yogesh is a good boy";

//     printf("The string is '%s'\n", str);

//     for(int i=0; str[i]!='\0'; i++) {
//         if(str[i]>='a' && str[i]<='z') {
//             str[i]=str[i]-32;
//         }
//     }

//     printf("The string in uppercase is '%s'\n", str);

//     return 0;
// }

// *****************CONVERT STRING IN LOWERCASE***************************
// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str[100]="YOGESH IS A GOOD BOY";

//     printf("The string is '%s'\n", str);

//     for(int i=0; str[i]!='\0'; i++) {
//         if(str[i]>='A' && str[i]<='Z') {
//             str[i]=str[i]+32;
//         }
//     }

//     printf("The string in lowercase is '%s'\n", str);

//     return 0;
// }


// *****************REVERSE THE STRING****************************
// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str[100]="hello world";
//     char temp;
//     int len;

//     printf("%s\n", str);

//     len=strlen(str);

//     for(int i=0; i<len/2; i++){
//         temp=str[i];
//         str[i]=str[len-i-1];
//         str[len-i-1]=temp;
//     }

//     printf("%s\n", str);

//     return 0;
// }

// ********************CALCULATE FACTORIAL OF ANY NUMBER***********************

// #include <stdio.h>

// int main() {
//     int number, fact=1;

//     printf("Enter the number for factorial:\n");
//     scanf("%d", &number);

//     while (number>1){
//         fact=number*fact;
//         number--;
//     }

//     printf("The factorial of number is %d\n", fact);

//     return 0;
// }


// *************************PRINT A TABLE OF THE NUMBER*********************

// #include <stdio.h>

// int main() {
//     int number;

//     printf("Enter the number for the table:\n");
//     scanf("%d", &number);

//     printf("The table of %d is:\n", number);
//     for(int i=1; i<=10; i++) {
//         printf("%d x %d = %d\n", number, i, number*i);
//     }

//     return 0;
// }

// **************************FIBONACCI SERIES******************

// #include <stdio.h>

// int fib(int n) {
//     int fibN, fibNm1, fibNm2;

//     if (n==0) {
//         return 0;
//     }

//     if (n==1) {
//         return 1;
//     }

//     fibNm2=fib(n-2);
//     fibNm1=fib(n-1);
//     fibN=fibNm1+fibNm2;

//     return fibN;
// }

// int main() {
//     int n, number;

//     printf("Enter the Nth term of Fibonacci series:\n");
//     scanf("%d", &n);

//     printf("The fibonacci series till %dth term is:\n", n);
//     for(int i=0;i<=n; i++) {
//     number = fib(i);
//     printf("%d ", number);
//     }

//     return 0;
// }

// ***************************CALCULATE THE SUM OF DIGITS IN A NUMBER***********************

// #include <stdio.h>

// int main() {
//     int number, remainder, sum=0;

//     printf("Enter the number:\n");
//     scanf("%d", &number); 

//     while(number>0){
//         remainder = number%10;
//         sum = sum + remainder;
//         number = number/10;
//     }

//     printf("The sum of all digits is %d\n", sum);


//     return 0;
// }

// *********************SUM OF SERIES (1/1 + 1/2 + 1/3 + 1/4 + ....)*****************************

// #include <stdio.h>

// int main() {
//     float number, sum=0;

//     printf("Enter the number: ");
//     scanf("%f", &number);

//     for(float i=1; i<=number; i++){
//         sum = sum + 1/i;
//     }

//     printf("The sum is %.2f", sum);

//     return 0;
// }

// ***********************PRINTING PRIME NUMBER BETWEEN 1 TO 1000*****************************

// #include <stdio.h>

// int checkprime(int n) {
//     int count=0;
    
//     for(int i=1; i<=n; i++){
//         if (n%i==0){
//             count++;
//         } 
//     }

//     if(count==2){
//         printf("%d\n", n);
//     }

// }

// int main() {

//     printf("The prime number between 1 to 1000 are:\n");

//     for(int i=2; i<=1000; i++) {
//         checkprime(i);
//     }

//     return 0;
// }

// ***************CALCULATE SUM OF FIRST 10 EVEN NUMBERS***************************

// #include <stdio.h>

// int main() {
//     int number, sum=0;

//     for (int i=1; i<=20; i++) {
//         if (i%2==0) {
//             sum = sum + i;
//         }
//     }

//     printf("The sum of first 10 even number is %d", sum);

//     return 0;
// }

// *******************STAR PATTERN****************************
// *
// ***
// *****

// #include <stdio.h>

// int main() {

//     for(int i=1; i<=5; i++) {
//         for (int j=1; j<=i; j++) {
//             if(i%2!=0){
//                 printf("*");
//             }
//         }
//         printf("\n");
//     }

//     return 0;
// }


// ********************NUMBERPATTERN****************************
// 5
// 54
// 543
// 5432
// 54321

// #include <stdio.h>

// int main() {

//     for(int i=5; i>=1; i--) {
//         for (int j=5; j>=i; j--) {
//                 printf("%d", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// *****************NUMBER PATTERN***********************
// 12345678
// 7654321
// 123456
// 54321
// 1234
// 321
// 12
// 1

// #include <stdio.h>

// int main() {

//     for(int i=8; i>=1; i--) {
//         if(i%2==0) {   
//             for (int j=1; j<=i; j++) {
//                     printf("%d", j);
//             }
//         }
//         else {
//             for (int k=i; k>=1; k--) {
//                     printf("%d", k);
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// *****************STAR PATTERN********************
//     *
//    ***
//   *****
//  *******
// *********

// #include <stdio.h>

// int main() {
//     int n=5;
//     for(int i=0;i<n;i++) {
//         for(int j=0;j<2*n;j++) {
//             if(j>=n-1-i && j<=n-1+i) {
//                 printf("*");
//             }
//             else {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }

//     return 0;
// }


// **************CALCULATE FACTORIAL USING FUNCTION WITH RETURN TYPE AND ARGUMENT********************

// #include <stdio.h>

// int factorial(int number) {
//     int fact=1;
//     for (int i=1; i<=number; i++) {
//         fact = fact * i;
//     }

//     return fact;
// }

// int main() {
//     int n, sum;
    
//     printf("Enter the number for factorial: \n");
//     scanf("%d", &n);

//     sum=factorial(n);

//     printf("The factorial of %d is %d", n, sum);

//     return 0;
// }

// *****************CHECK PRIME NUMBER USING FUNCTION WITH ARGUMENT AND RETURN TYPE*****************

// #include <stdio.h>

// int checkprime(int n) {
//     int count=0;
    
//     for(int i=1; i<=n; i++){
//         if (n%i==0){
//             count++;
//         } 
//     }

//     if(count==2){
//         printf("%d is a prime number", n);
//     }

//     else {
//         printf("%d is not a prime number", n);
//     }

//     return 0;
// }

// int main() {
//     int number;

//     printf("Enter the number to check for prime number: \n");
//     scanf("%d", &number);

//     checkprime(number);

//     return 0;
// }

// *********************REVERSE AN ARRAY***********************

// #include <stdio.h>

// int main() {
//     int arr[5]={10,20,30,40,50};
//     int temp;

//     printf("The array before reversing is:\n");
//     for(int i=0;i<=4; i++) {
//         printf("%d ", arr[i]);
//     }

//     for (int i=0;i<=4/2;i++) {
//         temp=arr[i];
//         arr[i]=arr[5-i-1];
//         arr[5-i-1]=temp;
//     }

//     printf("\nThe array after reversing is:\n");
//     for(int i=0;i<=4; i++) {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }

// ********************FIND THE MAXIMUM ELEMENT IN ARRAY****************
// #include <stdio.h>

// int main() {
//     int arr[5]={30,50,20,40,10};
//     int max=arr[0];

//     for(int i=1; i<=4; i++) {
//             if(arr[i]>max){
//                 max=arr[i];
//             }
//     }

//     printf("The maximum element in array is %d", max);

//     return 0;
// }

// *************STAR PATTERN***************
// *                                       1,2,4,7,11,16     1+1,2+2,4+3,7+4,11+5
// **
// ****
// *******
// ***********
// ****************

// #include <stdio.h>

// int main() {
//     int f=0, x=1;
    
//     for(int i=1;i<=6;i++) {
//             x=x+f;
//             for(int j=1;j<=x; j++) {
//                 printf("*");

//             }
//             printf("\n");  
//             f++;   
//     }
//     return 0;
// }

// *****************STAR PATTERN********************
//     *
//    * *
//   * * *
//  * * * *
// * * * * *

// #include <stdio.h>

// int main () {
//     int i, j, k;

//     for(i=0;i<6;i++) {
//         for(j=6;j>i; j--) {
//             printf(" ");
//         }
//         for(k=0;k<i;k++) {
//             printf("* ");
//         }
//         printf("\n");
//     }

//     return 0;
// }

// **********ONE MORE LOGIC OF THIS STAR PATTERN*******************
//        *
//       ***
//      *****
//     *******
//    *********

// #include <stdio.h>

// int main () {
//     int i, j, k;

//     for(i=0;i<6;i++) {
//         for(j=6;j>=i; j--) {
//             printf(" ");
//         }
//         for(k=0;k<2*i-1;k++) {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }

// ********************SORT ARRAY IN DESCENDING ORDER*********************

// #include <stdio.h>

// int main() {
//     int arr[5]={30,50,10,40,20};
//     int temp;

//     for(int i=0;i<5;i++) {
//         for(int j=i+1;j<5;j++){
//             if(arr[i]<arr[j]) {
//                 temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }

//     for(int i=0;i<5;i++) {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }


// *******************INPUT TWO 3X3 ARRAY AND PERFORM THEIR ADDITION & MULTIPLICATION********************

// #include <stdio.h>

// int main() {
//     int a[3][3];
//     int b[3][3];
//     int c[3][3];

//     printf("Enter first array:\n");
//     for(int i=0;i<=2;i++){
//         for(int j=0;j<=2;j++) {
//             scanf("%d", &a[i][j]);
//         }
//     }

//     printf("Enter second array:\n");
//     for(int i=0;i<=2;i++){
//         for(int j=0;j<=2;j++) {
//             scanf("%d", &b[i][j]);
//         }
//     }

//     for(int i=0;i<=2;i++){
//         for(int j=0;j<=2;j++) {
//             c[i][j]=a[i][j]+b[i][j];
//         }
//     }

//     printf("The Addition of 1st & 2nd array is: \n");
//     for(int i=0;i<=2;i++){
//         for(int j=0;j<=2;j++) {
//             printf("%d ", c[i][j]);
//         }
//         printf("\n");
//     }

//     for(int i=0;i<=2;i++){
//         for(int j=0;j<=2;j++) {
//             c[i][j]=a[i][j]*b[i][j];
//         }
//     }

//     printf("The Multiplication of 1st & 2nd array is:\n");
//     for(int i=0;i<=2;i++){
//         for(int j=0;j<=2;j++) {
//             printf("%d ", c[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// **********************DYNAMIC MEMORY ALLOCATION***********************

// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int n;
//     char c;
//     int* ptr;

//     printf("Enter the number of element you want:\n");
//     scanf("%d", &n);

//     ptr = (int*)malloc(n*sizeof(int));

//     printf("Enter %d element\n", n);
//     for(int i=0;i<n;i++) {
//         scanf("%d", &ptr[i]);
//     }

//     printf("The value by user are:");
//     for(int i=0;i<n;i++) {
//         printf("%d ", ptr[i]);
//     }

//     restart:

//     printf("\nEnter y to reallocate the element and n for exit\n");
//     scanf(" %c", &c);

//     if(c=='y') {
//         printf("Enter the number of element you want:\n");
//         scanf("%d", &n);
//         ptr = (int*)realloc(ptr,n*sizeof(int));

//         printf("Enter %d element\n", n);
//         for(int i=0;i<n;i++) {
//         scanf("%d", &ptr[i]);
//         }

//         printf("The value by user are:");
//         for(int i=0;i<n;i++) {
//         printf("%d ", ptr[i]);
//         }

//         goto restart;
        
//     }

//     free(ptr);

//     return 0;
// }