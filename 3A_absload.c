#include<stdio.h>
#include<string.h>
void main()
{
    FILE *f1;
    char type[20],pname[20],input[20];
    int sa,addr,len;
    f1=fopen("input2.txt","r");
     printf("hello");
    fscanf(f1,"%s %s %x %x ",type,pname,&sa,&len);

    printf("the starting address is %x and is of length %x with name %s\n",sa,len,pname);
    fscanf(f1,"%s",input);
    while(strcmp(input,"E")!=0)
    {
        if(strcmp(input,"T")==0)
        {
            fscanf(f1,"%x %x %s",&addr,&len,input);
        }
        int i=0;
        while(i<(strlen(input)))
        {
            printf("%x\t%c%c\n",addr,input[i],input[i+1]);
            addr=addr+1;
            i=i+2;
        }
        fscanf(f1,"%s",input);

    }
}
