/*
Author: Karan Sharma
Date: October 3, 2020.
Project Details: A console application which prints several star patters as requested by the user.
This file contains functions related to formatting.
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

void date_time(){ //this method displays the system's current date and time
    time_t now;

    time(&now);
	//First page on the console to display basic information.
	Sleep(1000);
	printf("Current date & time:  %s", ctime(&now));
	return 0;
}

void logo(){ //this method/function displays the logo of the app
    Sleep(1000);
    printf("\n\n\n\n\t\t\t\t\t\t\t\t      ");
    for(int x=0;x<18;x++){
            Sleep(10);
            printf("*");
    }
	printf("\n\t\t\t\t\t\t\t\t      *STAR PATTERN APP*\n\t\t\t\t\t\t\t\t      ");
	for(int x=0;x<18;x++){
            Sleep(10);
            printf("*");
    }
	Sleep(1000);
	return 0;
}

void footer(){ //this method/function displays the info of the author of this console application.
    Sleep(1000);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nMade by Karan Sharma - Your friendly neighbourhood programmer.");
    Sleep(1000);
    return 0;
}

void loading(){
    Sleep(500);
    printf(" . ");
    Sleep(500);
    printf(" . ");
    Sleep(500);
    printf(" . \n");
    Sleep(500);
    return 0;
}

