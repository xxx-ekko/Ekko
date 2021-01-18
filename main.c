#include <stdio.h>
#include <stdlib.h>

int main()

{
    int ans=0;int Plr=0;int Pts=0;int loop=0;
    do{
    printf("\t\t\t***************Welcome to Question For a Noob !***************\n\n");
    printf("How many player are you guys ?(Max 10!!!\n\n");
    scanf("%d", &Plr);
    for (int i=0; i<Plr; i++) {
        printf("Player %d turn\n", i+1);
        printf("Okay, so it's about 5 questions and each question give you 2 points ! ;)\n");
        printf("Answer by a 1, 2 or 3 please !\n\n");

        printf("Which years the RTX 3000 Ndivia's gpu series were deployed ?\n");
        printf("1-/ *2006* --- 2-/ *2020* --- 3-/ 2016\n");
        scanf("%d", &ans);
        if (ans==2) Pts+= 2;
        else Pts+= 0;

        printf("\nHow can we get the best of a hardware computer device ?\n");
        printf("1-/ *Overclocking* --- 2-/ *Overvolting* --- 3-/ *Overwatching*\n");
        scanf("%d", &ans);
        if (ans==1) Pts+= 2;
        else Pts+= 0;

        printf("\nWhich company produces touchscreen for iPhones ?\n");
        printf("1-/ *LG* --- 2-/*Apple* --- 3-/*Samsung*\n");
        scanf("%d", &ans);
        if (ans==3) Pts+= 2;
        else Pts+= 0;

        printf("\nWhich of these brands produces Graphics Cards ?\n");
        printf("1-/ *Aorus* --- 2-/ *Klim* --- 3-/ *Logitech*\n");
        scanf("%d", &ans);
        if (ans==1) Pts+= 2;
        else Pts+= 0;

        printf("\nWhat does the *R* of RTX Nvidia's gpu means ?\n");
        printf("1-/ *X-Ray* --- 2-/ *Racing* --- 3-/ *Ray Tracing*\n");
        scanf("%d", &ans);
        if (ans==3) Pts+= 2;
        else Pts+= 0;


        printf("\nYour final score is %d/10 !\n", Pts);
        printf("End of turn\n\n\n\n");
    }
    printf("Answers :");
    printf("1-2020, 2-Overclocking, 3-Samsung, 4-Aorus, 5-Ray Tracing\n\n");

    printf("Do you want to play again ? (0/1) 1 =YES // 0 =NO\n");
    scanf("%d", &loop);


    }while (loop=1);
    return 0;
}
