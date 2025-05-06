// #include<stdio.h>
// int main(){
//     int a,c,b;
//     a=10;
//     b=20;
//     c=a+b;
//     printf("%d",c);
//     return 0;
// }

//binary representation
// #include<stdio.h>
// int main(){
//     int a=0b11101;
//     int b=0b11111;
//     printf("%d",a+b);
//     return 0;
// }

//for octal representation
// #include <stdio.h>
// int main(){
//     int a=016;
//     printf("%d",a);
// }

//unsigned number

// #include<stdio.h>
// int main(){
//     short unsigned int a=65536;
//     printf("%hu",a);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     short unsigned int a=70000;
//     printf("%hu",a);
//     return 0;
// }

// signed number

// #include<stdio.h>
// int main(){
//      int a=14;
//         printf("%d",a);
    
//     return 0;
// }


// #include<stdio.h>
// int main(){
//      short int a=65520;
//         printf("%hd",a);
    
//     return 0;
// }

//  #include<stdio.h>
// int main(){
//      short int a=-10;
//         printf("%hu",a);
    
//     return 0;
// }

// #include<stdio.h>
// int main(){
//      short int a=-90;
//         printf("%hu",a);
    
//     return 0;
// }


// #include<stdio.h>
// int main(){
//      char ch='a';
//         printf("%d",ch);
    
//     return 0;
// }

// #include<stdio.h>
// int main(){
//      char ch=65+7;
//         printf("%c",ch);
    
//     return 0;
// }

// #include<stdio.h>
// int main(){
//      char ch=-139;
//         printf("%c",ch);
    
//     return 0;
// }


// Associativity rule
// #include <stdio.h>
// int g(int p){
//     printf("%d",p);return p;
// }
// int h(int q){
//     printf("%d",q);return q;
// }
// void f(int x,int y){
//     g(x);
//     h(y);
// }
// int main(){
//     {
//         f(g(10),h(20));
//         return 0;
//     }

// }


// #include<stdio.h>
// int main(){
//     int a=20;
//     int b=30;
//     int c=40;
//     a=b=c;
//     printf("%d%d%d",a,b,c);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int x=5;
//     int y;
//     y=x++;
//     printf("%d%d",x,y);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int x=5,y,b=10;
//     y=x++;
//     printf("%d\n",x);
//     printf("%d\n",y);
//     y=++x;
//     printf("%d\n",x);
//     printf("%d\n",y);
//     y=x++*b;
//     printf("%d\n",x);
//     printf("%d\n",y);
//     y=++x*b;
//     printf("%d\n",x);
//     printf("%d\n",y);
//     y=x--;
//     printf("%d\n",x);
//     printf("%d\n",y);
//     y=--x;
//     printf("%d\n",x);
//     printf("%d\n",y);
//     y=x--*b;
//     printf("%d\n",x);
//     printf("%d\n",y);
//     y=--x*b;
//     printf("%d\n",x);
//     printf("%d\n",y);
//     return 0;
// }



// #include <stdio.h>
// int main(){
//     int m=20,k=50;
//     int n,n1;
//     n=++m + ++k;
//     n1=m--+--k;
//     n--;
//     --n1;
//     n-=n1;
//     printf("%d",n+k);
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     int m=10;
//     int n,n1;
//     n=++m;
//     n1=m++;
//     n--;
//     --n1;
//     n-=n1;
//     printf("%d",n);
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     int a=2,b=5,c;
//     c=a++ +b;
//     printf("%d",a+b+c);
//     return 0;
// }

//relational operator


// #include <stdio.h>
// int main(){
//     int a=2,b=5;
//     printf("%d\n",a<b);
//     printf("%d",a>b);
//     return 0;
// }


// #include<stdio.h>
// int x=40;
// int main(){
//     printf("%d\n",30>40);
//     printf("%d\n",30>=40);
//     printf("%d\n",30==40);
//     printf("%d\n",30!=40);
//     printf("%d\n",40!=30);
//     printf("%d\n",40==40);
//     printf("%d\n",50>50);
//     printf("%d\n",50<50);
//     return 0;
    
// }


// #include<stdio.h>
// int main(){
//     printf("\n%d",printf("ABCD"));
//     return 0;
// }



// TERNARY OPERATOR

// #include<stdio.h>
// int main(){
//     int a;
//     a=10>7?10:20;
//     printf("%d",a);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int x=3,y=4,z=4;
//     printf("%d",(z>=y>=x?100:200));
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a=10,b=14;
//     a==4?printf("%d",a):printf("%d",b);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a=10,b=14;
//     (a=4)?printf("%d",a):printf("%d",b);
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int a=10,b=14;
//     a=4?printf("%d",a):printf("%d",b);
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int a=10,b=14;
//     a=4?printf("%d",a):printf("%d",b);printf("%d",a);
//     return 0;
// }



// #include<stdio.h>
// int main(){
//     int a=10,b=14;
//     a=4?printf("%d",a):printf("%d",b)?14:0;
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int a=10;
//     if (a+2){
//         printf("namaskar");
//         printf("dosto");}
//         return 0;
// }


// #include<stdio.h>
// int main(){
//     int i,j,k=0;
//     j=2*3/4+2.0/5+8/5;
//     k-=--j;
//     for(i=0;i<10;i++){
//         switch(i+k){
//             case 1:
//             case 2:printf("\n%d",i+k);
//             case 3:printf("\n%d",i+k);
//             default :printf("\n%d",i+k);
//         }
//     }
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int x,sum;
//     for(x=0,sum=0;x<=500;x+=10)
//     sum+=x;
//     printf("%d",sum);
//     return 0;
// }






























































