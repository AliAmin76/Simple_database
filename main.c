#include <stdio.h>
#include <stdlib.h>
#include "project.h"
students sdb[10];
int main()
{
   int b=0;
    while(b!=1)
    {
        int f;
        int i,y,x,z,h,p,k;
        int o;
        int id,year,subject[3],grade[3];
        int d,ya,s[3],g[3];
        int c=0,l[10]= {0,0,0,0,0,0,0,0,0,0};
        printf("\nMenu\n");
        printf(".........\n");
        printf("1)Check is full or No\n");
        printf("2)Get size of data base used\n");
        printf("3)Add to Data base\n");
        printf("4)Delete the entered data base \n");
        printf("5)Read from Data base\n");
        printf("6)Get list of ids\n");
        printf("7)Check if there is id\n");
        printf("8)Exit program\n");
        scanf("%d",&f);
        switch(f)
        {
        case 1:
            x = SDB_isfull();
            if (x==1)
            {
                printf("Data base is full");
                printf(".........................................................................\n");
                break;
            }
            else
            {
                printf("Data base is empty\n");
                printf(".........................................................................\n");
                break;
            }

        case 2:
            k=0;
            SDB_getusedsize(&k);
            printf("Used Data base is %d\n",k);
            printf(".........................................................................\n");
            break;
        case 3:
            //add to db
            printf("Enter id:");
            scanf("%d",&id);
            printf("\nEnter year:");
            scanf("%d",&year);
            printf("\nEnter subject id:\n");
            for(y=0; y<3; y++)
            {
                scanf("%d",&subject[y]);
            }
            printf("\nEnter grades in range (0 to 100):\n");
            for(y=0; y<3; y++)
            {
                scanf("%d",&grade[y]);
            }
            SDB_AddEntry(id,year,subject,grade);
            printf(".........................................................................\n");
            break;
        case 4:
            printf("Enter id to delete: ");
            scanf("%d",&o);
            SDB_DeleteEntry(o);
            printf(".........................................................................\n");
            break;
        case 5:
            printf("Enter Id: ");
            scanf("%d",&d);
            z=SDB_IsIdExist(d);
            if(z==1)
            {
                SDB_ReadEntry(d,&ya,s,g);
                printf("id:%d\n",d);
                printf("year:%d\n",ya);
                printf("subject idS:\n");
                for(y=0; y<3; y++)
                {
                    printf("%d\n",s[y]);
                }
                printf("Grades:\n");
                for(y=0; y<3; y++)
                {
                    printf("%d\n",g[y]);
                }
                printf(".........................................................................\n");
                break;
            }
            else
            {
                printf("Id is not exist in Data base\n ");
                printf(".........................................................................\n");
                break;
            }

        case 6:
            SDB_GetIdList(&c,l);
            for(y=0; y<10; y++)
            {
                printf("List of id:\n%d\n",l[y]);
            }
            printf("counter:%d\n",c);
            printf(".........................................................................\n");
            break;
        case 7:
            printf("Enter id : ");
            scanf("%d",&h);
            z=SDB_IsIdExist(h);
            if(z==1)
            {
                printf("Id is exist in Data base\n");
                printf(".........................................................................\n");
                break;
            }
            else
            {
                printf("Id is not exist in Data base\n");
                printf(".........................................................................\n");
                break;
            }
        case 8: b=1; break;
        default:
            printf("No. is not defined Please Enter operation again\n");
            printf(".........................................................................\n");
            break;
        }
    }
    return 0;
}
