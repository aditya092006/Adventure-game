#include <stdio.h>
#include <conio.h>
#include <windows.h>

int lyf=3;

void trex();
void egypt();
void lost();
void Rome();
void Alien();
int main()
{
    char choice;
    printf("\n");
    printf("  It's the year 2023 and now a scientist named Mr William sausage has created a time machine you are selected as a time");
    printf("\n");
    Sleep(1000);
    printf("  traveller but this machine is bounded with a magical spell if you die it will save you but it will save you for certian number of time ");

    printf("\n");
    printf("  Let's begin your journey please wear your seat belt,");
    printf("\n");
    Sleep(1000);
    printf("\n *****************A FEW MOMENTS LATER ************ \n");
    printf("\n");
    Sleep(1000);
    printf("  I guess we are out of energy we might stop during our journey, Emergency landing mode activated @#$@#$@# BEEEP BOOOOP BEEEP\n");
    printf("\n  press a key to continue \n");
    getch();

    system("cls"); // clrscr but give command to cmd as "cls" = clrscr


    trex();
    egypt();

    Again:

    printf("\n  I dont want you to stay here you are more smarter than i thought please leave this era i have my allies in Roman era and Alien era\n");
    printf("  \n***************************************************************************\n");
    printf("  a) Roman Era\n");
    printf("  b) Alien Era \n");
    scanf(" %c",&choice);
    if(choice=='a')
        Rome();
    else if(choice=='b')
        Alien();
    else{
        printf("  Invalid input\n");
        Sleep(2000);
        system("cls");
        goto Again;
    }

    return 0;

}

void trex()
{

    char choice;
    Sleep(1000);
    printf("  You lost consciousness when consciousness returned you saw a T-REX ! is running towards you oh my lord you must react immediately \n");
    printf("\n");
    Sleep(1000);

    start:

    printf("  You have two options\n");
    printf("\n");
    Sleep(1000);
    printf("  ***************************************************************************************\n");
    printf("\n  a)Kill that dinosaur with your futuristic weapon\n");
    printf("  b)Run away! \n");
    printf("\n");
    printf("  ***************************************************************************************\n");

    scanf(" %c",&choice);

    if(choice=='a')
    {
        printf("  The only weapon you had was a kitchen knife, you tried battling the dinosaur with a kitchen knife well,\n");
        printf("  ofc you were thrashed by a dinosaur and the amount of force lead you unconsciousness\n");

        lyf=lyf-1;
        Sleep(1000);
        printf("\n  ************************* \n");
        printf("\n  Life remaining is %d\n",lyf);
        printf("  When you open your eyes you saw T rex staring at you and you are at edge of the cliff");
        printf("\n");

    }
    else if(choice=='b')
    {
        printf("  You started running T-rex keep following you you were so panicked and nervous\n");
        printf("  that you lost the trail the path you selected and guess what you reached the end of a cliff\n");
        Sleep(1000);

    }
    else
    {
        printf("invalid input\n");
        Sleep(1000);
        system("cls");
        goto start;
    }
    printf("\n");

    sub:

    printf("  Now you have two options\n");
    printf("  ****************************************\n");
    printf("\n");
    printf("  a) FIGHT BACK!!\n");
    printf("  b) JUMP OFF THE CLIFF\n");
    printf("\n");
    printf("  ****************************************\n");
    scanf(" %c",&choice);
    fflush(stdin);
    if(choice=='a')
    {
        printf("  Well Fighting a trex is a bad idea i guess You fought that big guy with a KITCHEN KNIFE! Obviously you lost the battle\n");
        lyf = lyf-1;
        printf("\n  Life remaining %d \n",lyf);
        Sleep(1000);
        printf("\n  When the T rex was almost there to eat you your time machine started Lucky guy you were shifted to new era\n");
        printf("\n  PRESS ANY KEY TO CONTINUE\n");
        getch();
        system("cls");

    }
    else if(choice=='b')
    {

        printf("  Well you jump off that is the worst decision ever but I guess you have pretty solid luck\n  All of a sudden the time machine starts and you got teleported to a new era!\n");
        Sleep(500);
        printf("\n  PRESS ANY KEY TO CONTINUE\n");
        getch();
        system("cls");
    }

    else
    {

        printf("invalid input");
        Sleep(1000);
        system("cls");
        goto sub;

    }
}


void egypt()
{
    printf("\n  You travel to an unknown era but the place looks like Egyt assuming by looking at that HUGE pyramid \n");
    printf("\n");
    Sleep(1500);
    printf("\n");

        int i,j,n=50,ans;
        for(i=1;i<=n;i++){
            for(j=1;j<=2*n-1;j++){

                    if(j>=n-(i-1) && j<=n+(i-1)){
                        printf("*");
            }
            else
            printf(" ");

        }
        printf("\n");
    }

printf("\n  you wandered around and suddenly a guard spotted you he made a different hand sign but u won't understand it very well\n");
printf("  so you just shown a victory sign and started leaving the guard got raged he locked your hands and took you to the pyramid\n");
printf("  He took you to the leader, surprisingly leader knew the modern language a bit so he asked you 3 quick math questions\n");
printf("  if you can solve you will be set free or else you will lose 1 life in each wrong answer\n");
printf("\n  PRESS ANY KEY TO CONTINUE\n");
getch();
system("cls");

printf("  LETS BEGIN HAHAHAHA!! \n");

printf("  *************************************************************************************************\n");
Q1:
printf("\n  Q1 ) Look at this series: 53, 53, 40, 40, 27, 27,... What number should come next? \n");
scanf(" %d",&ans);
if(ans==14)
    printf("\n  VERY WELL! time for new question \n");


else{
    lyf=lyf-1;
    printf("\n  LIFE REAMINING IS %d\n",lyf);
    if(lyf==0){
        lost();

    }
    else{goto Q1;}

}

Q2:
printf("\n  Q2)  WHAT IS 289*123? \n");
scanf(" %d",&ans);
if(ans==35547)
    printf("\n  WAIT YOU USED CALCULATOR!!! WELL NVM NEXT QUESTION!!!! \n");


else{
    lyf=lyf-1;
    printf("\n  LIFE REAMINING IS %d\n",lyf);
    if(lyf==0){
        lost();

    }
    else{goto Q2;}

}

Q3:
printf("\n last this one is easy what is 8/2(2+2)  \n");
scanf(" %d",&ans);
if(ans==16)
    printf("\n  OH BOY ACED IT HOW ARE YOU SO SMART!! \n");


else{
    lyf=lyf-1;
    printf("\n  LIFE REAMINING IS %d\n",lyf);
    if(lyf==0){
        lost();

    }
    else{goto Q3;}

}

}

void Rome()
{
    printf("  ROME!");
}

void Alien()
{
    printf("  You were");
}
void lost()
{
    Sleep(2000);
    system("cls");
    printf("GAME OVER BUDDY\n");
    exit(0);

}
