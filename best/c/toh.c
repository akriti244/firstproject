

// #include<stdio.h>
// void toh(int n,char l,char r,char m){
//     if (n>=1){
//         toh(n-1,l,r,m);
//         printf("move %d disc from tower %c to tower %c\n",n,l,r);
//         toh(n-1,m,l,r);
//     }
// }
// int main(){
//     toh(4,'r','b','g');
//     return 0;
// }
 
// #include<stdio.h>
// int main()
// {
//    float num1,num2;
//    char ch;
//    printf("Enter first number : ");
//    scanf("%f",&num1);
//    printf("Enter Second number : ");
//    scanf("%f",&num2);
//    printf("Please entered operation (+ , - , *, /):");
//    scanf("%s", &ch);
//    float value;
//    switch (ch) 
//    {
//    case '+':{
//     value = num1+num2;
//        printf("The result is %.2f ",value);
//     break;

//    }
//    case '-':{
//        value = num1-num2;
//        printf("The result is %.2f ",value);
//     break;
//    }
//    case '*':{
//         value = num1*num2;
//        printf("The result is %.2f ",value);
//     break;
//    }
//    case '/':{
//   value = num1/num2;
//    printf("The result is %.2f ",value);
//     break;
//    }
   
//    default:{ 
//    printf("invalid operation ...... \n ");
//    printf("ERROR ........");
//     break;
//    }
//    }
//     return 0;
// }