
//this is coding is wrong i have to check 

// #include<stdio.h>
// typdef struct{
//     char *a;
//     char *b;
// }
// t;
// void f1(t s);
// void f2(t *p);
// int main(){
//     static t s = {"A","B"};
//     printf("%s %s\n",s.a,s.b);
//     f1(s);
//     printf("%s %s\n",s.a,s.b);
//     f2(&s);
// }
// void f1(t s){
//     s.a="U";
//     s.b="V";
//     printf("%s %s\n",s.a,s.b);
//     return;
// }
// void f2(t *p){
//     p->a="V";
//     p->b="W";
//     printf("%s %s\n",p->a,p->b);
//     return;
// }