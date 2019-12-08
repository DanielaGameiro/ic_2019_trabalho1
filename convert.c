#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>

#define MSG_WELCOME "WELCOME TO SORTIFY!"
#define MSG_SORT "Sort the following numbers:"
#define MSG_SORT2 "Please sort the numbers"
#define MSG_WELL "Well done!"
#define MSG_WIN "Congratulations, you win!"
#define MSG_OVER "Game Over."
#define MSG_WRONG "Wrong answer."
#define MSG_MAX "You have reached the maximum number of moves."
#define MSG_BYE "Bye."
#define MSG_UNKNOWN "Unknown option."

/* Use puts() to print constant strings */

int rand_number(const int, const int);
void print_status(const int, const int, const int);
void print_menu(void);
int comparearrays(unsigned int random[], unsigned int crescendo[]);
int winorlose(unsigned int random[],unsigned int crescendo[]);

int cmpfunc (const void * a, const void * b) {
	return ( *(int*)a - *(int*)b );
}

#define BUF_SIZE  1000


int main(int argc, char **argv)
{

	int max, min , score = 0;
    char input;
	bool sair;
	int rondas = 0, lvl = 1;

	puts(MSG_WELCOME);

	if (argc == 1)
		srand(time(NULL));
	else
	{
		srand(atoi(argv[1]));
	}

	print_menu();
	
	while (sair == false)
	{
		if (score>=10 && score <20){
			lvl = 2;
		}else if (score>=20 && score <30)
		{
			lvl = 3;
		}else if (score>=30 && score<40){
			lvl = 4;
		}else if(score>=40 && score<50){
			lvl=5;
		}
		
		if (rondas<30){
		if (score<50){
			unsigned short numofc = 1;
			do
			{
			scanf(" %c", &input);
        	short c;
			numofc = 0;

			while ((c = getchar()) != '\n' && c != EOF)
			{
				numofc++;
			}

			if (numofc>0)
			{
				puts(MSG_UNKNOWN);
			}
			}while (numofc>0);
			
    	

		if(input == 'p')
		{
			
			puts(MSG_SORT);
			if (score<10)
			{
				lvl = 1;
				max = 10;
				min = 0;
				unsigned int rand[4], cres[4];
				rand[0] = rand_number(min, max), rand[1] = rand_number(min, max), rand[2] = rand_number(min, max), rand[3] = rand_number(min, max);
				printf("%d, %d, %d, %d\n", rand[0], rand[1], rand[2], rand[3]);
				do{

					for (int i = 0; i < 4; i++)
					{
						scanf("%u", &cres[i]);
					}
					if(comparearrays(rand, cres) == 1){
						rondas++;
						if(winorlose(rand,cres) == 1){
							score = score+5;
						}
					}else {
						puts(MSG_SORT2);
					}
					
						
					
				}while (comparearrays(rand, cres) == 0);
			}else if(score>=10 && score <20){
				lvl = 2;
				max = 30;
				min = 0;
				unsigned int rand[4], cres[4];
				rand[0] = rand_number(min, max), rand[1] = rand_number(min, max), rand[2] = rand_number(min, max), rand[3] = rand_number(min, max);
				printf("%d, %d, %d, %d\n", rand[0], rand[1], rand[2], rand[3]);
				do{

					for (int i = 0; i < 4; i++)
					{
						scanf("%u", &cres[i]);
					}
					if(comparearrays(rand, cres) == 1){
						rondas++;
						if(winorlose(rand,cres) == 1){
							score = score+5;
						}
					
					}else {
						puts(MSG_SORT2);
					}
						
					
				}while (comparearrays(rand, cres) == 0);
			}else if(score>=20 && score<30){
				lvl = 3;
				max = 30;
				min = -50;
				unsigned int rand[4], cres[4];
				rand[0] = rand_number(min, max), rand[1] = rand_number(min, max), rand[2] = rand_number(min, max), rand[3] = rand_number(min, max);
				printf("%d, %d, %d, %d\n", rand[0], rand[1], rand[2], rand[3]);
				do{

					for (int i = 0; i < 4; i++)
					{
						scanf("%u", &cres[i]);
					}
					if(comparearrays(rand, cres) == 1){
						rondas++;
						if(winorlose(rand,cres) == 1){
							score = score+5;
						}
					}else{
					
						puts(MSG_SORT2);
					}
				
				}while (comparearrays(rand, cres) == 0);	
			}else if (score>=30 && score<40)
			{
				lvl = 4;
				max = 0;
				min = -100;
				unsigned int rand[4], cres[4];
				rand[0] = rand_number(min, max), rand[1] = rand_number(min, max), rand[2] = rand_number(min, max), rand[3] = rand_number(min, max);
				printf("%d, %d, %d, %d\n", rand[0], rand[1], rand[2], rand[3]);
				do{

					for (int i = 0; i < 4; i++)
					{
						scanf("%u", &cres[i]);
					}
					if(comparearrays(rand, cres) == 1){
						rondas++;
						if(winorlose(rand,cres) == 1){
							score = score+5;
						}
					}else{
					
						puts(MSG_SORT2);
					}
				
				}while (comparearrays(rand, cres) == 0);
			}else if (score>=40 && score<50){
				lvl = 5;
				max = -100;
				min = -200;
				unsigned int rand[4], cres[4];
				rand[0] = rand_number(min, max), rand[1] = rand_number(min, max), rand[2] = rand_number(min, max), rand[3] = rand_number(min, max);
				printf("%d, %d, %d, %d\n", rand[0], rand[1], rand[2], rand[3]);
				do{

					for (int i = 0; i < 4; i++)
					{
						scanf("%u", &cres[i]);
					}
					if(comparearrays(rand, cres) == 1){
						rondas++;
						if(winorlose(rand,cres) == 1){
							score = score+5;
						}
					}else{
					
						puts(MSG_SORT2);
					}
			
				}while (comparearrays(rand, cres) == 0);
			}
			


	
		}else if(input == 'm')
		{
			print_menu();
		}else if (input == 's')
		{
			print_status(lvl, score, rondas);
		}else if (input == 'q'){
			print_status(lvl, score, rondas);
			puts(MSG_BYE);
			sair = true;
		}else if (input != 'q' && input != 'm' && input != 's' && input != 'p' ){
			puts(MSG_UNKNOWN);
		}else
		{
			continue;
		}
		
		
		
		
	}else{
		lvl = 6;
		puts(MSG_WIN);
		print_status(lvl,score,rondas);
		puts(MSG_OVER);
		sair = true;
	}
	
	}else{
		puts(MSG_MAX);
		print_status(lvl,score,rondas);
		puts(MSG_OVER);
		sair = true;
	}
	}
	return 0;
}

int comparearrays(unsigned int random[], unsigned int crescendo[])
{
	unsigned int extrarand[4];
	extrarand[0] = random[0], extrarand[1] = random[1], extrarand[2] = random[2], extrarand[3] = random[3];
	unsigned int copycres[4];
	copycres[0] = crescendo[0], copycres[1] = crescendo[1], copycres[2] = crescendo[2], copycres[3] = crescendo[3];
	
    qsort(extrarand, 4, sizeof(int), cmpfunc);
	qsort(copycres, 4, sizeof(int), cmpfunc);
	

    for (int i = 0; i < 4; i++){
        if (extrarand[i] != copycres[i]){
            return 0;
		}
	}
    return 1; 

}

int winorlose(unsigned int random[],unsigned int crescendo[]){
	qsort(random, 4, sizeof(unsigned int), cmpfunc);
	for (size_t i = 0; i < 4; i++)
	{
		if(crescendo[i] == random[i]){
			continue;			
		}else{
			puts(MSG_WRONG);
			return 0;
		}
	}
	puts(MSG_WELL);
	return 1;
}




/* generate a random integer between min and max */
int rand_number(const int min, const int max)
{
	if (max < min)
	{
		puts("Max must be larger than Min");
		exit(0);
	}
	int n = abs(max - min) + 1;
	return (rand() % n) + min;
}

/* print the game status */
void print_status(const int level, const int score, const int plays)
{
	puts("+-----------------------------+");
	printf("| level:  %02d                  |\n", level);
	printf("| points: %02d                  |\n", score);
	printf("| plays:  %02d                  |\n", plays);
	puts("+-----------------------------+");
}

/* print the option menu */
void print_menu(void)
{
	puts("+-----------------------------+");
	puts("| SORTIFY                     |");
	puts("| p - next chalenge           |");
	puts("| q - quit                    |");
	puts("| m - print this information  |");
	puts("| s - show your status        |");
	puts("+-----------------------------+");
}