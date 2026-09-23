#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void result(int p,int n){                          //p represents the score of computer, n represents the score of user
	if (p == n)                                             //in case of draw
		printf("congrats,draw");
	else if(p < n)                                              //in case user wins
		printf("congrats,you won. Score: %d/%d",n,p);
	else                                                       //in case computer wins
		printf("good game,you lose. Score: %d/%d",n,p);
		
}

int main(){
	printf("rock paper scissors game\n");  //directions
	printf("the rules; you'll pick a number between 0 and 2'\n");
	printf("0 -> rock ,1->paper ,2->scissors \n");
	printf("*rock beats scissors,scissors beats paper,paper beats rock*\n");
	printf("have a good game\n");
                                        
	int user_num;        
	int user_score=0;                                    
	int comp_score=0;                                  
	srand(time(NULL));    //initialize random generator
	while(user_score!=3 && comp_score!=3){  //comparison until someone reaches 3                                        
		int num = rand()%3;                 // generates different random numbers for computer
		printf("choose a number(0-2): \n");   
	    scanf("%d",&user_num);              
		
		if(user_num<0 || user_num>2) {      //in case of user enters an invalid number
			printf("choose a valid number\n"); 
			continue;						   // asks again
		}
		if (user_num == num){					//in case of the numbers are equal
			printf("computer chose: %d\n",num);
			printf("we choose the same,draw. score: %d-%d\n",comp_score,user_score); 
			}
			else if((user_num == 0 && num == 2)||(user_num == 1 && num == 0)||(user_num == 2 && num ==1)){  //user win
				user_score++;
				printf("computer chose: %d\n",num);
				printf("you win! score: %d-%d\n",comp_score,user_score);
			}
			else{																							//computer win
				comp_score++;
				printf("computer chose: %d\n",num);
				printf("I win! score: %d-%d\n",comp_score,user_score);
			}
				
		}
			
		result(comp_score,user_score);   				// calls the method that will determine the result and give feedback
}
