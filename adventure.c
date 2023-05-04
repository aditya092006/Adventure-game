#include <stdio.h>
#include <conio.h>
#include <windows.h>


FILE *fpoint;
FILE *flife;
int lyf;

void trex();
void egypt();
void lost();
void Rome();
void Alien();
void game();


int main()
{
    system("COLOR 0B");
    int i;
    char choice,ch;

    fpoint = fopen("op.txt","r");

    flife = fopen("lyf.txt","r+");


    for(i=0; i<35; i++)
    {
        printf("\n");
    }
    if(fpoint!=NULL&&flife!=NULL)
    {
        printf("\t\t\t\t\t\t\t\t\t\t\tA) NEW GAME\n");
        printf("\t\t\t\t\t\t\t\t\t\t\tB) SAVED GAME\n");

        choice=getch();


        if(choice=='b'||choice=='B')
        {
            rewind(fpoint);
            ch = fgetc(fpoint);
            fclose(fpoint);
            rewind(flife);

            fscanf(flife,"%d",&lyf);
            perror("Error reading integer from file");
            fclose(flife);




            if(ch=='t')
            {
                goto e1;
            }
            else if(ch=='e')
            {
                goto e2;
            }
            else if(ch=='r')
            {
                goto e3;
            }
            else if(ch=='a')
            {
                goto e4;
            }
        }
        else if(choice == 'a' || choice == 'A')
        {

            int num;
            start:

            system("cls");
            printf("select difficulty");
            printf("\n************************************************************************************************\n");
            printf("1) EASY\n");
            printf("2) Medium\n");
            printf("3) Hard\n");
            printf("\n***********************************************************************************************\n");
            scanf("%d",&num);
            if(num==1)
            {
                lyf = 5;
            }
            else if(num==2){
                lyf= 3;
            }
            else{
                lyf = 1;
            }
            system("color 0E");

            system("cls");
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
            remove("lyf.txt");
            remove("op.txt");

            system("cls"); // clrscr but give command to cmd as "cls" = clrscr
            for(i=0; i<10; i++)
            {
                printf("RESOLVING ERROR.........................................................................");
                system("COLOR F0");
                system("COLOR 10");
                system("COLOR 20");
                system("COLOR 30");
                system("COLOR 40");
                system("COLOR 50");
                system("COLOR 60");
                system("COLOR 70");
                system("COLOR 80");
                system("COLOR 90");
                system("COLOR A0");
                system("COLOR B0");
                system("COLOR C0");
                system("COLOR D0");
                system("COLOR E0");
            }
            system("COLOR 0F");
            printf("\n ******************************************************************************************************************************* \n");
            printf("\n ERROR NOT SOLVED EMERGENCY LANDING IN DINOSAUR ERA!\n");
            printf("\n ******************************************************************************************************************************* \n");
            Sleep(4000);
            system("cls");

            e1:
            trex();
            e2:
            egypt();


            Again:

            printf("\n  I dont want you to stay here you are more smarter than i thought please leave this era i have my allies in Roman era and Alien era\n");
            printf("  \n***************************************************************************\n");
            printf("  a) Roman Era\n");
            printf("  b) Alien Era \n");

            choice = getch();

            if(choice=='a' || choice=='A')
            {
                e3:
                Rome();
            }
            else if(choice=='b'|| choice=='B')
            {
                e4:
                Alien();
            }
            else
            {
                printf("  Invalid input\n");
                Sleep(2000);
                system("cls");
                goto Again;


            }
        }
    }
    else
    {

        goto start;
    }
    return 0;
}

void trex()
{char ch='t';
fpoint = fopen("op.txt", "w");
fprintf(fpoint, "%c", ch);
fclose(fpoint);
system("cls");

    char choice,temp='e';
    Sleep(1000);
    printf("  You lost consciousness when consciousness returned you saw a T-REX ! is running towards you oh my lord you must react immediately! \n");
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


    choice = getch();

    if(choice=='a'|| choice=='A')
    {
        printf("  The only weapon you had was a kitchen knife, you tried battling the dinosaur with a kitchen knife well,\n");
        printf("  ofc you were thrashed by a dinosaur and the amount of force lead you unconsciousness\n");

        lyf=lyf-1;
        flife = fopen("lyf.txt","w");
        fprintf(flife,"%d",lyf);
        fclose(flife);
        Sleep(1000);
        printf("\n  ************************* \n");
        printf("\n  Life remaining is %d\n",lyf);
        printf("  When you open your eyes you saw T rex staring at you and you are at edge of the cliff");
        printf("\n");

    }
    else if(choice=='b'|| choice=='B')
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
    fflush(stdout);
    choice = getch();

    if(choice=='a'||choice=='A')
    {
        printf("  Well Fighting a trex is a bad idea i guess You fought that big guy with a KITCHEN KNIFE! Obviously you lost the battle\n");
        lyf = lyf-1;
        flife = fopen("lyf.txt","w");
        fprintf(flife,"%d",lyf);
        fclose(flife);
        printf("\n  Life remaining %d \n",lyf);
        Sleep(1000);
        printf("\n  When the T rex was almost there to eat you your time machine started Lucky guy you were shifted to new era\n");
        printf("\n  PRESS ANY KEY TO CONTINUE\n");
        getch();
        system("cls");

    }
    else if(choice=='b'||choice=='B')
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
{char ch='e';
fpoint = fopen("op.txt", "w");
fprintf(fpoint, "%c", ch);
fclose(fpoint);
system("cls");
system("color 0A");

    printf("\n  You travel to an unknown era but the place looks like Egyt assuming by looking at that HUGE pyramid \n");
    printf("\n");
    Sleep(1500);
    printf("\n");

    int i,j,n=50,ans;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=2*n-1; j++)
        {

            if(j>=n-(i-1) && j<=n+(i-1))
            {
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


    else
    {
        lyf=lyf-1;
        printf("\n  LIFE REAMINING IS %d\n",lyf);
                flife = fopen("lyf.txt","w");
        fprintf(flife,"%d",lyf);
        fclose(flife);
        if(lyf==0)
        {
            lost();

        }
        else
        {
            goto Q1;
        }

    }

Q2:
    printf("\n  Q2)  WHAT IS 289*123? \n");
    scanf(" %d",&ans);
    if(ans==35547)
        printf("\n  WAIT YOU USED CALCULATOR!!! WELL NVM NEXT QUESTION!!!! \n");


    else
    {
        lyf=lyf-1;
        printf("\n  LIFE REAMINING IS %d\n",lyf);
                flife = fopen("lyf.txt","w");
        fprintf(flife,"%d",lyf);
        fclose(flife);
        if(lyf==0)
        {
            lost();

        }
        else
        {
            goto Q2;
        }

    }

Q3:
    printf("\n last this one is easy what is 8/2(2+2)  \n");
    scanf(" %d",&ans);
    if(ans==16)
        printf("\n  OH BOY ACED IT HOW ARE YOU SO SMART!! \n");


    else
    {
        lyf=lyf-1;
        printf("\n  LIFE REAMINING IS %d\n",lyf);
                flife = fopen("lyf.txt","w");
        fprintf(flife,"%d",lyf);
        fclose(flife);
        if(lyf==0)
        {
            lost();

        }
        else
        {
            goto Q3;
        }

    }

}

void Rome()
{char ch='r';
fpoint = fopen("op.txt", "w");
fprintf(fpoint, "%c", ch);
fclose(fpoint);
system("cls");
system("color 01");

    char choice;
Rome_start:
    system("cls");
    printf("  You finally arrived roman era, The bustling streets were filled with people, carts, and animals, and the air was thick with the scent of spices and cooking fires.\n");
    printf("  \n***************************************************************************\n");
    printf("  a) Explore market and look for something useful\n");
    printf("  b) Interrogate some roman citizen to gather useful information\n");
    printf("  \n***************************************************************************\n");

    choice = getch();


    if(choice=='a'||choice=='A')
    {
        printf("   You explored the city, you were amazed by the incredible feats of engineering and architecture on display, from the towering aqueducts to the magnificent Colosseum\n");
        printf("  All of the sudden, everyone bows their head and you saw a strong man riding on horse, now that man is approaching towards you\n");
        printf("  That man said 'I guess you are new here you don't have atticates to bow you head in front of the warden\n");
        printf("  Before you utter a word they thrashed you and take you to the king\n");

    }
    else if(choice=='B'||choice=='b')
    {
        printf("  you were wandering around looking at rich roman culture a local approaches you..\n");
        printf("  Hey young man you look different are you from different country..\n");
        printf("\n  ***************************************************************************\n");
        printf("\n  a) Disagree with him");
        printf("  b) Tell him your whole story...");
        printf("\n  ***************************************************************************\n");


        choice = getch();

        if(choice=='A'|| choice=='a')
        {

            printf("\n Hah dont disagree with me i know you are lying i am great-grandson of the founder of rome i know romans nothing from heart!\n");
            printf("  GUARDS!! CATCH THIS INTRUDER");

        }
        else if(choice=='b'||choice=='B')
        {
            printf("WHAT..YOU...YOU LIAR GURADS!! HELP!!..HE IS AN INTRUFER!");
        }
    }
    else
    {
        printf(" INVALID INPUT!");
        goto Rome_start;
    }

    printf("\n Guards took you to the king....\n");
    printf(" Oh you are from ottomans? their secret spy? well say the truth or get killed!\n");
    printf("\n  ***************************************************************************\n");
    printf("  a) Tell him the whole story......");
    printf("\n  b) Disagree with him!");
    printf("\n  ***************************************************************************\n");

    choice=getch();
r2:
    if(choice=='A'|| choice=='a')
    {
        printf("\n  oh you are the so called time traveler then help me to fix the wall...\n");
        printf("  Send him to the slaves.....\n");

    }
    else if(choice=='b'||choice=='B')
    {
        printf("  WHAT HOW DARE YOU DISAGREE WITH ME!...A LESSON NEVER DISAGREE WITH KING!!..........GAUARDS KILL HIM\n");
        lost();
    }
    else
    {
        goto r2;
    }

    printf("\n when you were send to slaves you saw a miniac running towards with a knife his intention doset look good what you will do?\n");
    printf("\n  ***************************************************************************\n");
    printf("  a) Kill him! with your futuristic weapon!");
    printf("\n  b) take a selfie with him!");
    printf("\n  ***************************************************************************\n");
    choice = getch();



    if(choice=='a'|| choice=='A')
    {
        printf("he won he is miniac after all");
        lyf--;
        printf("Life remaining is %d\n",lyf);

    }
    else if(choice=='b'|| choice=='B')
    {
        printf("what on earth you were thinking the miniac stabbed you!!");
    }

    printf("\n");
    int i;
    for(i=0;lyf==0;i++)
    {
        printf("\n you woke up the miniac was staring at you he killed you again!");
        printf("\n  Life remaining is %d",lyf);
        lyf--;
    }
    lost();








}

void Alien()
{char ch='a';
fpoint = fopen("op.txt", "w");
fprintf(fpoint, "%c", ch);
fclose(fpoint);
system("cls");
system("color 05");

    char choice;
    system("cls");
    printf("  You were shifted to Alien era The sky was a vivid purple, the trees were tall and skinny, and the creatures that roamed the land were unlike anything she had ever seen before\n");
    printf(" You saw a Human footprint now its time to make descion!!\n");
    Sleep(1000);
Alien_start:
    printf("\n  ***************************************************************************************************************************************************\n");
    printf("\n  a)Follow the foot prints\n");
    printf("  b) Try communicating with aliens\n");
    printf("\n  ***************************************************************************************************************************************************\n");
    fflush(stdin);
    choice = getch();

    if(choice=='a'|| choice == 'A')
    {
        Sleep(1000);
        printf("  You followed the footprints and you saw a dead corpse, you were not able to identify who was it tho....\n");
        printf("\n  ***************************************************************************************************************************************************\n");
        printf("  a) Burn the corpse\n");
        printf("  b) Loot the corpse\n");
        printf("\n  ***************************************************************************************************************************************************\n");
        scanf(" %c",&choice);
        fflush(stdin);
        if(choice=='a'|| choice=='A')
        {
            printf("  You try burning him but the alien insects feeding him attacked you\n");
            lyf=lyf-1;
            printf("  Life is remaining is %d\n",lyf);
            flife= fopen("lyf.txt","w");
        fprintf(flife,"%d",lyf);
        fclose(flife);
            if(lyf==0)
            {
                lost();
            }
            printf("  a alien came and saved you then he started taking you somewhere forcefully....");
            Sleep(1000);
        }
        else if(choice=='b'||choice=='B')
        {
            printf("  When you looting the corpse a guard so you he immediately knocked you out by alien \n");
            printf("  You woke and saw alien is dragging you somewhere you got panicked you try to break free but nothing works... \n");
            Sleep(1000);
        }
        else
        {
            printf("  invalid input\n");
            Sleep(1000);

            goto Alien_start;
        }



    }

    else if(choice=='b'||choice=='B')
    {
        printf("  You tried communicating with aliens they were not able to understand you , You have an idea...\n");
a_start2:
        printf("\n  ***************************************************************************************************************************************************\n");
        printf("  a) Try smacking them with your futuristic weapon and let them understand your point forcefully\n");
        printf("  b) Try convincing them using hand signs\n");
        printf("\n  ***************************************************************************************************************************************************\n");


        choice = getch();

        if(choice=='a'||choice=='A')
        {
            printf("You smack the alien with kitchen knife there was no effect on it, The alien smacked you hard and lead you unconcious \n");

        }
        else if(choice=='b'||choice=='B')
        {

            printf("  You show them hand signs the alien got aggressive and start beating and injured you insanely and lead to unconscious\n");
            lyf=lyf-1;
            printf("\n  Life remaining is %d",lyf);
            flife = fopen("lyf.txt","w");
        fprintf(flife,"%d",lyf);
        fclose(flife);
            if(lyf==0)
            {
                lost();
            }


        }
        else
        {
            printf("  invalid input\n");
            Sleep(1000);
            goto a_start2;
        }



    }
    printf("  The aliens finally stops and gave you the blue capsule and ran away after seeing a BIG GIANT ALIEN!!\n");
    printf("\n  That BIG!! alien starting taking you to a big building it looks like King...It was surprising that alien can speak English \n");
    printf("\n  Our planet will be struck by asteroid if you can solve this question our ancient shield will be activated\n");
    printf("  Wait you have the blue capsule it can be used for activating shield use the blue caspule and solve the puzzel\n");
    printf("\n  enter key to continue\n");
    getch();
    game();
    system("cls");
    printf("  wow thank you so much  we will help you send back in your time to repay your favour\n");
    printf("  Your time machine was recovered.......you were sent back!!\n");
    printf("  When you were sent back you saw a note on every corner in the world saying WE ALL TRIED MR WILLIAM'S SAUSAGE TIME MACHINE\n");
    remove("op.txt");
    remove("lyf.txt");


}

void game()
{


    char choice;
    system("cls");
    system("color 01");
    printf("ENTER TEXT COLOR\n");
    printf("\n  ***************************************************************************************************************************************************\n");
    printf("a) Blue\n");
    printf("b) Red\n");

    choice = getch();
    printf("\n  ***************************************************************************************************************************************************\n");
    if(choice=='a'||choice=='A')
    {
        printf("\n  BEEP BOOP BEEP SYSTEM GOT RIGHT NEXT\n");
        Sleep(1000);
    }
    else if(choice=='b'||choice=='B')
    {
        printf("\n  YOU ARE MORE PATHETIC THAN US I WILL TAKE YOU ALL LIFES AHHH!\n");
        Sleep(1000);
        lost();

    }
    system("cls");
    system("color 02");
    printf("ENTER TEXT COLOR\n");
    printf("\n  ***************************************************************************************************************************************************\n");
    printf("a) Purple\n");
    printf("b) Green\n");
    fflush(stdin);
    choice = getch();

    printf("\n  ***************************************************************************************************************************************************\n");
    if(choice=='b'||choice=='B')
    {
        printf("\n  BEEP BOOP BEEP SYSTEM GOT RIGHT NEXT\n");
        Sleep(1000);
    }
    else if(choice=='A'||choice=='a')
    {
        printf("\n  YOU ARE MORE PATHETIC THAN US I WILL TAKE YOU ALL LIFES AHHH!\n");
        Sleep(1000);
        lost();

    }

    system("cls");
    system("color 06");
    printf("ENTER TEXT COLOR\n");
    printf("\n  ***************************************************************************************************************************************************\n");
    printf("a) Blue\n");
    printf("b) Yellow\n");

    fflush(stdin);
    choice = getch();
    printf("\n  ***************************************************************************************************************************************************\n");
    if(choice=='b'||choice=='B')
    {
        printf("\n  BEEP BOOP BEEP SYSTEM GOT RIGHT NEXT\n");
        Sleep(1000);
    }
    else if(choice=='A'||choice=='a')
    {
        printf("\n  YOU ARE MORE PATHETIC THAN US I WILL TAKE YOU ALL LIFES AHHH!\n");
        Sleep(1000);
        lost();

    }
}
void lost()
{
    int C;
    fclose(fpoint);
    Sleep(2000);
    system("COLOR 4f");
    system("cls");
    printf("        xxxxx\n");
    printf("       x     x\n");
    printf("      x o o x\n");
    printf("     x   v   x\n");
    printf("    xx  xxx  xx\n");
    printf("   x          x\n");
    printf("   x  x    x  x\n");
    printf("   x  x    x  x\n");
    printf("    x x    x x\n");
    printf("     x      x\n");
    printf("      x    x\n");
    printf("       xxx\n");


    printf("GAME OVER BUDDY\n");
    remove("op.txt");
    remove("lyf.txt");


    exit(0);
}





