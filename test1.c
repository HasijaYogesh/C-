// *************CHECK WHEATHER THE NUMBER IS VOWEL OR NOT********************

// #include <stdio.h>

// int main() {
//     char choice;

//     printf("Enter the character to check for vowel or not: ");
//     scanf("%c",&choice);

//     if ((choice=='a') || (choice=='e') || (choice=='i') || (choice=='o') || (choice=='u')) {
//         printf("The character is a vowel");
//     }
//     else {
//         printf("The character is not a vowel");
//     }

//     return 0;
// }

// *******************PROGRAM TO SORT ARRAY IN DESCENDING ORDER*****************
// #include <stdio.h>

// int main() {
//     int arr[5]={52,68,34,59,99};
//     int temp;

//     for(int i=0;i<5;i++) {
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

// ***************PATTERN****************
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

//     for(int i=8;i>=1;i--) {
//         if(i%2==0){
//             for(int j=1;j<=i;j++) {
//                 printf("%d", j);
//             }
//         }
//         else{
//             for(int k=i;k>=1;k--){
//                 printf("%d",k);
//             }
//         }
//         printf("\n");
//     }

//     return 0;
// }