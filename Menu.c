/*
Author: Karan Sharma
Date: October 3, 2020.
Project Details: A console application which prints several star patters as requested by the user.
This file contains menu page function.
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

void display(oM, r){ //this method is a menu where user chooses what pattern they would like to display.
	system("clear");

    date_time();
    logo();
    if(oM==0){
        printf("\n\n\n\t\t\t\t\t\t\t>Enter the number of rows for the star pattern");
        printf("\n\t\t\t\t\t\t\t>");
        scanf("%d", &r);
        puts("\n\n");
        pattern(r);
    }
    else{
        puts("\n\n");
        pattern(r);
    }
}

void pattern(r){
    int choice;

    Sleep(1000);
    for(int x=0;x<7;x++){
        Sleep(50);
        printf("*");
    }
    Sleep(250);
    printf("\n MENU\n");
    Sleep(250);
    for(int x=0;x<7;x++){
        Sleep(50);
        printf("*");
    }
    printf("\n\n#Press 1 for square.\n#Press 2 for rhombus.\n#Press 3 for hollowSquare.\n#Press 4 for right triangle.\n");
    printf("#Press 5 for mirrored right triangle.\n#Press 6 for inverted right triangle.\n#Press 7 for inverted mirrored right triangle.");
    printf("\n#Press 8 for pyramid.\n#Press 9 for inverted pyramid.\n#Press 10 for diamond.\n");
    Sleep(500);
    printf("\n>Which star pattern would you like to see? ");
    scanf("%d", &choice);

    switch(choice){
        case 1:
            printf("\nStarting the setup, please wait!!!\n");
            Sleep(1500);
            printf("\n");
            square(&r);
            footer();
            printf(" Loading! Please Wait!!! ");
            loading();
            Sleep(10);
            retrydisplay();
            break;
        case 2:
            printf("\nStarting the setup, please wait!!!\n");
            Sleep(1500);
            printf("\n");
            rhombus(&r);
            footer();
            printf(" Loading! Please Wait!!! ");
            loading();
            Sleep(10);
            retrydisplay();
            break;
        case 3:
            printf("\nStarting the setup, please wait!!!\n");
            Sleep(1500);
            printf("\n");
            hollowSqaure(&r);
            footer();
            printf(" Loading! Please Wait!!! ");
            loading();
            Sleep(10);
            retrydisplay();
            break;
        case 4:
            printf("\nStarting the setup, please wait!!!\n");
            Sleep(1500);
            printf("\n");
            rTriangle(&r);
            footer();
            printf(" Loading! Please Wait!!! ");
            loading();
            Sleep(10);
            retrydisplay();
            break;
        case 5:
            printf("\nStarting the setup, please wait!!!\n");
            Sleep(1500);
            printf("\n");
            lTriangle(&r);
            footer();
            printf(" Loading! Please Wait!!! ");
            loading();
            Sleep(10);
            retrydisplay();
            break;
        case 6:
            printf("\nStarting the setup, please wait!!!\n");
            Sleep(1500);
            printf("\n");
            inverted_R_Triangle(&r);
            footer();
            printf(" Loading! Please Wait!!! ");
            loading();
            Sleep(10);
            retrydisplay();
            break;
        case 7:
                printf("\nStarting the setup, please wait!!!\n");
            Sleep(1500);
            printf("\n");
            inverted_L_Traingle(&r);
            footer();
            printf(" Loading! Please Wait!!! ");
            loading();
            Sleep(10);
            retrydisplay();
            break;
        case 8:
            printf("\nStarting the setup, please wait!!!\n");
            Sleep(1500);
            printf("\n");
            pyramid(&r);
            footer();
            printf(" Loading! Please Wait!!! ");
            loading();
            Sleep(10);
            retrydisplay();
            break;
        case 9:
            printf("\nStarting the setup, please wait!!!\n");
            Sleep(1500);
            printf("\n");
            invertedPyramid(&r);
            footer();
            printf(" Loading! Please Wait!!! ");
            loading();
            Sleep(10);
            retrydisplay();
            break;
        case 10:
            printf("\nStarting the setup, please wait!!!\n");
            Sleep(1500);
            printf("\n");
            Diamond(&r);
            footer();
            printf(" Loading! Please Wait!!! ");
            loading();
            Sleep(10);
            retrydisplay();
            break;
        default:
            Sleep(1500);
            printf("\nYou either typed a number greater than 10 - less than 1 or you typed in an alphabet.");
            retrydisplay();
            break;
    }
}

void retrydisplay(){ //this method is used in case when a user makes a wrong choice in the Star menu section.
    char loopChoice2;

    printf("\n>Press 'y' to go back to the star pattern Menu\n>Press 'q' to quit\n>Press 'h' to go back to the home page\n# ");
    scanf(" %c", &loopChoice2);
    if(loopChoice2=='y' || loopChoice2=='Y'){
        system("clear");
        Sleep(1000);
        loading();
        display();
    }
    else if(loopChoice2=='q' || loopChoice2=='Q'){
        printf("Destroying the data. Please Wait!!!");
        loading();
        Sleep(1500);
        return 1;//to make the application stop after displaying one pattern.
    }
    else if(loopChoice2=='h' || loopChoice2=='H'){
        Sleep(1000);
        loading();
        main();
    }
    else{
        Sleep(1000);
        printf("You made a wrong choice! Please choose again->\n");
        loading();
        retrydisplay();
    }
}

