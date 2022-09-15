// #include  <stdio.h>

// int main() {
//     int f=0,x=1; 

//     for(int i=1;i<=6;i++) {  //x=1, f=0; x=2,f=1;x=4,f=2,x=7,f=3,x=11,f=4;x=16,f=5;
//         x=x+f;
//         for(int j=1;j<=x;j++) {
//             printf("*");
//         }
//         printf("\n");
//         f++;
//     }

//     return 0;
// }

// 12345678  1
// 7654321   2
// 123456    3
// 54321     4
// 1234
// 321
// 12
// 1

// #include  <stdio.h>

// int main() {
//     for(int i=8;i>=1;i--) {
//         if(i%2==0) {
//             for(int j=1;j<=i;j++) {
//                 printf("%d",j);
//             }
//         }
//         else{
//             for(int k=i;k>=1;k--){
//                 printf("%d", k);
//             }
//         }
//         printf("\n");
//     }

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int x=1, f=0;

//     for (int i=0;i<6;i++){
//         x=x+f;
//         for(int j=0;j<x;j++){
//             printf("*");
//         }
//         f++;
//         printf("\n");
//     }

//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int arr[10]={50,80,90,20,100,30,10,40,60,70};
//     int temp;

//     for(int i=0;i<10/2;i++){ // 50, 20, 30, 40 , 10 i=0
//         temp=arr[i];         // 50, 40, 30, 20, 10
//         arr[i]=arr[10-i-1];
//         arr[10-i-1]=temp;
//     }

//     for(int i=0;i<10;i++) {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int arr[10]={30,50,20,40,10};
//     int temp;
//     for(int i=0; i<5; i++) {
//         for(int j=i+1;j<5;j++) {
//             if(arr[i]<arr[j]) {
//                 temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }

//     for(int i=0;i<5;i++) {
//         printf("%d ",arr[i]);
//     }

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int number;
//     number=9561518;
//     int lastnum, firstnum;
//     lastnum=number%10;
//     while(number>10) {
//         number=number/10;
//     }
//     firstnum=number;
//     printf("The sum of number is %d",lastnum+firstnum);
// }


// ******FACTORIAL*****
// #include <stdio.h>

// int main() {
//     int number,fact=1;

//     printf("Enter the number for factorial:\n");
//     scanf("%d",&number);

//     for(int i=1;i<=number;i++) {
//         fact=fact*i;
//     }

//     printf("The factorial of number is %d\n",fact);

//     return 0;
// }


// ******TABLE OF NUMBER*****
// #include <stdio.h>

// int main() {
//     int  number;

//     printf("Enter the number of table:\n");
//     scanf("%d",&number);

//     for(int i=1;i<=10;i++) {
//         printf("%d x %d = %d\n",number,i,number*i);
//     }

//     return 0;
// }

//********FIBONACCI SERIES*****
// #include <stdio.h>

// int fibonacci(int n) {
//     int fibN, fibNm1,fibNm2;
//     if(n==0) {
//         return 0;
//     }
//     if(n==1) {
//         return 1;
//     }
//     fibNm2=fibonacci(n-2);
//     fibNm1=fibonacci(n-1);
//     fibN=fibNm1+fibNm2;

//     return fibN;

// }

// int main() {
//     int number;

//     printf("Enter the index of fibonacci series:\n");
//     scanf("%d",&number);

//     for(int i=0;i<=number;i++) {
//         printf("%d\t",fibonacci(i));   
//     }

//     return 0;
// }

// ******SUM OF ALL DIGIT OF NUMBER********
// #include <stdio.h>
// int main() {
//     int number, sum=0;

//     printf("Enter the number:\n");
//     scanf("%d",&number);

//     while(number>0) {
//         sum=sum+(number%10);
//         number=number/10;
//     }

//     printf("The sum of all digit is %d", sum);

//     return 0;
// }

// *****SUM OF SERIES 1/1+1/2+1/3+1/4....*******
// #include <stdio.h>

// int main() {
//     float number; 
//     float sum=0;

//     printf("Enter the number:\n");
//     scanf("%f",&number);

//     for(float i=1;i<=number;i++) {
//         sum=sum+1/i;
//     }

//     printf("The sum is %f\n", sum);

//     return 0;
// }

//*******PRINT PRIME NO. 1 TO 1000**********
// #include <stdio.h>

// void checkprime(int n) {
//     int count=0;

//     for(int i=1;i<=n;i++) {
//         if(n%i==0) {
//             count++;
//         }
//     }

//     if(count==2) {
//         printf("%d\t",n);
//     }
// }

// int main() {
    
//     for(int i=2;i<=1000;i++) {
//         checkprime(i);
//     }

//     return 0;
// }

// ********SUM OF FIRST 10 EVEN NO.**********
// #include <stdio.h>

// int main() {
//     int number=10, sum=0;

//     for(int i=1;i<=10;i++) {
//         if(i%2==0) {
//             sum=sum+i;
//         }
//     }

//     printf("The sum of first 10 even number is %d", sum);

//     return 0;
// }


/*
STAR PATTERN
*
***
*****
*/
// #include <stdio.h>

// int main() {

//     for(int i=1;i<=5;i++) {
//         for(int j=1;j<=i;j++) {
//             if(i%2!=0){
//                 printf("*");
//             }
//         }
//         printf("\n");
//     }

//     return 0;
// }

/*
STAR PATTERN
5
54
543
5432
54321
*/
// #include <stdio.h>

// int main() {

//     for(int i=5;i>=1;i--) {
//         for(int j=5;j>=i;j--){
//             printf("%d",j);
//         }
//         printf("\n");
//     }

//     return 0;
// }


/*
STAR PATTERN
*
**
****
*******
***********
****************
*/
// #include <stdio.h>

// int main() {
//     int x=1,f=0;

//     for(int i=1;i<=6;i++) {
//         x=x+f;
//         for(int j=1;j<=x;j++) {
//             printf("*");
//         }
//         printf("\n");
//         f++;
//     }

//     return 0;
// }

/*
STAR PATTERN
12345678
7654321
123456
54321
1234
321
12
1
*/
// #include <stdio.h>
// int main() {

//     for(int i=8;i>=1;i--) {
//         if(i%2==0) {
//             for(int j=1;j<=i;j++) {
//                 printf("%d",j);
//             }
//         }
//         else {
//             for(int k=i;k>=1;k--) {
//                 printf("%d",k);
//             }
//         }
//         printf("\n");
//     }

//     return 0;
// }

/*
STAR PATTERN
    *
   * *  
  * * *
 * * * *
* * * * *
*/
// #include <stdio.h>

// int main() {

//     for(int i=0;i<6;i++) {
//         for(int j=6;j>i;j--) {
//             printf(" ");
//         }
//         for(int k=0;k<=i;k++) {
//             printf("* ");
//         }
//         printf("\n");
//     }

//     return 0;
// }

// ******FACTORIAL USING FUNCTION********
// #include <stdio.h>

// int factorial(int n) {
//     int fact=1;

//     for(int i=1;i<=n;i++) {
//         fact=fact*i;
//     }

//     return fact;
// }

// int main() {
//     int number;

//     printf("Enter the number for factorial:\n");
//     scanf("%d", &number);

//     printf("The factorial of number is %d",factorial(number));

//     return 0;
// }



// ********CHECK PRIME USING FUNCTION*********
// #include <stdio.h>

// void checkprime(int n) {
//     int count=0;

//     for(int i=1;i<=n;i++) {
//         if(n%i==0) {
//             count++;
//         }
//     }

//     if(count==2) {
//         printf("The number is prime number");
//     }
//     else {
//         printf("The number is not the prime number");
//     }
// }

// int main() {
//     int number;

//     printf("Enter the number to check for prime:\n");
//     scanf("%d", &number);

//     checkprime(number);

//     return 0;
// }

//*****REVERSE AN ARRAY******
// #include <stdio.h>

// int main() {
//     int arr[5]={10,20,30,40,50};
//     int temp;

//     for(int i=0;i<5/2;i++) {
//         temp=arr[i];
//         arr[i]=arr[5-i-1];
//         arr[5-i-1]=temp;
//     }

//     for(int i=0;i<5;i++) {
//         printf("%d ",arr[i]);
//     }

//     return 0;
// }

//*****SORT AN ARRAY******
// #include <stdio.h>

// int main() {
//     int arr[5]={30,50,20,40,10};
//     int temp;

//     for(int i=0;i<5;i++) {
//         for(int j=i+1;j<5;j++) {
//             if(arr[i]<arr[j]) {
//             temp=arr[i];
//             arr[i]=arr[j];
//             arr[j]=temp;
//             }
//         }
//     }

//     for(int i=0;i<5;i++) {
//         printf("%d ",arr[i]);
//     }

//     return 0;
// }

//*****MAXIMUM ELLEMNT IN ARRAY********
// #include <stdio.h>

// int main() {
//     int arr[5]={578,968,1005,432,128};
//     int max;

//     max=arr[0];

//     for(int i=1;i<5;i++) {
//         if(max<arr[i]){
//             max=arr[i];
//         }
//     }

//     printf("The maximum element is: %d",max);

//     return 0;
// }

//**********INPUT 2 ARRAY(3X3) AND PERFORM ADDITION & MULTIPLICATION***********
// #include <stdio.h>

// int main() {
//     int a[3][3], b[3][3];

//     printf("Enter first array:\n");
//     for(int i=0;i<3;i++) {
//         for(int j=0;j<3;j++){
//             scanf("%d",&a[i][j]);
//         }
//     }
//     printf("Enter second array:\n");
//     for(int i=0;i<3;i++) {
//         for(int j=0;j<3;j++){
//             scanf("%d",&b[i][j]);
//         }
//     }

//     printf("\n");

//     printf("Addition of two array:\n");
//     for(int i=0;i<3;i++) {
//         for(int j=0;j<3;j++){
//             printf("%d ", (a[i][j]+b[i][j]));
//         }
//         printf("\n");
//     }

//     printf("\n");

//     printf("Multiplication of two array:\n");
//     for(int i=0;i<3;i++) {
//         for(int j=0;j<3;j++){
//             printf("%d ", (a[i][j]*b[i][j]));
//         }
//         printf("\n");
//     }

//     return 0;
// }



