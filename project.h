# include "std_types.h"
#ifndef PROJECT_H_INCLUDED
#define PROJECT_H_INCLUDED

typedef struct
{
    u8 student_id;
    u8 student_year;
    u8 course1_id;
    u8 course1_grade;
    u8 course2_id;
    u8 course2_grade;
    u8 course3_id;
    u8 course3_grade;
} students;

int SDB_isfull (void);
u8 SDB_getusedsize(int* a);
int SDB_AddEntry (u8 id, u8 year, u8* subjects, u8* grades);
void SDB_DeleteEntry(u8 id);
int SDB_ReadEntry(u8 id, u8* year, u8* subjects, u8* grades);
void SDB_GetIdList(u8* count, u8* list);
int SDB_IsIdExist(u8 id);



#endif // PROJECT_H_INCLUDED
