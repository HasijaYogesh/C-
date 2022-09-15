#include <stdio.h>

// // To check the two digit number
// int main(int argc, char const *argv[])
// /*{
//     char day;
//     printf("Enter day (1-7) : ");
//     scanf("%s", &day);

//     switch (day) {
//         case 'm' : printf("Monday \n");
//         break;
//         case 't' : printf("Tuesday \n");
//         break;
//         case 'w' : printf("Wednesday \n");
//         break;
//         case 'T' : printf("Thursday \n");
//         break;
//         case 'F' : printf("Friday /n ");
//         break;
//         case 's' : printf("Saturdat \n");
//         break;
//         case 'S' : printf("Sunday \n");
//         break;
//         default : printf("Not a valid day \n");

//     }
    

//     return 0;
// }*/

// {
//     // int mark;
//     // printf("Enter your Marks(0-100) : ");
//     // scanf("%d", &mark);

//     // if (mark>=0 && mark<=30) {
//     // printf("Fail \n");
//     // }
//     // else if(mark>30 && mark<=100){
//     //     printf("Pass \n");
//     // }
//     // else {
//     //     printf("Wrong Mark \n");
//     // }

//     // mark <= 30 ? printf("Fail \n") : printf("Pass \n");

//     // return 0;


// }

// {
//     char ch;
//     printf("Enter the charachter: ");
//     scanf("%s", &ch);

//     if(ch>='A' && ch<='Z'){
//         printf("Upper case \n");
//     }
//     else if(ch>='a' && ch<='z'){
//         printf("Lower case \n");
//     }
//     else {
//         printf("Not English \n");
//     }

//     return 0;
// }
// {
//     for(int i=0; i<=10; i=i++) {
//         printf("%d \n", i);
//     }
//     return 0;
// }    

// {
//     int i=1;
//     while(i<=5){
//         printf("Hello World \n");
//         i++;
    
//     }
//     return 0;
// }

// {
//     int n;
//     printf("Enter number: ");
//     scanf("%d", &n);

//     int i=0;
//     while(i<=n){
//         printf("%d \n", i);
//         i++;
//     }
//     return 0;

// }

// {
//     int i=1;
//     do {
//         printf("%d \n", i);
//         i++;
//     } while(i<=5);
//     return 0;
    
// }

// {
//     int n;
//     printf("Enter number: ");
//     scanf("%d", &n);

//     int sum=0;
//     for (int i=1; i<=n; i++) {
//         sum = sum + i;
//     }

//     printf("Sum is %d \n", sum);

//     for(int i=n; i>=1; i--) {
//         printf("%d \n", i);
//     }

//     return 0;

// }

// {
//     int n;
//     printf("Enter number: ");
//     scanf("%d", &n);

//     for(int i=1; i<=10; i++){
//         printf("%d \n", n*i);
//     }
//     return 0;

// }

// {
//     int n;
//     do {
//         printf("Enter number: ");
//         scanf("%d", &n);
//         printf("%d \n", n);


//         if(n%7==0){
//             break;
//         }
//     } while(1);

//     printf("Thank you");

//     return 0;
// }

// {
//     for(int i=5; i<=50; i++) {
//         if(i%2==0) {
//             continue;
//         }
//         printf("%d \n", i);
//     }
//     return 0;

// }

// void namaste();
// void bonjour();

// int main() {
//     printf("Enter you Nationality (i or f): ");
//     char ch;
//     scanf("%c", &ch);

//     if (ch=='i') {
//         namaste();
//     } else {
//         bonjour();
//     }
//     return 0;

// }      

// void namaste() {
//     printf("Namaste \n");
// }

// void bonjour() {
//     printf("Boujour \n");
// }

// int sum(int a, int b);

// int main() {
//     int a,b;
//     printf("Enter first number: ");
//     scanf("%d", &a);
//     printf("Enter second number: ");
//     scanf("%d", &b);

//     int s = sum(a,b);
//     printf("Sum is %d", s);
//     return 0;
// }

// int sum(int x, int y) {
//     return x + y;
// }


// int sum(int a, int b);
// void printTable(int n);

// int main() {
//     int n;
//     printf("Enter number: ");
//     scanf("%d", &n);

//     printTable(n);
    
//     return 0;
// }

// int sum(int x, int y) {
//     return x + y;
// }

// void printTable(int n) {
//     for(int i=1; i<=10; i++) {
//     printf("%d\n", i*n);
//     }
// }


#include<math.h>

// float squareArea(float side);
// float circleArea(float rad);
// float rectangleArea(float a, float b);

// int main() {
//     float a = 5.0;
//     float b = 10.0;

//     printf("Area is: %f", rectangleArea(a,b));

//     return 0;
// }


// float squareArea(float side) {
//     return side * side;
// }

// float circleArea(float rad) {
//     return 3.14 * rad *rad;
// }

// float rectangleArea(float a, float b) {
//     return a*b;
// }


// int fact(int n);

// int main() {
//     printf("Factorial is: %d", fact(5));
//     return 0;
// }

// int fact(int n) {
//     if(n==0) {
//         return 1;
//     }

//     int factNm1 = fact(n-1);
//     int factN = factNm1 * n;
//     return factN;
// }

// int science;
// int math;
// int sanskrit;
// int calcPercentage(int science,int math,int sanskrit);


// int main() {
//     printf("Enter science marks: ");
//     scanf("%d", &science);
//     printf("Enter math marks: ");
//     scanf("%d", &math);
//     printf("Enter sanskrit marks: ");
//     scanf("%d", &sanskrit);

//     printf("Your percentage is: %d", calcPercentage(science, math, sanskrit));

//     return 0;
// }

// int calcPercentage(int science,int math,int sanskrit) {
//     int percentage = (science + math + sanskrit)/3;
//     return percentage;
// }


// int fib(int n);

// int main() {
//     printf("%d", fib(6));
//     return 0;
// }

// int fib(int n) {
//         if (n==0) {
//             return 0;
//         }
//         if (n==1) {
//             return 1;
//         }
    
//     int fibNm1 = fib(n-1);
//     int fibNm2 = fib(n-2);
//     int fibN = fibNm1 + fibNm2;
//     //printf("Fib of %d is: %d \n", n, fibN);
//     return fibN;
// }

// int main() {
//     int age = 22;
//     int *ptr = &age;

//     // printf("%p \n", &age);
//     printf("%d \n", age);
//     printf("%d \n", *ptr);
//     printf("%d \n", *(&age));

//     return 0;
// }

// int main() {
//     int i=5;
//     int *ptr=&i;
//     int **pptr=&ptr;

//     printf("%d \n", **pptr);

//     return 0;
// }

// void doWork(int a, int b, int *sum, int *prod, int *avg);

// int main() {
//     int a = 3, b = 5; 
//     int sum, prod, avg; 
//     doWork(a, b, &sum, &prod, &avg);

//     printf("Sum: %d, Product: %d, Average: %d", sum, prod, avg);

//     return 0;
// }

// void doWork(int a, int b, int *sum, int *prod, int *avg) {
//     *sum = a+b;
//     *prod = a*b;
//     *avg = (a+b)/2;
// }


// int main(){

//     float price[3];
//     printf("Enter 1st price: ");
//     scanf("%f", &price[0]);

//     printf("Enter 2nd price: ");
//     scanf("%f", &price[1]);

//     printf("Enter 3rd price: ");
//     scanf("%f", &price[2]);

//     printf("First price: %f \n", price[0] + (price[0]*0.18));
//     printf("Second price: %f \n", price[1] + (price[1]*0.18));
//     printf("Third price: %f \n", price[2] + (price[2]*0.18));

//     return 0;
// }


// int main() {
//     int aadhar[5];

//     // for input
//     int *ptr=&aadhar[0];
//     for(int i=0; i<5; i++) {
//         printf("%d index: ", i);
//         scanf("%d", &aadhar[i]);
//     }

//     // for output
//     for(int i=0; i<5; i++) {
//         printf("%d index = %d \n", i, aadhar[i]);
//     }

//     return 0;

// }

// int main() {
//     int marks[2][3];
//     marks[0][0]=90;
//     marks[0][1]=89;
//     marks[0][2]=78;
//     marks[1][0]=90;
//     marks[1][1]=89;
//     marks[1][2]=78;

//     printf("%d", marks[0][0]);

//     return 0;
// }

// int countOdd(int arr[], int n);
// void reverse(int arr[], int n);
// void printArr(int arr[], int n);

// int main() {
//     int arr[]={1,2,3,4,5,6};
//     reverse(arr,5);
//     printArr(arr,5);
//     return 0;
// }


// void printArr(int arr[], int n) {
//     for(int i=0; i<n; i++) {
//         printf("%d \t", arr[i]);
//     }
//     printf("\n");
// }


// void reverse(int arr[], int n){
//     for(int i = 0; i = n/2; i++) {
//         int firstvalue=arr[i];
//         int secondvalue=arr[n-i-1];
//         arr[i]=secondvalue;
//         arr[n-i-1]=firstvalue;
//     }
// }

// int countOdd(int arr[], int n) {
//     int count = 0;
//     for(int i=0; i<n; i++) {
//         if(arr[i] % 2 != 0) {
//             count++;
//         }
//     }

//     return count;
// }

// int main() {
//     int n;
//     printf("Enter n(n>2): ");
//     scanf("%d", &n);

//     int fib[n];
//     fib[0]=0;
//     fib[1]=1;

//     for(int i=2; i<n; i++) {
//         fib[i]=fib[i-1]+fib[i-2];
//         printf("%d \n", fib[i]);
//     }

//     return 0;
// }

// int countLength(char arr[]);

// int main() {
//     char name[100];
//     fgets(name, 100, stdin);
//     printf("Length is: %d", countLength(name));

//     return 0;
// }

// int countLength(char arr[]) {
//     int count=0;
//     for(int i=0; arr[i]!='\0';i++) {
//         count++;
//     }
//     return count-1;
// }

// #include <string.h>

// struct student {
//     int roll;
//     float cgpa;
//     char name[100];
// };

// int main() {
//     struct student ece[100];
//     ece[0].roll = 1664;
//     ece[0].cgpa = 9.2;
//     strcpy(ece[0].name, "Shradha");

//     printf("Name = %s\n", ece[0].name);
//     printf("Roll no. = %d\n", ece[0].roll);
//     printf("Cgpa = %f\n", ece[0].cgpa);

//     ece[1].roll = 1668;
//     ece[1].cgpa = 8.5;
//     strcpy(ece[1].name, "Yogesh");

//     printf("Name = %s\n", ece[1].name);
//     printf("Roll no. = %d\n", ece[1].roll);
//     printf("Cgpa = %f\n", ece[1].cgpa);

//     return 0;
// }


