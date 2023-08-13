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
        printf("\n\n\nWhat does ‘Love Waves’ relate to?");
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
		printf("\n\n\nStudy of Earthquake is called............,");
		printf("\n\nA.Seismology\t\tB.Cosmology\n\nC.Orology\t\tD.Etimology");
		if (toupper(getch())=='A'){
			printf("\n\nCorrect!!!");
			countr++;
			getch();
			break;
			}
		else{
			   	printf("\n\nWrong!!! The correct answer is A.Seismology");
				getch();
		      	goto score;
		       	break;
		    }

        case 3:
		printf("\n\n\nAmong the top 10 highest peaks in the world, how many lie in Nepal? ");
		printf("\n\nA.6\t\tB.7\n\nC.8\t\tD.9");
		if (toupper(getch())=='C'){
			printf("\n\nCorrect!!!");
			countr++;
			getch();
			break;
			}
		else{
			   printf("\n\nWrong!!! The correct answer is C.8");
			   getch();
		       goto score;
		       break;
			}

        case 4:
		printf("\n\n\nThe Laws of Electromagnetic Induction were given by?");
		printf("\n\nA.Faraday\t\tB.Tesla\n\nC.Maxwell\t\tD.Coulomb");
		if (toupper(getch())=='A'){
			printf("\n\nCorrect!!!");
			countr++;
			getch();
			break;
			}
		else{
            	printf("\n\nWrong!!! The correct answer is A.Faraday");
				getch();
		       	goto score;
		      	break;
		    }

        case 5:
		printf("\n\n\nIn what unit is electric power measured?");
		printf("\n\nA.Coulomb\t\tB.Watt\n\nC.Power\t\tD.Units");
		if (toupper(getch())=='B'){
			printf("\n\nCorrect!!!");
			countr++;
			getch();
			break;
			}
		else{
		           printf("\n\nWrong!!! The correct answer is B.Power");
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
		printf("\n\n\nWhat is the capital of Denmark?");
		printf("\n\nA.Copenhagen\t\tB.Helsinki\n\nC.Ajax\t\tD.Galatasaray");
		if (toupper(getch())=='A'){
				printf("\n\nCorrect!!!");
				countr++;
				getch();
				break;
			}
		else{
				printf("\n\nWrong!!! The correct answer is A.Copenhagen");
				getch();
		       	goto score;
		       	break;
			}

        case 10:
		printf("\n\n\nWhich is the longest River in the world?");
		printf("\n\nA.Nile\t\tB.Koshi\n\nC.Ganga\t\tD.Amazon");
		if (toupper(getch())=='A'){
				printf("\n\nCorrect!!!");
				countr++;
				getch();
				break;
			}
		else{
				printf("\n\nWrong!!! The correct answer is A.Nile");
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
		printf("\n\n\nWhat is the unit of measurement of distance between Stars?");
		printf("\n\nA.Light Year\t\tB.Coulomb\n\nC.Nautical Mile\t\tD.Kilometer");
		if (toupper(getch())=='A'){
				printf("\n\nCorrect!!!");
				countr++;
				getch();
				break;
			}
		else{
				printf("\n\nWrong!!! The correct answer is A.Light Year");
				getch();
		       	goto score;
		       	break;
			}

		case 17:
		printf("\n\n\nThe country famous for Samba Dance is........");
		printf("\n\nA.Brazil\t\tB.Venezuela\n\nC.Nigeria\t\tD.Bolivia");
		if (toupper(getch())=='A'){
					printf("\n\nCorrect!!!");
					countr++;
					getch();
					break;
				}
		else{
			   printf("\n\nWrong!!! The correct answer is A.Brazil");
			   getch();
			   goto score;
		       break;
			}

		case 18:
		printf("\n\n\nWind speed is measure by__________?");
		printf("\n\nA.Lysimeter\t\tB.Air vane\n\nC.Hydrometer\t\tD.Anemometer\n\n");
		if (toupper(getch())=='D'){
				printf("\n\nCorrect!!!");
				countr++;
				getch();
				break;
			}
		else{
				printf("\n\nWrong!!! The correct answer is D.Anemometer");
				getch();
				goto score;
		       	break;
			}

		case 19:
		printf("\n\n\nWhich city in the world is popularly known as The City of Temple?");
		printf("\n\nA.Delhi\tB.Bhaktapur\n\nC.Kathmandu\tD.Agra\n\n");
		if (toupper(getch())=='C'){
				printf("\n\nCorrect!!!");
				countr++; 
				getch();
				break;
			}
		else{
			   printf("\n\nWrong!!! The correct answer is C.Kathmandu");
			   getch();
			   goto score;
		       break;
			   }

		case 20:
		printf("\n\n\nWhich hardware was used in the First Generation Computer?");
		printf("\n\nA.Transistor\t\tB.Valves\n\nC.I.C\t\tD.S.S.I");
		if (toupper(getch())=='B'){
				printf("\n\nCorrect!!!");
				countr++;
				getch();
				break;
				}
		else{
				printf("\n\nWrong!!! The correct answer is B.Valves");
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
