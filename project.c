#include "project.h"
extern students sdb[10];

int SDB_isfull (void)
{
    int i,f=0;
    for (i=0 ; i<10 ; i++)
    {
        if (sdb[i].student_id== 0&& sdb[i].student_year== 0&& sdb[i].course1_grade== 0&&sdb[i].course1_id== 0&&sdb[i].course2_grade== 0&&sdb[i].course2_id== 0&&sdb[i].course3_grade== 0 &&sdb[i].course3_id== 0)
        {
            f=1;
        }
        if (f=1)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
}

int a=0;
u8 SDB_getusedsize(int* a)
{
    int i;

    for (i=0 ; i<10 ; i++)
    {
        if (sdb[i].student_id== 0)
        {

        }
        else
        {
            (*a)++;
        }
    }
}
int index=0;
int SDB_AddEntry (u8 id, u8 year, u8* subjects, u8* grades)
{

    sdb[index].student_id=id;
    sdb[index].student_year=year;
    sdb[index].course1_id=subjects[0];
    sdb[index].course1_grade=grades[0];
    sdb[index].course2_id=subjects[1];
    sdb[index].course2_grade=grades[1];
    sdb[index].course3_id=subjects[2];
    sdb[index].course3_grade=grades[2];
    index++;
}
void SDB_DeleteEntry(u8 id)
{
    int i;
    for(i=0; i<10; i++)
    {
        if(id==sdb[i].student_id)
        {
            sdb[i].student_id=0;
            sdb[i].student_year=0;
            sdb[i].course1_id=0;
            sdb[i].course1_grade=0;
            sdb[i].course2_id=0;
            sdb[i].course2_grade=0;
            sdb[i].course3_id=0;
            sdb[i].course3_grade=0;
        }

    }
}
int SDB_ReadEntry(u8 id, u8* year, u8* subjects, u8* grades)
{
    int i;
    for(i=0; i<10; i++)
    {
        if(id==sdb[i].student_id)
        {
            *year=sdb[i].student_year;
            subjects[0]=sdb[i].course1_id;
            grades[0]=sdb[i].course1_grade;
            subjects[1]=sdb[i].course2_id;
            grades[1]=sdb[i].course2_grade;
            subjects[2]=sdb[i].course3_id;
            grades[2]=sdb[i].course3_grade;
            return 1;
        }
        else
        {

            break;
            return 0;
        }
    }
}

void SDB_GetIdList(u8* count, u8* list)
{
    int i;

    for(i=0; i<10; i++)
    {
        if (sdb[i].student_id==0)
        {

        }
        else
        {
            (*count)++;
            list[i]=sdb[i].student_id;
        }
    }



}
int SDB_IsIdExist(int Id)
{
    int i,x;
    for(i=0; i<10; i++)
    {
        if(Id==sdb[i].student_id)
        {
            x= 1;
        }
        else
        {
            x= 0;
        }
        return x;
    }
}
