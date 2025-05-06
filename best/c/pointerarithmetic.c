// #include<stdio.h>
// int main(){
//     int a[]={10,20,30,40,50};
//     int i,*b;
//     b=a+4;
//     printf("%d",b[-1]);
//     return 0;
// }


//different between two address
// #include<stdio.h>
// int main(){
//     int a[]={10,20,30,40,50};
//     int i,*b;
//     b=&a[4]-4;
//     for(i=0;i<=4;i++){
//         printf("%d",*b);
//         b++;
//     }
//     return 0;

// }

//------------------------Answer is not coming ------------------------
// #include<stdio.h>
// int main(){
//     int arr[]={1,2,3,4,5,6,7,8,9,0,1,2,5};
//     *ip = arr+4;
//     printf("%d\n",ip[1]);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int i,b[]={2,3,4,5,6},*p;
//     p=b;
//     ++*p;
//     printf("%d\t",*p);
//     p+=2;
//     printf("%d",*p);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a[]={10,20,30,40,50};
//     int i,*b,*b1;
//     b=a;
//     b1=a+4;
//     i=b1-b;
//     printf("%d",i);
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     double a[2]={20.0,25.0},*p,*q;
//     p=a;
//     q=p+1;
//     printf("%d,%d",(int)(q-p),(int)(*q-*p));
//     return 0;
// }



// #include<stdio.h>
// int main(){
//     int a[]={2,4,6,8,10};
//     int i,sum=0,*b=a+4;
//     for (i=0;i<5;i++)
//     sum=sum+(*b-i)-*(b-i);
//     printf("%d\n",sum);
//     return 0;
// }

#include<stdio.h>
int main(){
    int a[]={11,12,13,14};
    printf("%u\n",a);
    printf("%d\n",a);
    printf("%d\n",*a);
    printf("%u\n",*a);
    printf("%u\n",&a);
    printf("%d\n\n\n",&a);

    printf("%u\n",a+1);
    printf("%d\n",*a+1);
    printf("%u\n",&a+1);
    return 0;

}


// #include<stdio.h>
// int main(){
//     int a[2][2]={{11,12},{13,14}};
//     printf("\n%u",a);
//     printf("\n%u",&a);
//     printf("\n%u",*a);
//     printf("\n%u",**a);

//     printf("\n%u",a+1);
//     printf("\n%u",*a+1);
//     printf("\n%u",**a+1);
//     printf("\n%u",&a+1);
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     unsigned int x[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
//     printf("%u,%u,%u",x+3,*(x+3),*(x+2)+3);
//     return 0;
// }



































