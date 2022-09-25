#include <stdio.h>
#include <string.h>

typedef char WORD;
typedef int SHORT;
typedef long LONG;
typedef float FLOAT;
typedef double DFLOAT;
int main()
{
    printf(" the size of WORD is %d\n", sizeof(WORD));
    printf(" the size of SHORT is %d\n", sizeof(SHORT));
    printf(" the size of LONG is %d\n", sizeof(LONG));
    printf(" the size of FLOAT is %d\n", sizeof(FLOAT));
    printf(" the size of DFLOAT is %d\n", sizeof(DFLOAT));

    return 0;
}



/*
enum tag { name1,
name2 = 10,
name3,
name4 };
int main()
{
    printf("the value of %d\n", name1);
    printf("the value of %d\n", name2);
    printf("the value of %d\n", name3);
    printf("the value of %d\n", name4);
    //printf("the value of %d\n", name5);
    return 0;
}*/


/*
 main (int argc, char *argv[])
 {
 int i;

 printf("The value received by argc is %d.\n", argc);
 printf("There are %d command-line arguments passed to main().\n",
 argc);
 if(argc) {
 printf("The first command-line argument is: %s\n", argv[0]);
 printf("The rest of the command-line arguments are:\n");
 for (i=1; i<argc; i++)
 printf("%s\n", argv[i]);
 }
 return 0;
 }
*/

/* main() function */
//int main()
/* {
 enum units{penny = 1,
 nickel = 5,
 dime = 10,
 quarter = 25,
 dollar = 100};
 int money_units[5] = {
 dollar,
 quarter,
 dime,
 nickel,
 penny};
 char *unit_name[5] = {
 "dollar(s)",
 "quarter(s)",
 "dime(s)",
 "nickel(s)",
 "penny(s)"};
 int cent, tmp, i;

 printf("Enter a monetary value in cents:\n");
 scanf("%d", &cent); /* get input from the user */
// printf("Which is equivalent to:\n");
 //tmp = 0;
 //for (i=0; i<5; i++){
 //tmp = cent / money_units[i];
 //cent -= tmp * money_units[i];
 //if (tmp)
 //printf("%d %s ", tmp, unit_name[i]);
 //}
 //printf("\n");
 //return 0;
 //}
//*/









/*
struct employee{
    int salary;
    float hike;
    char name[10];
    };
int main()
{
   //int a = 45;
   struct employee harry;
   strcpy(harry.name, "Harry");
   harry.hike = 5.3;
   harry.salary = 10000045;

   printf("The name of the employee is %s\n",  harry.name);
   printf("The name of the employee is %s\n",  harry.aju);
   printf("The salary of the employee is %d\n", harry.salary);
   printf("The hike of the employee is %f\n", harry.hike);

   return 0;
}
*/
