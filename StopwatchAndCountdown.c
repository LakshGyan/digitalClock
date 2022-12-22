#include<stdio.h>
#include<windows.h> //here windows is used to implement the sleep operation

int main() {
    int h=0,m=0,s=0,ms=0; // here h = hour m= minute s= second ms= millisecond
    char ch; //we sill use switch case to make the program more dynamic

    printf("Enter your choice : \n PREE 'a' for STOPWARCH  \n PRESS 'b' for COUNTDOWN\n");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a':
        while(TRUE)// or we can write 1 instead of TRUE
        {
            printf("      \r %2d : %2d : %2d : %2d",h,m,s,ms);
            ms++;
            Sleep(10); //it is approxmately 1 millisecond
            if(ms==100)
            {
                s++;
                ms=0;
            }
            if(s==59)
            {
                m++;
                s=0;
                ms=0;
            }
            if(m==59)
            {
                h++;
                m=0;
                s=0;
                ms=0;
            }
            if(h==24)
            {
                h=0;
                m=0;
                s=0;
                ms=0;
            }
        }
    break;
    case 'b':
    printf("Enter the time in HH:MM::SS(using space:\n");
    scanf("%d%d%d",&h,&m,&s);
    while(1) //here we used 1
    {
        printf("     \r%d:%d:%d",h,m,s); // here \r is used to update the value in sigle line
        Sleep(1000);//it is approximately 1 second
        if(s!=0)
        {
            s--;
        }
        if(s==0 && m!=0)
        {
            s=59;
            m--;
        }
        if(s==0 && m==0 && h!=0)
        {
            h--;
            m=59;
            s=59;

        }
        if(h==0 && m==0 && s==0)
        {
            exit(0);
        }
    }
    }

}