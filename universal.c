// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);

//     if(n%2==0) {
//         printf("It's an even number");
//     }
//     else{
//         printf("It's an odd number");
//     }

//     return 0;
// }


// #include <stdio.h>
// int main() {
//     int arr[5]={13,56,98,67,89};
//     int max=arr[0];
//     int max1=arr[0];
//     for ( int i=1; i < 5; i++)
//     {
//         if (arr[i]%2==0){
//             if (max<arr[i]){
//                 max=arr[i];
//                 }
                
//         }
        
//     }
//     printf("Even max = %d\n",max);

//     for ( int i=1; i < 5; i++)
//     {
//         if (arr[i]%2!=0){
//             if (max1<arr[i]){
//                 max1=arr[i];   
//             }  
//         }
//     }
    
//     printf("Odd max = %d\n",max1);
//     return 0;
// }

// #include <stdio.h>

// void evenfunc() {

// }

// void evenfunc() {
// }


// #include <stdio.h>

// int main(){
//     int n;
//     printf("Enter the number for square: \n");
//     scanf("%d", &n);

//     printf("The sqaure of %d is %d", n ,n*n);

//     return 0;
// }

#include <stdio.h>

int fib(int n);


int main() {
    int n;
    printf("Enter the Nth term of Fibonacci series: ");
    scanf("%d", &n);

    printf("No. on %dth term is %d", n, fib(n));

    return 0;
}


int fib(int n) {
    if (n==0) {
        return 0;
    }
    if (n==1) {
        return 1;
    }
    int fibNm1 = fib(n-1);
    int fibNm2 = fib(n-2);
    int fibN = fibNm1 + fibNm2;

    return fibN;
}





