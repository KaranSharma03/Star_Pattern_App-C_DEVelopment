/*
Author: Karan Sharma
Date: October 3, 2020.
Project Details: A console application which prints several star patters as requested by the user.
This file contains star pattern functions and about me page function.
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

int square(int *a){ //a is number of rows.
	int x,y;

	//This will iterate over a number of rows.
	for (x=1;x<=*a;x++){

		//This will iterate over all the columns.
		for(y=1;y<=*a;y++){
            Sleep(2);
			printf("*");//to print the star pattern.
		}

		//To print next line of stars.
		printf("\n");
	}
	return 0;
}

int rhombus(int *a){	//a is the number of rows.
	int x,y;

	//This will iterate over the number of rows.
	for(x=1;x<=*a;x++){

		//This will print spaces before the stars.
		for(y=1;y<=*a-x;y++){
            Sleep(2);
			printf(" ");
		}

		//This will print stars after the spaces.
		for(y=1;y<=*a;y++){
            Sleep(2);
			printf("*");
		}

		//To shift to the next line and print stars.
		printf("\n");
	}
	return 0;
}

int hollowSqaure(int *a){ //a is the number of rows.
	int x,y;

	//This will iterate over the number of rows.
	for(x=1;x<=*a;x++){

        //Sleep(20);
		//This will iterate over the columns.
		for(y=1;y<=*a;y++){
			if(x==1 || x==*a || y==1 || y==*a){
				Sleep(2);
				printf("*");
			}
			else{
                Sleep(2);
				printf(" ");
			}
		}

		//To shift to the next line and print stars.
		printf("\n");
	}
	return 0;
}

int rTriangle(int *a){ //a is the number of rows.
	int x,y;

	//This will iterate over the number of rows.
	for(x=1;x<=*a;x++){

		//This will print stars equal to the number of rows.
		for(y=1;y<=x;y++){
            Sleep(2);
			printf("*");
		}

		//To shift to the next line and print stars.
		printf("\n");
	}
	return 0;
}

int lTriangle(int *a){ //a is the number of rows.
	int x,y;

	//This will iterate over the number of rows.
	for(x=1;x<=*a;x++){

		//To print space in the form of inverted right triangle.
		for(y=x;y<*a;y++){
            Sleep(2);
			printf(" ");
		}

		//To print stars.
		for(y=1;y<=x;y++){
            Sleep(2);
			printf("*");
		}

		//To shift to the next line and print stars.
		printf("\n");
	}
	return 0;
}

int inverted_R_Triangle(int *a){ //a is the number of rows.
	int x,y;

	//This will iterate over the number of rows.
	for(x=1;x<=*a;x++){

		//This will iterate over the number of columns.
		for(y=x;y<=*a;y++){
            Sleep(2);
			printf("*");
		}

		//To shift to the next line and print stars.
		printf("\n");
	}
	return 0;
}

int inverted_L_Traingle(int *a){ //a is the number of rows.
	int x,y;

	//This will iterate over the number of rows.
	for(x=1;x<=*a;x++){

		//This will print spaces before stars.
		for(y=1;y<x;y++){
            Sleep(2);
			printf(" ");
		}

		//This will print stars after the spaces.
		for(y=x;y<=*a;y++){
            Sleep(2);
			printf("*");
		}
		//To shift to the next line and print stars.
		printf("\n");
	}
	return 0;
}

int pyramid(int *a){ //a is the number of rows.
	int x,y;

	//This will iterate over the number of rows.
	for(x=1;x<=*a;x++){

			//This will print space before stars.
			for(y=x; y<*a; y++){
                Sleep(2);
				printf(" ");
			}

			//This will print the stars.
			for(y=1;y<=(2*x-1);y++){
				Sleep(2);
				printf("*");
			}
		//To shift to the next line and print stars.
		printf("\n");
	}
	return 0;
}

int invertedPyramid(int *a){ //a is the number of rows.
	int x,y;

	//This will iterate over the number of rows.
	for(x=1;x<=*a;x++){

		//This will spaces before the stars.
		for(y=1; y<x;y++){
			Sleep(2);
			printf(" ");
		}

		//This will print the stars.
		for(y=1;y<=(*a*2 - (2*x-1)); y++){
			Sleep(2);
			printf("*");
		}
		//To shift to the next line and print stars.
		printf("\n");
	}
	return 0;
}

int Diamond(int *a){ //a is the number of rows.
	int x,y, star, space;

	star = 1;
	space = *a-1;

	//This will iterate over the number of rows.
	for(x=1;x<*a*2;x++){

		//This will print spaces before the stars.
		for(y=1;y<=space;y++){
			Sleep(2);
			printf(" ");
		}

		//This will print stars after the spaces.
		for(y=1;y<star*2;y++){
			Sleep(2);
			printf("*");
		}

		//To shift to the next line and print stars.
		printf("\n");

		if(x<*a){
			space--;
			star++;
		}
		else{
			space++;
			star--;
		}
	}
	return 0;
}

void retryAboutMe(){ //this function is used to taking user input and displaying pages according to the input by the user.
    char aboutChoice;

    printf("\n>Press 'h' to go back to home page\n>Press 'q' to quit now\n# ");
    scanf(" %c", &aboutChoice);
    if(aboutChoice=='h' || aboutChoice=='H'){
        Sleep(1000);
        loading();
        main();
    }
    else if(aboutChoice=='q' || aboutChoice=='Q'){
        printf("Destroying the data. Please Wait!!!");
        loading();
        Sleep(1500);
        return 1;
    }
    else{
        Sleep(1000);
        printf("You made a wrong choice! Please choose again->\n");
        loading();
        retryAboutMe();
    }
    return 0;
}

void aboutMe(){ //this function displays some information about the developer.
    system("clear");

    date_time();
    logo();
    printf("\n\nAbout the DEVeloper:");
    Sleep(1500);
    printf("\n\nHello! My name is Karan Sharma. Your friendly neighbourhood programmer.");
    Sleep(1500);
    printf("\nI am a 20 year old computer programmer student. My journey of programming started from learning C and C++ and so far I am knowledgeable in C,");
    printf("\nC++, Java, Bash scripting, python, Android Development, Basic networking skills, SQL on several database engines, COBOL, HTML, CSS, JS and php.");
    Sleep(1500);
    printf("\nAll thanks to my gurus who were patient enough to answer all my questions.");
    Sleep(1500);
    printf("\nI love programming, playing video games, reading books, writing poems, singing and playing acoustic guitar.");
    Sleep(1500);
    printf("\n\nThanks for reading.\n\n\n");

    Sleep(1500);
    footer();
    printf(" Loading! Please Wait!!! ");
    loading();
    retryAboutMe();
    return 0;
}
