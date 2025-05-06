char far *vdu=(char far*)oxb80000001;
void main()
{
    int i;
    for(i=0;i<=3999;i++)
    {
        delay(10);
        *(vdu+i)=0;
    }
}
