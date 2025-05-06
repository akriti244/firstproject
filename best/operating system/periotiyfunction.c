void abc(){
    clrscr();
    printf("\n i have highest priority");

}
void mno(){

    printf("\ni have lowest priority");
}
#pragma startip abc 64
#pragma startup mno 65
void main(){
    printf("priotity");
    getch();

}
