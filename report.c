#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//HASHMAP STRUCTURE
typedef struct
{
 char keydata [50];
char *data;
struct hash *p ; //link each key: value pair
} hash;
// Global variables
hash a[15] ; //structure variable
char d[15][1000]; //variable to store data of each key
int pos , n=10 ;
char keychar[15][50] =
{{"APP"},{"APPLE"},{"BADMINTON"},{"BASEBALL"},{"BASKETBALL"},{"CHESS"},{"CRICKET"},{"FOOTBALL"},{"HOCKEY"},{"MANGO"}};
//Writing the inital set of data and mapping it
void writeData()
{
//Entering data 1
char k1[50] = "APPLE";
strcpy(d[1] ,"Apple, (Malus domestica), domesticated tree and fruit of the rose family (Rosaceae),one of the most widely cultivated tree fruits. Apples are predominantly grown for sale as fresh fruit, thoughapples are also used commercially for vinegar, juice, jelly, applesauce, and apple butter and are canned aspie stock.") ;
strcpy(a[1].keydata , k1);
 a[1].data = &d[1];
a[1].p = &a[2];
//Entering data 2
char k2[50] = "APP";
strcpy(d[0] , "Apps are a significant part of the technology-driven world we live in and can enhancea person's life, enjoyment and productivity. Apps are also regularly used by companies both large and smallto streamline production and increase ease of work.") ;
 strcpy(a[0].keydata,k2);
a[0].data = &d[0];
a[0].p = &a[1];
//Entering data 3
char k3[50] = "BADMINTON";
strcpy(d[2] , "Badminton is a racquet sport played using racquets to hit a shuttlecock across a net.Although it may be played with larger teams, the most common forms of the game are singles (with oneplayer per side) and doubles (with two players per side). Badminton is often played as a casual outdoor activity in a yard or on a beach; formal games are played on a rectangular indoor court. Points are scored bystriking the shuttlecock with the racquet and landing it within the opposing side's half of the court. ") ;
strcpy(a[2].keydata, k3);
a[2].data = &d[2];
a[2].p = &a[3];
//Entering data 4
char k4[50] = "BASEBALL";
strcpy(d[3] , "Baseball is a bat-and-ball sport played between two teams of nine players each, takingturns batting and fielding. The game occurs over the course of several plays, with each play generallybeginning when a player on the fielding team, called the pitcher, throws a ball that a player on the battingteam, called the batter, tries to hit with a bat.") ;
strcpy(a[3].keydata, k4);
a[3].data = &d[3];
a[3].p = &a[4];
//Entering data 5
char k5[50] = "BASKETBALL";
strcpy(d[4] , "Basketball is a team sport in which two teams, most commonly of five players each,opposing one another on a rectangularcourt, compete with the primary objective of shooting a basketball(approximately 9.4 inches (24 cm) in diameter) through the defender's hoop (a basket 18 inches (46 cm) indiameter mounted 10 feet (3.048 m) high to a backboard at each end of the court, while preventing the opposing team from shooting through their own hoop. ") ;
strcpy(a[4].keydata, k5);
a[4].data = &d[4];
a[4].p = &a[5];
//Entering data 6
char k6[50] = "CHESS";
strcpy(d[5] , "Chess is a board game between two players. It is sometimes called international chess or Western chess to distinguish it from related games, such as xiangqi (Chinese chess) and shogi (Japanese chess). The current form of the game emerged in Spain and the rest of Southern Europe during the second half of the 15th century after evolving from chaturanga, a similar but much older game of Indian origin");
strcpy(a[5].keydata, k6);
a[5].data = &d[5];
a[5].p = &a[6];
//Enterning data 7
char k7[50] = "CRICKET";
strcpy(d[6] , "Cricket is a bat-and-ball game played between two teams of eleven players on a field at the centre of which is a 22-yard (20-metre) pitch with a wicket at each end, each comprising two bailsbalanced on three stumps. The batting side scores runs by striking the ball bowled at one of the wickets with the bat and then running between the wickets, while the bowling and fielding side tries to prevent this (by preventing the ball from leaving the field, and getting the ball to either wicket) and dismiss each batter (so they are out ).");
strcpy(a[6].keydata, k7);
a[6].data = &d[6];
a[6].p = &a[7];
//Entering data 8
char k8[50] = "FOOTBALL";
strcpy(d[7] , "Football is a family of team sports that involve, to varying degrees, kicking a ball to score a goal. Unqualified, the word football normally means the form of football that is the most popular where the word is used.");
strcpy(a[7].keydata, k8);
a[7].data = &d[7];
a[7].p = &a[8];
//Entering data 9
char k9[50] = "HOCKEY";
strcpy(d[8] , "Hockey is a term used to denote a family of various types of both summer and winter team sports which originated on either an outdoor field, sheet of ice, or dry floor such as in a gymnasium.While these sports vary in specific rules, numbers of players, apparel and, notably, playing surface, they share broad characteristics of two teams playing against each other to propel a ball or disk into a goal with a stick. ");
strcpy(a[8].keydata, k9);
a[8].data = &d[8];
a[8].p = &a[9];
//Entering data 10
char k10[50] = "MANGO";
strcpy(d[9] , "A mango is an edible stone fruit produced by the tropical tree Mangifera indica. It is believed to have originated between northwestern Myanmar, Bangladesh, and northeastern India.");
strcpy(a[9].keydata , k10);
a[9].data = &d[9];
a[9].p = NULL;
}
//Function to add a new key to the existing keys in the hashmap
void insertkey(char *ins)
{
int i , flag =0;
pos = n-1;char da[1000] , da1[1000];
for(i=0;i<n-1; i++)
{
if(strcmp(ins , keychar[i]) == 0)
{
printf("Data exists\n");
flag =1;
break;
}
else if(strcmp(keychar[i] , ins) >0 && strcmp(ins , keychar[i+1]) < 0)
{
pos = i;
flag =0;
break;
}
}
if(flag ==0)
{
for(i=n;i>=pos;i--)
{
strcpy(keychar[i] , keychar[i-1]);
}
 strcpy(keychar[pos] , ins);
//loop to print all the keys
/*for(i = 0; i< n;i++)
printf("%s " , keychar[i]);*/
printf("Enter data\n");
scanf("%s" , da);
gets(da1);
strcat(da,da1);
insertdata(da);
}
}
//Function to add the data of the new key
void insertdata(char *dat)
{
int i;
for(i = n ; i>=pos;i--)
{
strcpy(d[i] , d[i-1]);
}
strcpy(d[pos] , dat);
//puts(d[pos]);
++n;
linkdata();
}
//Function to re-map the data after inserting a new key:value data
void linkdata()
{
int i;
for(i=0;i<n;i++)
{
strcpy(a[i].keydata , keychar[i]);
a[i].data = &d[i];
//linking the last key:value to null
if(i+1==n)
{
a[i].p =NULL;
}
else
a[i].p = &a[i+1];
}
}
void main()
{
char keys[50] , insert[50] , da[1000];
int i , choice , inputc , contc;
//To initially initiallize a sat of data
writeData();
//Menu driven loop
do{
printf("1.DATA RETRIEVAL \n2.ADD KEY AND DATA\n");
printf("Enter choice\n");
scanf("%d" , &inputc);
switch(inputc)
{
//To retrieve data
case 1:
 printf("Enter key value to be searched: ");
 scanf("%s" , keys);
 for( i = 0; i<n; i++)
 {
 if(!(strncmp(keys , (a[i].keydata) , strlen(keys))))
 {
 printf("%d. " , i);
 puts((a[i].keydata));
 printf("\n");
 }
 }
 printf("Enter the key you are seraching for. If not present press -1: ");
 scanf("%d" , &choice);
 if(!(choice >= 0 && choice <=15))
 {
 printf("Sorry no other key present");
 }
 else
 {
puts(a[choice].data);
 }
 break;
//To insert data
case 2:
 printf("Enter key to be inserted:");
 scanf("%s",insert);
 insertkey(&insert);
 break;
default:
 printf("Wrong choice");
}
//Asking user if they wish to continue
printf("\nTo continue, Press 1 else Press 0: ");
scanf("%d" , &contc);
}while(contc == 1);
}