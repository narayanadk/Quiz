#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
void show_record();
void reset_score();
void help();
void edit_score(float , char []);

int main()
    {
     int countr,r,r1,count,i,n;
     float score;
     char choice;
     char playername[20];
     mainhome:
     system("cls");
     printf("\n\t\t\t\tQuiz Program\n");
     printf("\t\t\t\tBY CIVIL EF\n");
     printf("\n\t\t___________________________________________");

     printf("\n\t\t\t\t   LETS ");
     printf("\n\t\t\t\t  BEGIN");
     printf("\n\t\t\t\t THE GAME ");
     printf("\n\t\t___________________________________________");
     printf("\n\t\t___________________________________________");
     printf("\n\t\t\t!!!!! TEST YOUR GK !!!!!!   ") ;
     printf("\n\t\t___________________________________________");
     printf("\n\t\t___________________________________________");
     printf("\n\t\t > Press S to start the game");
     printf("\n\t\t > Press V to view the highest score  ");
     printf("\n\t\t > Press R to reset score");
     printf("\n\t\t > Press H for help            ");
     printf("\n\t\t > Press Q to quit             ");
     printf("\n\t\t___________________________________________\n\n");
     choice=toupper(getch());
     if (choice=='V')
	{
	show_record();
	goto mainhome;
	}
     else if (choice=='H')
	{
	help();
	getch();
	goto mainhome;
	}
	else if (choice=='R'){
	reset_score();
	getch();
	goto mainhome;
	}
	else if (choice=='Q')
	exit(1);
    else if(choice=='S'){
    	system("cls");
    	printf("\n\n\n\n\n\n\n\n\n\n\t\t\tEnter Your Name\n:");
     	gets(playername);

    system("cls");
    printf("\n ------------------  Welcome %s to The Quiz Game --------------------------",playername);
    printf("\n\nWorried about the rules? Its simple:");
    printf("\n -------------------------------------------------------------------------");
    printf("\n >> There are 2 rounds in this Quiz Game: Selection Round & Quizzers Round");
    printf("\n >> In Selection round you must correctly answer atleast 2 questions outof");
    printf("\n    3 questions to enter into Quizzers Round");
    printf("\n >> Your game starts with Quizzer Round. In this round you will be asked a");
    printf("\n    total of 10 questions. Each right answer will be awarded 10 points");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option.");
    printf("\n >> You will be asked questions continuously, till right answers are given.");
    printf("\n >> No negative marking for wrong answer!");
    printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
    printf("\n\n\n Press Y  to start the game!\n");
    printf("\n Press any other key to return to the main menu!");
    if (toupper(getch())=='Y'){
		    goto home;
        }
	else{
        goto mainhome;
       	system("cls");
       }
     home:
     system("cls");
     count=0;
     for(i=1;i<=5;i++){
    	system("cls");
     	r1=i;

     switch(r1)
		{
		case 1:
		printf("\n\n Who is Known as the first scientist of Nepal?");
		printf("\n\nA.Mahabir Pun\t\tB.Gehendra Shumsher\n\nC.Sanduk Ruit\t\tD.Lujendra Ojha");
		if (toupper(getch())=='B'){
			    printf("\n\nCorrect!!!");
				count++;
			    getch();
			    break;
}
		else
		       {
		        	printf("\n\nWrong!!! The correct answer is B.Gehendra Shumsher");
		        	getch();
		       		break;
		       }

        case 2:
		printf("\n\n\nWhat color are the goalposts in football?");
		printf("\n\nA.White\t\tB.Grey\n\nC.Yellow\t\tD.Orange");
		if (toupper(getch())=='C'){
				printf("\n\nCorrect!!!");
				count++;
				getch();
				break;
			}
		else{
				printf("\n\nWrong!!! The correct answer is C.Yellow");
		       	getch();
		       	break;
			}

        case 3:
		printf("\n\n\n Who is the first Miss Nepal?");
		printf("\n\nA.Ruvi Rana\t\tB.Malvika Subba\n\nC.Sudha Shakya\t\tD.Namrata Shrestha");
		if (toupper(getch())=='A'){
			printf("\n\nCorrect!!!");
			count++;
			getch();
			break;
			}
		else{
			   printf("\n\nWrong!!! The correct answer is A.Ruvi Rana");
		       getch();
		       break;
			}

        case 4:
		printf("\n\n\nWhich crop is taken as the first cash crop in the world?");
		printf("\n\nA.Coffee\t\tB.Tea\n\nC.Cardamom\t\tD.Tobacco");
		if (toupper(getch())=='B'){
			printf("\n\nCorrect!!!");
			count++;
			getch();
			break;
			}
			 
		else{
			   printf("\n\nWrong!!! The correct answer is B.Tea");
		       getch();
		       break;
			}

        case 5:
        printf("\n\n\nWhat does 'Love waves' relate to?");
        printf("\n\nA.Disease\t\tB.Radio Signal\n\nC.Communication\t\tD.Earthquake");
        if (toupper(getch())=='D'){
			  	printf("\n\nCorrect!!!");
			   	count++;
               	getch();
            	break;
				}
        else{
			   printf("\n\nWrong!!! The correct answer is D.Earthquake");
		       getch();
		       break;
			}
			}
		    }
	if(count>=3){
	goto test;
	}
	else{
	system("cls");
	printf("\n\nSORRY YOU CANNOT PROCEED FORWARD. NOT ENOUGH POINTS. BETTER LUCK NEXT TIME!!");
	getch();
	goto mainhome;
	}
     test:
     system("cls");
     printf("\n\n\t*** CONGRATULATION %s you are eligible to play the Game ***",playername);
     printf("\n\n\n\n\t!Press any key to Start the Game!");
     if(toupper(getch())=='p'){
		goto game;
		}
		game:
     countr=0;
     for(i=1;i<=20;i++){
	 system("cls");
     r=i;

     switch(r){
		case 1:
		printf("\n\nWhat is the National Game of England?");
		printf("\n\nA.Football\t\tB.Basketball\n\nC.Cricket\t\tD.Baseball");
		if (toupper(getch())=='C'){
			printf("\n\nCorrect!!!");
			countr++;
			getch();
			break;
			getch();
		}
		else{
			   printf("\n\nWrong!!! The correct answer is C.Cricket");
			   getch();
		       goto score;
		       break;
			}

		case 2:
		printf("\n\n\nWhere is International Mountain Museum located?");
		printf("\n\nA.New York\t\tB.Tibet\n\nC.Swizerland\t\tD.Pokhara");
		if (toupper(getch())=='D'){
			printf("\n\nCorrect!!!");
			countr++;
			getch();
			break;
			}
		else{
			   	printf("\n\nWrong!!! The correct answer is D.Pokhara");
				getch();
		      	goto score;
		       	break;
		    }

        case 3:
		printf("\n\n\nWhich is the national animal of India?");
		printf("\n\nA.Tiger\t\tB.Cow\n\nC.Dog\t\tD.Elephant");
		if (toupper(getch())=='A'){
			printf("\n\nCorrect!!!");
			countr++;
			getch();
			break;
			}
		else{
			   printf("\n\nWrong!!! The correct answer is A.Tiger");
			   getch();
		       goto score;
		       break;
			}

        case 4:
		printf("\n\n\nWater is to a pipe as ? is to a wire.");
		printf("\n\nA.Cord\t\tB.Gas\n\nC.Electricity\t\tD.Copper");
		if (toupper(getch())=='C'){
			printf("\n\nCorrect!!!");
			countr++;
			getch();
			break;
			}
		else{
            	printf("\n\nWrong!!! The correct answer is C.Electricity");
				getch();
		       	goto score;
		      	break;
		    }

        case 5:
		printf("\n\n\n A farmer has 17 sheep; all but nine dies. How many are left?");
		printf("\n\nA.9\t\tB.8\n\nC.7\t\tD.6");
		if (toupper(getch())=='A'){
			printf("\n\nCorrect!!!");
			countr++;
			getch();
			break;
			}
		else{
		           printf("\n\nWrong!!! The correct answer is A.9");
		       		getch();
		       		goto score;
		       		break;
		       }

		case 6:
		printf("\n\n\nWhich element is found in Vitamin B12?");
		printf("\n\nA.Zinc\t\tB.Cobalt\n\nC.Calcium\t\tD.Iron");
		if (toupper(getch())=='B'){
			printf("\n\nCorrect!!!");
			countr++;
			getch();
			break;
			}
		else{
			   printf("\n\nWrong!!! The correct answer is B.Cobalt");
			   goto score;
		       getch();
		       break;
			   }

        case 7:
		printf("\n\n\nWhat is the National Name of Japan?");
		printf("\n\nA.Polska\t\tB.Hellas\n\nC.Drukyul\t\tD.Nippon");
		if (toupper(getch())=='D'){
				printf("\n\nCorrect!!!");
				countr++;
				getch();
			 	break;
			}
		else{
				printf("\n\nWrong!!! The correct answer is D.Nippon");
				getch();
		       	goto score;
		      	break;}

        case 8:
		printf("\n\n\nHow many times a piece of paper can be folded at the most?");
		printf("\n\nA.6\t\tB.7\n\nC.8\t\tD.Depends on the size of paper");
		if (toupper(getch())=='B'){
				printf("\n\nCorrect!!!");
				countr++;
				getch();
				break;
			}
		else{
				printf("\n\nWrong!!! The correct answer is B.7");
				getch();
		       	goto score;
		       	break;
			}

        case 9:
		printf("\n\n\nWhich King has been crowned king twice in Nepal?");
		printf("\n\nA.Tribhuwan Shah\t\tB.Gyanendra Shah\n\nC.Mahendra Shah\t\tD.Birendra Shah");
		if (toupper(getch())=='B'){
				printf("\n\nCorrect!!!");
				countr++;
				getch();
				break;
			}
		else{
				printf("\n\nWrong!!! The correct answer is Gyanendra Shah");
				getch();
		       	goto score;
		       	break;
			}

        case 10:
		printf("\n\n\nWho wrote the song Ukali Orali Haruma sang by Tara Devi?");
		printf("\n\nA.Tara Devi\t\tB.Narayan Gopal\n\nC.Aasha Bhosal\t\tD.Chandani Shah(Queen Aishwarya)");
		if (toupper(getch())=='D'){
				printf("\n\nCorrect!!!");
				countr++;
				getch();
				break;
			}
		else{
				printf("\n\nWrong!!! The correct answer is D.Chandani Shah(Queen Aishwarya");
				getch();
				break;
				goto score;
			}

        case 11:
		printf("\n\n\nWhat is the color of the Black Box in aeroplanes?");
		printf("\n\nA.White\t\tB.Black\n\nC.Orange\t\tD.Red");
		if (toupper(getch())=='C'){
				printf("\n\nCorrect!!!");
				countr++;
				getch();
				break;
			}
		else{
			 	printf("\n\nWrong!!! The correct answer is C.Orange");
			 	getch();
              	break;
				goto score;
			}

        case 12:
		printf("\n\n\nWhich city is known at 'The City of Seven Hills'?");
		printf("\n\nA.Rome\t\tB.Vactican City\n\nC.Madrid\t\tD.Berlin");
		if (toupper(getch())=='A'){
				printf("\n\nCorrect!!!");
				countr++;
				getch();
			   	break;
			}
		else{
				printf("\n\nWrong!!! The correct answer is A.Rome");
				getch();
              	break;
				goto score;
			}

		case 13:
		printf("\n\n\nName the country where there no mosquitoes are found?");
		printf("\n\nA.Japan\t\tB.Italy\n\nC.Argentina\t\tD.France");
		if (toupper(getch())=='D'){
				printf("\n\nCorrect!!!");
				countr++;
				getch();
				break;
			}
		else{
			   	printf("\n\nWrong!!! The correct answer is D.France");
				getch();
		       	break;
				goto score;
			}

        case 14:
		printf("\n\n\nWho is the author of 'Pulpasa Cafe'?");
		printf("\n\nA.Narayan Wagle\t\tB.Lal Gopal Subedi\n\nC.B.P. Koirala\t\tD.Khagendra Sangraula");
		if (toupper(getch())=='A'){
			printf("\n\nCorrect!!!");
			countr++;
			getch();
			break;
			}
		else{
				printf("\n\nWrong!!! The correct answer is A.Narayan Wagle");
				getch();
		       	break;
				goto score;
			}

		case 15:
		printf("\n\n\nWhich Blood Group is known as the Universal Recipient?");
		printf("\n\nA.A\t\tB.AB\n\nC.B\t\tD.O");
		if (toupper(getch())=='B'){
				printf("\n\nCorrect!!!");
				countr++;
				getch();
			 	break;
				}
		else{
				printf("\n\nWrong!!! The correct answer is B.AB");
				getch();
		       	goto score;
		       	break;
			}

		case 16:
		printf("\n\n\nWhen did Nepal get ODI status in Cricket?");
		printf("\n\nA.2018 AD\t\tB.2020 AD\n\nC.2022 AD\t\tD.2019 AD");
		if (toupper(getch())=='A'){
				printf("\n\nCorrect!!!");
				countr++;
				getch();
				break;
			}
		else{
				printf("\n\nWrong!!! The correct answer is A.2018 AD");
				getch();
		       	goto score;
		       	break;
			}

		case 17:
		printf("\n\n\nIn which movie did Rajesh Hamal say his famous line Shankhar Hu Ma Shankhar!?");
		printf("\n\nA.Deuta\t\tB.Yug Dekhi Yug Samma\n\nC.Basanti\t\tD.Chino");
		if (toupper(getch())=='A'){
					printf("\n\nCorrect!!!");
					countr++;
					getch();
					break;
				}
		else{
			   printf("\n\nWrong!!! The correct answer is A.Deuta");
			   getch();
			   goto score;
		       break;
			}

		case 18:
		printf("\n\n\nWhat issue does the song ‘Hataridai Batasidai’ by Saajan Raj Vaidya portray?");
		printf("\n\nA.Brain Drain\t\tB.Homosexuality\n\nC.Racism\t\tD.Harrashment\n\n");
		if (toupper(getch())=='B'){
				printf("\n\nCorrect!!!");
				countr++;
				getch();
				break;
			}
		else{
				printf("\n\nWrong!!! The correct answer is B.Homosexuality");
				getch();
				goto score;
		       	break;
			}

		case 19:
		printf("\n\n\nWho was the famous Nepalese literature who was born and died on the same date?");
		printf("\n\nA.Moti Ram Bhatta\tB.Laxmi Pd. Devkota\n\nC.Bhimnidhi Tiwari\tD.B.P. Koirala\n\n");
		if (toupper(getch())=='A'){
				printf("\n\nCorrect!!!");
				countr++; 
				getch();
				break;
			}
		else{
			   printf("\n\nWrong!!! The correct answer is A.Moti Ram Bhatta");
			   getch();
			   goto score;
		       break;
			   }

		case 20:
		printf("\n\n\nWhen did Gyanendra Malla declared retirement from cricket?");
		printf("\n\nA.3 August 2023\t\tB.4 August 2023\n\nC.5 August 2023\t\tD.2 August 2023");
		if (toupper(getch())=='B'){
				printf("\n\nCorrect!!!");
				countr++;
				getch();
				break;
				}
		else{
				printf("\n\nWrong!!! The correct answer is B.4 August 2023");
				getch();
				goto score;
		       	break;
			}
			}
			}
	score:
    system("cls");
	score=(float)countr*10;
	if(score>0.00 && score<100){
	   printf("\n\n\t\t**************** CONGRATULATION *****************");
	     printf("\n\t You won %.2f",score);
		 goto go;
		 }

	 else{
	 	printf("\n\n\t******** SORRY YOU DIDN'T GET ANY POINTS ********");
	    printf("\n\t\t Thanks for your participation");
	    printf("\n\t\t TRY AGAIN");
		goto go;
		}

	go:
	puts("\n\n Press Y if you want to play next game");
	puts(" Press any key if you want to go main menu");
	if (toupper(getch())=='Y')
		goto home;
	else{
		edit_score(score,playername);
		goto mainhome;
		}
		}
		}

void show_record(){
	system("cls");
	char name[20];
	float scr;
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&name,&scr);
	printf("\n\n\t\t*************************************************************");
	printf("\n\n\t\t %s has secured the Highest Score %0.2f",name,scr);
	printf("\n\n\t\t*************************************************************");
	fclose(f);
	getch();}

void reset_score(){
	system("cls");
    float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r+");
	fscanf(f,"%s%f",&nm,&sc);
	sc=0;
	fprintf(f,"%s,%.2f",nm,sc);
    fclose(f);
	}

void help(){
	system("cls");
    printf("\n\n                              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n\nWorried about the rules? Its simple:");
    printf("\n -------------------------------------------------------------------------");
    printf("\n >> There are 2 rounds in this Quiz Game: Selection Round & Quizzers Round");
    printf("\n >> In Selection round you must correctly answer atleast 2 questions outof");
    printf("\n    3 questions to enter into Quizzers Round");
    printf("\n >> Your game starts with Quizzer Round. In this round you will be asked a");
    printf("\n    total of 10 questions. Each right answer will be awarded 10 points");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option.");
    printf("\n >> You will be asked questions continuously, till right answers are given.");
    printf("\n >> No negative marking for wrong answer!");

	printf("\n\n\t*********************BEST OF LUCK*********************************");
	printf("\n\n\t*****C PROGRAM QUIZ GAME is developed by CIVIL EF BOYS********");}

void edit_score(float score, char plnm[20]){
	system("cls");
	float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&nm,&sc);
	if (score>=sc){
	 	sc=score;
	    fclose(f);
	    f=fopen("score.txt","w");
	    fprintf(f,"%s\n%.2f",plnm,sc);
	    fclose(f);
		}
	}
