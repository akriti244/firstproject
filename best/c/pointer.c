// #include<stdio.h>
// int main(){
//     int a=10;
//     int *ptr;
//     printf("%d\n",a);
//     printf("%u\n",ptr);
//     printf("%u\n",&a);
//     printf("%d\n",*ptr);
// }

// #include<stdio.h>
// int main(){
//     int a,*b;
//     a=10;
//     b=&a;
//     a=a+10;
//     *b=*b+20;
//     printf("%d",a);
//     return 0;

// }


// #include<stdio.h>
// int main(){
//     int a=10;
//     int *b,**c;
//     b=&a;
//     c=&b;
//     printf("%d\n%d\n%d",a,b,c);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a,*b,**c;
//     a=10;
//     b=&a;
//     c=&b;
//     a=a+10;
//     *b=*b+20;
//     **c=**c+20;
//     printf("%d",a);
//     return 0;
// }


// #include<stdio.h>
// void printxy(int x,int y){
//     int *ptr;
//     x=0;
//     ptr=&x;
//     y=*ptr;
//     *ptr=1;
//     printf("%d,%d",x,y);
// }
// int main(){
//     printxy(1,1);
// }

// #include<stdio.h>
// void foo(int*,int*);
// int main(){
//     int a=10,b=20;
//     foo(&a,&b);
//     printf("%d,%d",a,b);
//     return 0;

// }
// void foo(int*c,int*d){
//     *c=*d+10;
//     *d=*d-2;
// }


// #include<stdio.h>
// void foo(int,int);
// int main(){
//     int a=10,b=20;
//     foo(a,b);
//     printf("%d,%d",a,b);
//     return 0;

// }
// void foo(int c,int d){
//     c=d+10;
//     d=d-2;
// }






