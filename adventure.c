#include <stdio.h>
#include <conio.h>
#include <windows.h>

int lyf=3;

void trex();
int main()
{
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
    printf("  press a key to continue \n");
    getch();

    system("cls"); // clrscr but give command to cmd as "cls" = clrscr


    trex();

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
        printf("  Life remaining is %d\n",lyf);
        printf("  When you open your eyes you saw T rex staring at you and you are at edge of the cliff");
        printf("\n");
        goto sub;
    }
    else if(choice=='b')
    {
        printf("  You started running T-rex keep following you you were so panicked and nervous\n");
        printf("  that you lost the trail the path you selected and guess what you reached the end of a cliff\n");

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
    if(choice=='a')
    {
        printf("Well Fighting a trex is a bad idea i guess You fought taht big guy with a KITCHEN KNIFE! Obviously you lost the battle\n");

    }
    else if(choice=='b')
    {
        printf("bye");
    }

    else
    {
        printf("invalid input");
        Sleep(1000);
        system("cls");
        goto sub;

    }
}



