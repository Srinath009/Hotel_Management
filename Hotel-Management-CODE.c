#include<stdio.h> //header files
#include<conio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
void begin(); //function declarations
int show_details();
void order_food();
void complaints_suggestions();
void book_room();
void check_out();
void next();
struct { //structure that stores details of persons
char name[20];
char number[11];
char address[50];
char email_id[30];
char nationality[25];
int roomno;
char *roomtype;
int billprice;
}person;
int total_amount = 0;
int main(){
person.roomno =0;
person.billprice =0;
printf(".............WELCOME TO MAVOORI RESTAURANT AND LODGE..............\n");
printf("PLEASE ENTER YOUR DETAILS BEFORE MOVING TO THE MAIN PAGE!\n");
printf("PLEASE ENTER UR NAME :");
gets(person.name);
printf("ENTER YOUR ADDRESS : ");
gets(person.address);
printf("ENTER YOUR PHONE NUMBER : ");
gets(person.number);
printf("ENTER YOUR NATIONALITY : ");
gets(person.nationality);
printf("ENTER YOUR EMAIL ID : ");
gets(person.email_id);
system("cls");
time_t timer = time(NULL);//to get the present local time/
begin();
return 0;
}
void begin(void){
int decide;
printf("\n-----------------------WELCOME TO HOME PAGE--------------------------\n");
printf("\n HOW CAN WE HELP YOU?\n\n");
printf("\n1.BOOK A ROOM\n2.SHOW MY DETAILS\n3.ORDER FOOD\n4.COMPLAINTS OR SUGGESTIONS \n5.CHECK OUT\n");
scanf("%d",&decide);
switch(decide)
{
case 1:
book_room();
break;
case 2:
show_details();
begin();
break;
case 3:
order_food();
break;
case 4:
complaints_suggestions();
begin();
break;
case 5:
check_out();
break;
}
}
void book_room(void){
system("cls");
if(person.roomno == 0){
int type_of_rooms;
char ch,c;
printf("\nWhat type of room do u want to book?\n");
printf("\n1.BASIC ROOM RS : 1000\n");
printf("\n ->capacity  1 Bed\n");
printf("\n ->Maximum 4 Members Are Allowed\n");
printf("\n ->Provided with Non Ac \n");
printf("\n ->Single Washroom\n");
printf("\n *NOTE:More than 4 Members Are not Allowed\n");
printf("_______________________________________________");
printf("\n2.MEDIUM ROOM RS : 2000\n");
printf("\n ->Capacity  2 Beds\n");
printf("\n ->Maximum 5 Members Are Allowed\n");
printf("\n ->Provided with Non Ac \n");
printf("\n ->Provided with T.V\n");
printf("\n ->Double washrooms\n");
printf("\n *NOTE:More than 5 Members are not Allowed\n");
printf("_______________________________________________");
printf("\n3.DELUXE ROOM RS :5000\n");
printf("\n ->Capacity 2 Beds");
printf("\n ->Maximum 6 Members Are Allowed\n");
printf("\n ->Provided with Ac \n");
printf("\n ->provided with Broadband services and smart T.V\n");
printf("\n ->Double Washrooms with Geyser\n");
printf("\n *NOTE:More than 6 Members are not Allowed\n");
printf("_______________________________________________");
printf("\n4.I don't want to choose anything and head to home page\n");
printf("\n ENTER UR CHOICE : \t");
scanf("%d",&type_of_rooms);
fflush(stdin);
if(type_of_rooms==1){
printf("\nDo you accept this room?(y/n)\n");
fflush(stdin);
scanf("%c",&c);
if (c=='y'){
system("cls");
printf("\nYOU CHOOSE BASIC ROOM,ENJOY UR STAY\n");
printf("\nYOUR ROOM IS 121\n");
person.roomno = 121;
person.roomtype = "basic";
person.billprice += 1000;
total_amount += 1000;
begin();
}
else
begin();
}
if(type_of_rooms==2){
printf("\nDo you accept this room?(y/n)\n");
scanf("%c",&c);

if(c=='y'){
system("cls");
printf("\nYOU CHOOSE MEDIUM ROOM,ENJOY UR STAY\n");
printf("\nYOUR ROOM IS 212\n");
person.billprice += 2000;
total_amount += 2000;
person.roomno = 212;
person.roomtype = "medium";
begin();}
else
begin();
}
if(type_of_rooms==3){
printf("\nDo u accept this room?(y/n)\n");
scanf("%c",&c);
if(c=='y'){
system("cls");
printf("\nYOU CHOOSE DELUXE ROOM,ENJOY UR STAY\n");
printf("\nYOUR ROOM IS 312\n");
person.billprice += 5000;
total_amount += 5000;
person.roomtype = "deluxe";
person.roomno = 312;
begin();
}
else
begin();
}
if(type_of_rooms==4)
begin();
}
else
printf("you have already booked a room");
}
void order_food(){
    printf("\n           *************************************************             \n");
    printf("\n                     MAVOORI RESTAURANT AND LODGE                        \n");
    printf("\n           *************************************************             \n");
    printf("\n            _______________________________________________              \n");
    printf("\n           |      DISH NAME        |       PRICE           |             \n");
    printf("\n           |-----------------------------------------------|             \n");
    printf("\n           |1.SHAHI PANEER         |         135           |             \n");
    printf("\n           |-----------------------------------------------|             \n");
    printf("\n           |2.KADAI PANEER         |         190           |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |3.CHEESE KORMA         |         150           |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |4.MALAI KOFTA          |         130           |             \n");
    printf("\n           |-----------------------------------------------              \n");
    printf("\n           |5.MATAR PANEER         |         136           |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |6.PALAK PANEER         |         135           |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |7.MIX VEG              |         70            |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |8.ALOO GOBI            |         115           |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |9.ALOO JEERA           |         95            |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |10.CHANA MASALA        |         180           |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |11.MATAR MUSHROOM      |         225           |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |12.RAJMA MAKHANI       |         100           |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |13.DAL MAKHANI         |         170           |             \n");
    printf("\n           |-----------------------------------------------              \n");
    printf("\n           |14.MIXED RAITA         |         45            |             \n");
    printf("\n           |-----------------------------------------------              \n");
    printf("\n           |15.BUNDI RAITA         |         70            |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |16.PINEAPPLE RAITA     |         70            |             \n");
    printf("\n           |-----------------------------------------------              \n");
    printf("\n           |17.SALAD(GREEN)        |         100           |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |18.DUM ALOO            |         195           |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |19.MUSHROOM PANEER     |         165           |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |20.MUTTON MASALA       |         160           |             \n");
    printf("\n           |-----------------------------------------------              \n");
    printf("\n           |21.MUTTON MUGHLAI      |         180           |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |22.MUTTON CURRY        |         380           |             \n");
    printf("\n           -------------------------------------------------             \n");
    printf("\n           |23.MUTTON DO PYAZA     |         190           |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |24.MUTTON SAGH         |         180           |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |25.MUTTON DAHI         |         225           |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |26.MUTTON ROGAN JOSH   |         180           |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |27.MUTTON CURRY        |         180           |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |28.KADAI MUTTON        |         288           |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |29.KEEMA LEVER         |         85            |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |30.KEEMA MATAR         |         250           |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |31.KEEMA EGG           |         140           |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |32.BRAIN CURRY         |         245           |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |33.EGG CURRY           |         140           |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |34.BUTTER CHICKEN      |         220           |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |35.BUTTER CHICKEN(1/2) |         180           |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |36.KADAI CHICKEN       |         200           |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |37.KADAI CHICKEN(1/2)  |         100           |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |38.BUTTER CHICKEN(BL)  |         150           |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |39.BUTTER CHICKEN(BL)1/2|        120           |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |40.CHICKEN MUGHALAI    |       200             |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |41.CHICKEN MUGHALAI(1/2)|        140           |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |42.CHICKEN MASALA      |         360           |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |43.CHICKEN MASALA(1/2) |         180           |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |44.CHICKEN MASALA(1/4) |         140           |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |45.CHICKEN SAGH        |         180           |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |46.CHICKEN SAGH(1/2)   |         90            |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |47.CHICKEN DAHI        |         225           |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |48.CHICKEN DAHI(1/2)   |         125           |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |49.CHICKEN DAHI(1/4)   |         90            |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |50.CHICKEN KORMA       |         277           |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |51.CHICKEN KORMA(1/2)  |         190           |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |52.CHICKEN DO PYAZA    |         180           |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |53.CHICKEN DO PYAZA(1/2)|        90            |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |54.FISH CURRY          |         160           |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |55.CHICKEN CURRY       |         180           |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |56.CHICKEN CURRY(1/2)  |         90            |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |57.CHICKEN CURRY(1/4)  |         60            |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |58.CHILLI CHICKEN      |         150           |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |59.TANDOORI ALOO       |         225           |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |60.CHICKEN TIKKA       |         150           |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |61.SEEKH KABAB         |         180           |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |62.FISH TIKKA          |         180           |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |63.CHICKEN TANDOORI    |         190           |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |64.PANEER TIKKA        |         190           |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |65.CHICKEN SEEK KABAB  |         200           |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |66.CHICKEN HARA KABAB  |          180          |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |67.CHICKEN BIRYANI     |         180           |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |68.MUTTON BIRYANI      |         180           |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |69.PANEER PULAO        |         210           |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |70.VEG PULAO           |         160           |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |71.JEERA RICE          |         190           |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |72.STEAMED RICE        |         65            |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |73.RUMALI ROTI         |         100           |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |74.ROTI                |         75            |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |75.NAN                 |         75            |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |76.ALOO NAN            |         190           |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |77.PANEER NAN          |         200           |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |78.KEEMA NAN           |         70            |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |79.PARANTHA            |         80            |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |80.ALOO PARANTHA       |         150           |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |81.PANEER PARANTHA     |         150           |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |82.PUDHINA PARANTHA    |         100           |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |83.BUTTER NAN          |         90            |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |84.LACHCHA PARANTHA    |         160           |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |85.MISSI ROTI          |         60            |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |86.KHASTHA ROTI        |         100           |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |87.VEG BURGER          |         120           |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |88.PANEER BURGER       |         140           |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |89.CHEESE SANWICH      |         120           |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |90.VEG PATTI           |         120           |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |91.CHICKEN PATTI       |         150           |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |92.TEA                 |         15            |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |93.COFFEE              |         30            |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |94.COLD COFFEE         |         60            |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |95.PINEAPPLE           |         50            |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |96.STRAWBERRY          |         40            |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |97.CHOCOLATE           |         40            |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |98.BLACK FOREST        |         190           |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |99.DOUBLE STORIED      |         180           |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |100.TRIPLE STORIED     |         200           |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |101.SOFT CONE          |         70            |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |102.VANILLA            |         60            |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |103.STRAWBERRY         |         60            |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |104.CHOCOLATE          |         40            |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |105.CHCOCO CHIPS       |         30            |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |106.MANGO              |         80            |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |107.TUTTI FRUITY       |         30            |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |108.LICHI              |         50            |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |109.PISTA BADAM        |         60            |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |110.CHOCOLATE PISTA BADAM|       25            |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |111.CHOCO DIP          |         70            |             \n");
    printf("\n           |------------------------------------------------             \n");
    printf("\n           |112.CHOCOLATE LICHI    |         80            |             \n");
    printf("\n           |_______________________________________________|             \n");
    printf("\n           *************************************************             \n");
    printf("\n                                THE END                                  \n");
    printf("\n           *************************************************             \n");
    printf("\n               SELECT THE FOOD ITEMS FROM ABOVE MENU                     \n");
    next();
}

int show_details(){
int type;
printf("........DETAILS........\n");
printf("NAME : %s\n",person.name);
printf("NATIONALITY : %s\n",person.nationality);
printf("EMAIL ID : %s\n",person.email_id);
printf("ADDRESS : %s\n",person.address);
printf("PHONE NUMBER : %s\n",person.number);
printf("ROOM NO : %d\n",person.roomno);
printf("ROOM TYPE : %s\n",person.roomtype);
}

void complaints_suggestions(void){
int type;
system("cls");
char complain[500];
printf("PLEASE ENTER UR COMPLAINTS OR SUGGESTIONS\n");
fflush(stdin);
scanf("%c",&complain);
printf("*************************THANK U FOR UR VALUABLE SUGGESTIONS ************************************\n");
}

void check_out()
{
   printf("\nTOTAL AMOUNT TO BE PAID : %d rupees/-\n", total_amount);
   printf("\nYOU CAN PAY THROUGH UPI,CARD AND CASH\n");
   printf("\n THANKS FOR VISITING \n");
}
void next()
{
int a,qty,rate,total,type;
printf("\nIF U WANT TO BOOK FOOD FROM THE ABOVE MENU TYPE 0 ELSE 1 : \t");
scanf("%d",&type);
if(type==0)
{
    printf("\nTYPE THE NUMBER OF A REQUIRED FOOD ITEM FROM THE MENU : \t");
    scanf("%d",&a);
    switch(a)
 {
  case 1:
    printf("\nYou have selected SHAHI PANEER.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=135;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();
    break;
  case 2:
    printf("\nYou have selected KADAI PANEER.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=190;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();
    break;
  case 3:
    printf("\nYou have selected CHEESE KORMA.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=150;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();
    break;
  case 4:
    printf("\nYou have selected MALAI KOFTA.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=130;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 5:
    printf("\nYou have selected MATAR PANEER.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=136;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 6:
    printf("\nYou have selected PALAK PANEER.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=135;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 7:
    printf("\nYou have selected MIX VEG.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=70;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 8:
    printf("\nYou have selected ALOO GOBI.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=115;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 9:
    printf("\nYou have selected ALOO JEERA.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=95;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 10:
    printf("\nYou have selected CHANA MASALA.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=180;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 11:
    printf("\nYou have selected MATAR MUSHROOM.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=225;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 12:
    printf("\nYou have selected RAJMA MAKHAN.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=100;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 13:
    printf("\nYou have selected DAL MAKHANI.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=170;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
   case 14:
    printf("\nYou have selected MIXED RAITA.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=45;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
   case 15:
    printf("\nYou have selected BUNDI RAITA.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=70;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
   case 16:
    printf("\nYou have selected PINEAPPLE RAITA.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=70;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
   case 17:
    printf("\nYou have selected SALAD(GREEN).\n Enter the quantity :");
    scanf("%d",&qty);
    rate=100;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
   case 18:
    printf("\nYou have selected DUM ALOO.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=195;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
   case 19:
    printf("\nYou have selected MUSHROOM PANEER.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=165;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
   case 20:
    printf("\nYou have selected MUTTON MASALA.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=160;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
   case 21:
    printf("\nYou have selected MUTTON MUGHLAI.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=180;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
   case 22:
    printf("\nYou have selected MUTTON KORMA .\n Enter the quantity :");
    scanf("%d",&qty);
    rate=380;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
   case 23:
    printf("\nYou have selected MUTTON DO PYAZA.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=190;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
   case 24:
    printf("\nYou have selected MUTTON SAGH.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=180;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
   case 25:
    printf("\nYou have selected MUTTON DAHI.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=225;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 26:
    printf("\nYou have selected MUTTON ROGAN JOSH.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=180;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 27:
    printf("\nYou have selected MUTTON CURRY.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=180;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 28:
    printf("\nYou have selected KADAI MUTTON.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=288;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 29:
    printf("\nYou have selected KEEMA LEVER.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=120;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 30:
    printf("\nYou have selected KEEMA MATAR.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=250;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 31:
    printf("\nYou have selected KEEMA EGG.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=140;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 32:
    printf("\nYou have selected BRAIN CURRY.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=245;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 33:
    printf("\nYou have selected EGG CURRY.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=143;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 34:
    printf("\nYou have selected BUTTER CHICKEN.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=220;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 35:
    printf("\nYou have selected BUTTER CHICKEN(1/2).\n Enter the quantity :");
    scanf("%d",&qty);
    rate=180;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 36:
    printf("\nYou have selected KADAI CHICKEN.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=200;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 37:
    printf("\nYou have selected KADAI CHICKEN(1/2).\n Enter the quantity :");
    scanf("%d",&qty);
    rate=100;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 38:
    printf("\nYou have selected BUTTER CHICKEN(BL).\n Enter the quantity :");
    scanf("%d",&qty);
    rate=150;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 39:
    printf("\nYou have selected BUTTER CHICKEN(BL)(1/2).\n Enter the quantity :");
    scanf("%d",&qty);
    rate=120;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 40:
    printf("\nYou have selected CHICKEN MUGHLAI.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=200;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 41:
    printf("\nYou have selected CHICKEN MUGHLAI(1/2).\n Enter the quantity :");
    scanf("%d",&qty);
    rate=140;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 42:
    printf("\nYou have selected CHICKEN MASALA.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=360;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 43:
    printf("\nYou have selected CHICKEN MASALA(1/2).\n Enter the quantity :");
    scanf("%d",&qty);
    rate=180;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 44:
    printf("\nYou have selected CHICKEN MASALA(1/4).\n Enter the quantity :");
    scanf("%d",&qty);
    rate=140;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 45:
    printf("\nYou have selected CHICKEN SAGH.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=180;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 46:
    printf("\nYou have selected CHICKEN SAGH(1/2).\n Enter the quantity :");
    scanf("%d",&qty);
    rate=90;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 47:
    printf("\nYou have selected CHICKEN DAHI.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=225;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 48:
    printf("\nYou have selected CHICKEN DAHI(1/2).\n Enter the quantity :");
    scanf("%d",&qty);
    rate=125;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 49:
    printf("\nYou have selected CHICKEN DAHI(1/4).\n Enter the quantity :");
    scanf("%d",&qty);
    rate=90;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 50:
    printf("\nYou have selected CHICKEN KORMA.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=277;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total; next();  break;
  case 51:
    printf("\nYou have selected CHICKEN KORMA(1/2).\n Enter the quantity :");
    scanf("%d",&qty);
    rate=190;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 52:
    printf("\nYou have selected CHICKEN DO PYAZA.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=180;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 53:
    printf("\nYou have selected CHICKEN DO PYAZA(1/2).\n Enter the quantity :");
    scanf("%d",&qty);
    rate=90;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 54:
    printf("\nYou have selected FISH CURRY.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=160;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 55:
    printf("\nYou have selected CHICKEN CURRY.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=180;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 56:
    printf("\nYou have selected CHICKEN CURRY(1/2).\n Enter the quantity :");
    scanf("%d",&qty);
    rate=90;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 57:
    printf("\nYou have selected CHICKEN CURRY(1/4).\n Enter the quantity :");
    scanf("%d",&qty);
    rate=60;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 58:
    printf("\nYou have selected CHILLI CHICKEN.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=140;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 59:
    printf("\nYou have selected TANDOORI ALOO.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=225;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 60:
    printf("\nYou have selected CHICKEN TIKKA.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=150;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 61:
    printf("\nYou have selected SEEKH KABAB.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=180;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 62:
    printf("\nYou have selected FISH TIKKA.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=180;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 63:
    printf("\nYou have selected CHICKEN TANDOORI.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=190;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 64:
    printf("\nYou have selected PANEER TIKKA.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=190;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 65:
    printf("\nYou have selected CHICKEN SEEKH KABAB.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=200;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 66:
    printf("\nYou have selected CHICKEN HARA KABAB.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=180;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 67:
    printf("\nYou have selected CHICKEN BIRYANI.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=180;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 68:
    printf("\nYou have selected MUTTON BIRYANI.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=180;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 69:
    printf("\nYou have selected PANEER PULAO.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=210;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 70:
    printf("\nYou have selected VEG PULAO.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=160;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total; next();  break;
  case 71:
    printf("\nYou have selected JEERA RICE.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=190;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 72:
    printf("\nYou have selected STEAMED RICE.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=65;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 73:
    printf("\nYou have selected RUMALI ROTI.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=100;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 74:
    printf("\nYou have selected ROTI.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=75;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 75:
    printf("\nYou have selected NAN.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=190;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 76:
    printf("\nYou have selected ALOO NAN.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=190;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 77:
    printf("\nYou have selected PANEER NAN.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=200;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 78:
    printf("\nYou have selected KEEMA NAN.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=70;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 79:
    printf("\nYou have selected PARANTHA.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=80;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 80:
    printf("\nYou have selected ALOO PARANTHA.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=150;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 81:
    printf("\nYou have selected PANEER PARANTHA.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=150;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 82:
    printf("\nYou have selected PUDINA PARANTHA.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=100;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 83:
    printf("\nYou have selected BUTTER NAN.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=90;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 84:
    printf("\nYou have selected LACHCHA PARANTHA.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=160;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 85:
    printf("\nYou have selected MISSI ROTI.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=60;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 86:
    printf("\nYou have selected KHASTHA ROTI.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=100;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 87:
    printf("\nYou have selected VEG BURGER.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=120;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 88:
    printf("\nYou have selected PANEER BURGER.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=140;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 89:
    printf("\nYou have selected CHEESE SANDWICH.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=120;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 90:
    printf("\nYou have selected VEG PATTI.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=120;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 91:
    printf("\nYou have selected CHICKEN PATTI.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=150;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 92:
    printf("\nYou have selected TEA.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=15;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 93:
    printf("\nYou have selected COFFEE.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=30;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 94:
    printf("\nYou have selected COLD COFFEE.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=60;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 95:
    printf("\nYou have selected PINEAPPLE.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=50;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 96:
    printf("\nYou have selected STRAWBERRY.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=40;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 97:
    printf("\nYou have selected CHOCOLATE.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=40;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 98:
    printf("\nYou have selected BLACK FOREST.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=190;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 99:
    printf("\nYou have selected DOUBLE STORIED.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=180;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 100:
    printf("\nYou have selected TRIPLE STORIED.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=200;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 101:
    printf("\nYou have selected SOFT CONE.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=70;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 102:
    printf("\nYou have selected VANILA.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=60;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 103:
    printf("\nYou have selected STRAWBERRY.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=60;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 104:
    printf("\nYou have selected CHOCOLATE.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=40;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 105:
    printf("\nYou have selected CHOCOCHIPS.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=30;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 106:
    printf("\nYou have selected MANGO.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=80;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 107:
    printf("\nYou have selected TUTTI FRUITY.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=30;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 108:
    printf("\nYou have selected LICHI.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=50;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 109:
    printf("\nYou have selected PISTA BADAM.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=60;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 110:
    printf("\nYou have selected CHOCOLATE PISTA.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=25;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 111:
    printf("\nYou have selected CHOCO DIP .\n Enter the quantity :");
    scanf("%d",&qty);
    rate=70;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  case 112:
    printf("\nYou have selected CHOCOLATE LITCHI.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=80;
    total=qty*rate;
    printf("\nTotal amount :%d",total);
    total_amount += total;
    next();  break;
  }
 }
 else
 {
     begin();
 }
}
