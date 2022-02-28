#define Max 1000
#define Max_name 20
#define Max_sex 10
#define Max_tele 20
#define Max_ass 30
struct People
{
 char name[Max_name+1];
 int age[1];
 char sex[Max_sex];
 char tele[Max_tele];
 char ass[Max_ass];
};
struct Contact 
{
 struct People date[Max];
 int size;
};




