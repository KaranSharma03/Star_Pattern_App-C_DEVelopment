/*
Author: Karan Sharma
Date: October 3, 2020.
Project Details: A console application which prints several star patters as requested by the user.
This file contains main function only.
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

void retryMain(){ //this method is used in case when a user makes a wrong choice in the main menu section.
    char loopChoice;

    printf("\n>Press 'y' to check out the STAR PATTERN APP\n>Press 'q' to quit\nPress 'a' to learn about the developer of this application\n# ");
    scanf(" %c", &loopChoice);
    if(loopChoice=='y' || loopChoice=='Y'){
        Sleep(1000);
        loading();
        display();
    }
    else if(loopChoice=='q' || loopChoice=='Q'){
        printf("Destroying the data. Please Wait!!!");
        loading();
        Sleep(1500);
        return 1;//to make the application stop after displaying one pattern.
    }
    else if(loopChoice=='a' || loopChoice=='A'){
        loading();
        Sleep(1500);
        aboutMe();
    }
    else{
        Sleep(1000);
        printf("You made a wrong choice! Please choose again->\n");
        loading();
        retryMain();
    }
    return 0;
}

int main(){
	system("clear");
	char yes;

    date_time();
	logo();
	Sleep(250);
	puts("\n\nAbout the application:");
	Sleep(250);
	puts("\nSTAR PATTERN APP consists of several types of star(*) patters.");
	Sleep(250);
	puts("The user can choose the number of rows according to the size of pattern they wish to form.");
	Sleep(250);
	puts("After choosing the size of the pattern, the user can choose the type of star pattern they wish to form on the screen.");
	Sleep(1000);
	puts("\n\n\n\t\t\t\t\t\t\t>Press 'y' to check out the STAR PATTERN APP");
	Sleep(250);
	puts("\n\t\t\t\t\t\t\t>Press 'q' to quit");
	Sleep(250);
	puts("\n\t\t\t\t\t\t\t>Press 'a' to learn about the developer of this application.");
	Sleep(250);
	printf("\n\n\n\t\t\t\t\t\t\t#");
	scanf(" %c", &yes);
	Sleep(500);
    footer();
    printf(" Loading! Please Wait!!! ");
    loading();
	//if the user types yes then it displays a new page where the console asks the user to enter the number of rows for the star pattern.
	if(yes=='y' || yes=='Y'){
        Sleep(1500);
        display();
	}
	else if(yes=='q' || yes =='Q'){
        printf("Destroying the data. Please Wait!!!");
        loading();
        Sleep(1500);
        return 1;//to make the application stop after displaying one pattern.
	}
	else if(yes=='a' || yes=='A'){
        Sleep(1500);
        aboutMe();
    }
	else{
	    Sleep(1000);
        printf("You made a wrong choice! Please choose again->\n");
        retryMain();
	}

	return 0;
}






