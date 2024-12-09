#include<stdio.h>
#include <stdlib.h>
#include <graphics.h>
#include <time.h>

struct play {
    char name[20];
    int score;
    int rat;
} p;

void getInput(char* str, int maxLen, int x, int y) {
    int i = 0;
    char ch;
    while (i < maxLen - 1) {
        ch = getch();
        if (ch == '\r') { 
            str[i] = '\0'; 
            break;
        } else if (ch == '\b' && i > 0) {
            i--;
            str[i] = '\0';
            outtextxy(x + i*17 , y,"  ");
        } else if (ch!= '\b') {
            str[i] = ch;
            outtextxy(x + i*17, y, &str[i]); 
            i++;
        }
    }
    str[i] = '\0'; 
}

void start() {
    int count = 0; 
    char rating[20];
    FILE *fa;

    if ((fa = fopen("Project.txt", "a")) == NULL) {
        printf(" There is an error occurred while opening the file\n ");
    }

    cleardevice();
    setbkcolor(LIGHTGRAY); 
    cleardevice();
    setcolor(BLACK); 
    settextstyle(GOTHIC_FONT,HORIZ_DIR,1);

    outtextxy(400, 250, "Enter your Full name: ");
    char name[20];
    getInput(p.name, 20, 800, 250);
    
    char welcomeMsg[100];
    sprintf(welcomeMsg, "Welcome to the game \"%s\"", p.name);
    outtextxy(500, 300, welcomeMsg);
    outtextxy(250, 400, "The quiz game will be started now. Get ready to answer the questions !!");
    outtextxy(550, 370, "ALL THE BEST !!");
    getch();
    cleardevice();

    char ans1, ans2, ans3, ans4, ans5, ans6, ans7, ans8, ans9, ans10;
    time_t startTime, currentTime;
    double timeElapsed;

    outtextxy(50,50,"Question 1: In the following given characteristics, which one is not related to the federal government?");
	outtextxy(50,70,"1. Flexible Constitution  2. Written Constitution  3. Independent Judiciary  4. Supremacy of the Constitution");
	outtextxy(50, 110, "Please enter your answer (you have 10 seconds): ");
	startTime = time(NULL);
	while (1) {
		currentTime = time(NULL);
        timeElapsed = difftime(currentTime, startTime);
        if (timeElapsed >= 10) {
            outtextxy(50,130, "Time's up! Moving to the next question.");
            ans1 = -1;
            delay(1000);
            cleardevice();
            break;
        }

        if (kbhit()) {
			
			ans1 = getch();
			ans1= ans1-'0';
            break;
        }
    }
    if(ans1!=-1)
	{
    	if(ans1==1)
		{
    		outtextxy(50,210," Your answer is absolutely correct.");
    		outtextxy(50,230," You score 5 points !! ");
    		count++;
		}
		else
    	{
        outtextxy(50,210," The answer that you have entered is wrong. The correct answer is option no.  1. Flexible Constitution.");
    	}
    	delay(2000);
    	cleardevice();
	}

    outtextxy(50,50,"Question 2: Who was the first person belonging to India to enter space?");
	outtextxy(50,70,"1. Ravish Malhotra  2. Vikram Ambalal  3. Rakesh Sharma  4. Nagapathi Bhat");
	outtextxy(50, 110, "Please enter your answer (you have 10 seconds): ");
	startTime = time(NULL);
	while (1) {
		currentTime = time(NULL);
        timeElapsed = difftime(currentTime, startTime);
        if (timeElapsed >= 10) {
            outtextxy(50,130, "Time's up! Moving to the next question.");
            ans2 = -1;
            delay(1000);
            cleardevice();
            break;
        }

        if (kbhit()) {			
			ans2= getch();
			ans2=ans2-'0';
            break;
        }
    }
    if(ans2!=-1)
	{
    	if(ans2==3)
		{
    		outtextxy(50,210," Your answer is absolutely correct.");
    		outtextxy(50,230," You score 5 points !! ");
    		count++;
		}
		else
    	{
        outtextxy(50,210," The answer that you have entered is wrong. The correct answer is option no.  3.Rakesh Sharma. ");
    	}
    	delay(2000);
    	cleardevice();
	}
	
    outtextxy(50,50,"Question 3: Who was the first woman to climb all of seven highest mountain peaks on every continent?");
	outtextxy(50,70,"1. Junko Tabei  2. Bachendri Pal  3. Premlata Agarwal  4. Santosh Yadav");
	outtextxy(50, 110, "Please enter your answer (you have 10 seconds): ");
	startTime = time(NULL);
		while (1) {
			currentTime = time(NULL);
        timeElapsed = difftime(currentTime, startTime);
        if (timeElapsed >= 10) {
            outtextxy(50,130, "Time's up! Moving to the next question.");
            ans3 = -1;
            delay(1000);
            cleardevice();
            break;
        }

        if (kbhit()) {
			ans3=getch();
			ans3=ans3-'0';
            break;
        }
    }
    if(ans3!=-1)
	{
    	if(ans3==1)
		{
    		outtextxy(50,210," Your answer is absolutely correct.");
    		outtextxy(50,230," You score 5 points !! ");
    		count++;
		}
		else
    	{
        outtextxy(50,210," The answer that you have entered is wrong. The correct answer is option no.  1.Junko Tapei.");
    	}
    	delay(2000);
    	cleardevice();
	}
	


    outtextxy(50,50,"Question 4: Who was the first person to be the Indian Prime Minister?");
    outtextxy(50,70,"1. Prathiba Patel  2. Jawaharlal Nehru  3. Rabindranath Tagore  4. Lal Bahadur Shastri");
    outtextxy(50, 110, "Please enter your answer (you have 10 seconds): ");
    startTime = time(NULL);
    	while (1) {
    		currentTime = time(NULL);
        timeElapsed = difftime(currentTime, startTime);
        if (timeElapsed >= 10) {
            outtextxy(50,130, "Time's up! Moving to the next question.");
            ans4 = -1;
            delay(1000);
            cleardevice();
            break;
        }

        if (kbhit()) {
			ans4=getch();
			ans4=ans4-'0';
            break;
        }
    }
    if(ans4!=-1)
	{
    	if(ans4==2)
		{
    		outtextxy(50,210," Your answer is absolutely correct.");
    		outtextxy(50,230," You score 5 points !! ");
    		count++;
		}
		else
    	{
        outtextxy(50,210," The answer that you have entered is wrong. The correct answer is option no.  2.Jawaharlal Nehru.");
    	}
    	delay(2000);
    	cleardevice();
	}
	

    outtextxy(50,50,"Question 5: How many bones does an adult human skeleton have?");
    outtextxy(50,70,"1. 207 bones  2. 205 bones  3. 206 bones  4. 210 bones");
    outtextxy(50, 110, "Please enter your answer (you have 10 seconds): ");
    startTime = time(NULL);
	    while (1) {
	    	currentTime = time(NULL);
        timeElapsed = difftime(currentTime, startTime);
        if (timeElapsed >= 10) {
            outtextxy(50,130, "Time's up! Moving to the next question.");
            ans5 = -1;
            delay(1000);
            cleardevice();
            break;
        }

        if (kbhit()) {
			ans5=getch();
			ans5=ans5-'0';
            break;
        }
    }
    if(ans5!=-1)
	{
    	if(ans5==3)
		{
    		outtextxy(50,210," Your answer is absolutely correct.");
    		outtextxy(50,230," You score 5 points !! ");
    		count++;
		}
		else
    	{
        outtextxy(50,210," The answer that you have entered is wrong. The correct answer is option no.  3.206 bones.");
    	}
    	delay(2000);
    	cleardevice();
	}
    outtextxy(50,50,"Question 6: Which blood group is known to be a universal acceptor?");
    outtextxy(50,70,"1. AB+  2. AB-  3. O+  4. O-");
    outtextxy(50, 110, "Please enter your answer (you have 10 seconds): ");
    startTime = time(NULL);
        	while (1) {
        		currentTime = time(NULL);
        timeElapsed = difftime(currentTime, startTime);
        if (timeElapsed >= 10) {
            outtextxy(50,130, "Time's up! Moving to the next question.");
            ans6 = -1;
            delay(1000);
            cleardevice();
            break;
        }

        if (kbhit()) {
			ans6=getch();
			ans6=ans6-'0';
            break;
        }
    }
    if(ans6!=-1)
	{
    	if(ans6==1)
		{
    		outtextxy(50,210," Your answer is absolutely correct.");
    		outtextxy(50,230," You score 5 points !! ");
    		count++;
		}
		else
    	{
        outtextxy(50,210," The answer that you have entered is wrong. The correct answer is option no.  1.AB+.");
    	}
    	delay(2000);
    	cleardevice();
	}

    outtextxy(50,50,"Question 7: What is Vitamin C also known as?");
    outtextxy(50,70,"1. Riboflavin  2. Thiamine  3. Ascorbic acid  4. Pentamine");
    outtextxy(50, 110, "Please enter your answer (you have 10 seconds): ");
	startTime = time(NULL);
	    	while (1) {
	    		currentTime = time(NULL);
        timeElapsed = difftime(currentTime, startTime);
        if (timeElapsed >= 10) {
            outtextxy(50,130, "Time's up! Moving to the next question.");
            ans7 = -1;
            delay(1000);
            cleardevice();
            break;
        }

        if (kbhit()) {
			ans7=getch();
			ans7=ans7-'0';
            break;
        }
    }
    if(ans7!=-1)
	{
    	if(ans7==3)
		{
    		outtextxy(50,210," Your answer is absolutely correct.");
    		outtextxy(50,230," You score 5 points !! ");
    		count++;
		}
		else
    	{
        outtextxy(50,210," The answer that you have entered is wrong. The correct answer is option no.  3.Ascorbic Acid.");
    	}
    	delay(2000);
    	cleardevice();
	}
	
    outtextxy(50,50,"Question 8: Which membrane is mostly present in both the spinal cord and brain?");
    outtextxy(50,70,"1. Meninges  2. Arachnoids  3. Plasma Membrane  4. Pleural membrane");
    outtextxy(50, 110, "Please enter your answer (you have 10 seconds): ");
    startTime = time(NULL); 
	   	
	while (1) {
		currentTime = time(NULL);
        timeElapsed = difftime(currentTime, startTime);
        if (timeElapsed >= 10) {
            outtextxy(50,130, "Time's up! Moving to the next question.");
            ans8 = -1;
            delay(1000);
            cleardevice();
            break;
        }

        if (kbhit()) {
			ans8=getch();
			ans8=ans8-'0';
            break;
        }
    }
    if(ans8!=-1)
	{
    	if(ans8==1)
		{
    		outtextxy(50,210," Your answer is absolutely correct.");
    		outtextxy(50,230," You score 5 points !! ");
    		count++;
		}
		else
    	{
        outtextxy(50,210," The answer that you have entered is wrong. The correct answer is option no.  1.Meninges.");
    	}
    	delay(2000);
    	cleardevice();
	}

    outtextxy(50,50,"Question 9: Who presented the first budget of India after its Independence?");
    outtextxy(50,70,"1. Manmohan Singh  2. Jawaharlal Nehru  3. Pranab Mukherjee  4. R. K. Shanmukham Chetty");
    outtextxy(50, 110, "Please enter your answer (you have 10 seconds): ");
    startTime = time(NULL);
    
        	while (1) {
        		currentTime = time(NULL);
        timeElapsed = difftime(currentTime, startTime);
        if (timeElapsed >= 10) {
            outtextxy(50,130, "Time's up! Moving to the next question.");
            ans9 = -1;
            delay(1000);
            cleardevice();
            break;
        }

        if (kbhit()) {
			ans9=getch();
			ans9=ans9-'0';
            break;
        }
    }
    if(ans9!=-1)
	{
    	if(ans9==4)
		{
    		outtextxy(50,210," Your answer is absolutely correct.");
    		outtextxy(50,230," You score 5 points !! ");
    		count++;
		}
		else
    	{
        outtextxy(50,210," The answer that you have entered is wrong. The correct answer is option no.  4.R.K. Shanmukkham Chetty.");
    	}
    	delay(2000);
    	cleardevice();
	}

    outtextxy(50,50,"Question 10: Who has the right to select and appoint the Prime Minister?");
    outtextxy(50,70,"1. President  2. Chief Justice of India  3. Governor  4. Vice President");
    outtextxy(50, 110,"Please enter your answer (you have 10 seconds): ");	 
    startTime = time(NULL);
        	while (1) {
        		currentTime = time(NULL);
        timeElapsed = difftime(currentTime, startTime);
        if (timeElapsed >= 10) {
            outtextxy(50,130, "Time's up! Moving to the next question.");
            ans10 = -1;
            delay(1000);
            cleardevice();
            break;
        }

        if (kbhit()) {
			ans10=getch();
			ans10=ans10-'0';
            break;
        }
    }
    if(ans10!=-1)
	{
    	if(ans10==1)
		{
    		outtextxy(50,210," Your answer is absolutely correct.");
    		outtextxy(50,230," You score 5 points !! ");
    		count++;
		}
		else
    	{
        outtextxy(50,210," The answer that you have entered is wrong. The correct answer is option no.  1.President.");
    	}
    	delay(2000);
    	cleardevice();
	}
    
	if (count > 0) {
        char resultMsg[100];
        sprintf(resultMsg, "You have scored %d points", count * 5);
        outtextxy(600, 400, resultMsg);
        p.score = count * 5;
        

        if (p.score >= 40) {
            outtextxy(600, 420, "Player rating: 5/5");
            p.rat = 5;
        } else if (p.score >= 30 && p.score < 40) {
            outtextxy(600, 420, "Player rating: 4/5");
            p.rat = 4;
        } else if (p.score >= 20 && p.score < 30) {
            outtextxy(600, 420, "Player rating: 3/5");
            p.rat = 3;
        } else if (p.score >= 10 && p.score < 20) {
            outtextxy(600, 420, "Player rating: 2/5");
            p.rat = 2;
        } else {
            outtextxy(600, 420, "Player rating: 1/5");
            p.rat = 1;
        }

        fprintf(fa, "%s %d %d\n", p.name, p.score, p.rat);
        fclose(fa);
    } else {
        outtextxy(50, 50, "You have not answered any of the questions correctly! Please try again.");
    }
    getch();
    closegraph();
}


void high_score() {
    FILE *fa;
    int y=0;

    cleardevice();
    setbkcolor(GREEN); 
    cleardevice(); 
    setcolor(WHITE);
    settextstyle(GOTHIC_FONT,HORIZ_DIR,1);

    if ((fa = fopen("Project.txt", "r")) == NULL) {
        outtextxy(450, 50, "There are no games played !!");
    } else {
        outtextxy(450, 50, "Printing the high scores now !!");
        outtextxy(450, 70, "Name     Points_Scored     Rating");

        int y = 90;
        char buffer[100]; 

        while (fscanf(fa, "%s %d %d", p.name, &p.score, &p.rat) != EOF) {
            sprintf(buffer, "........................................................");
            outtextxy(450, y, buffer);
            y += 30;
            sprintf(buffer, "%s             %d              %d star(s)", p.name, p.score, p.rat);
            outtextxy(450, y, buffer);
            y += 40; 
        }

        fclose(fa);
    }

    outtextxy(450, y + 10, "Do you still want to continue playing?");
    outtextxy(450, y + 30, "If yes, then press 1 !! Else, press 0 :");

	char choice;
	choice=getch();
	choice=choice-'0';

    if (choice == 1) {
        start();
    } else {
        closegraph();
        exit(1);
    }
}

void help() {
    cleardevice();
    setbkcolor(LIGHTGRAY); 
    cleardevice(); 
    setcolor(BLACK); 
	settextstyle(GOTHIC_FONT,HORIZ_DIR,1);

    outtextxy(450, 50, "Instructions to follow while playing this game:");
    outtextxy(530, 70, "......................................................");
    outtextxy(620, 90, "Quiz Game in C");
    outtextxy(530, 110, "......................................................");
    outtextxy(350, 130, "You are supposed to answer 10 questions in this game.There will");
    outtextxy(350, 150, "be 4 options for each question , marked with numbers 1 to 4.");
    outtextxy(350, 170, "For each correct answer, you will be awarded 5 points. As soon");
    outtextxy(350, 190, "as you answer a question, you will proceed to the next question.");
    outtextxy(350, 210, "If your answer is wrong, no marks will be deducted.");
    outtextxy(350, 230, " ");
    outtextxy(570, 250, "!! Wish you all the best !!");

    outtextxy(350, 270, "Do you still wish to continue playing? If yes, press 1. Else, press 0:");

	char choice;
	choice=getch();
	choice=choice -'0';

    if (choice == 1) {
        start();
    } else {
        closegraph(); 
        exit(1);
    }
}

int main() {
    char choice;

    initwindow(1500, 900, "Quiz Game");
    setbkcolor(BLACK);
    cleardevice();  
    setcolor(WHITE);
    settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
    outtextxy(200, 200, "Please enter '1' to start the game");
    outtextxy(200, 260, "Please enter '2' to view high scores");
    outtextxy(200, 320, "Please enter '3' for help");
    outtextxy(200, 380, "Please enter '0' to exit");
    outtextxy(200, 440, "Enter your choice: ");

    setcolor(BLACK);

	choice=getch();
	choice=choice -'0';

    switch (choice) {
        case 1:
            start();
            break;
        case 2:
            high_score();
            break;
        case 3:
            help();
            break;
        default:
            exit(1);
    }

    closegraph();
    return 0;
}
