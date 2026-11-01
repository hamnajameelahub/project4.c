#include<stdio.h>
struct student
{
  char name[20];
  int roll;
  float mark;
  char city[20];
  char dream[20];
};
int main()
{
  struct student s[10];
  read(s,10);
  display(s,10);
};
void read(struct student s[],int n);
{
 inti;
 for(i=0;i<10;i++)

 printf("enter the name:\n");
 scanf("%s",s[i].name);
 printf(enter the rollno:\n");
 scanf("%d",s[i].roll);f
 printf("enter the marks:\n");
 scanf("%f",s[i].m,arks);
 printf("enter the city;\n");
 scanf("%s",s[i].city);
 printf("enter the dream\n");
 scanf("%s",s[i].dream);
}
void display(struct student s[10])
{
 int i;
 printf("student details);
 for(i=0;i<10;i++)
 {
  printf("student name:%s\n",s[i].name);
  printf("student roll:%d\n",s[i].roll);
  printf("student mark:%f\n",s[i].mark);
  printf("student city:%s\n",s[i].city);
  printf("student dream:%s\n",s[i].dream);
  }
}
int main()
{
 struct student s[10];
 read(s);
 display(s);
}
return 0;