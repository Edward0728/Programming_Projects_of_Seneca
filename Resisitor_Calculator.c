#include<stdio.h>
#include<math.h>
int main (void){
int bands, firstStr, secondStr, thirdStr, multi, tempColor, temp, tolerCo;
double resistor, toler;
printf("Welcome to the Seneca College Resistor Calculator...\n");
printf("How many bands in your resistor?");
scanf("%d",&bands);
printf("\n");

switch(bands){
	case 4:
	
	printf("First Stripe\n");
    printf("1-BROWN, 2-RED, 3-ORANGE, 4-YELLOW\n");
    printf("5-GREEN, 6-BLUE, 7-VIOLET, 8-GREY, 9-WHITE\n");
    printf("Enter Value:");
    scanf("%d",&firstStr);
    printf("\n");
    
 	printf("Second Stripe\n");
    printf("0-BLACK, 1-BROWN, 2-RED, 3-ORANGE, 4-YELLOW\n");
    printf("5-GREEN, 6-BLUE, 7-VIOLET, 8-GREY, 9-WHITE\n");
    printf("Enter Value:");
    scanf("%d",&secondStr);
    printf("\n");   
    
    printf("Multiplier Color\n");
    printf("0-BLACK, 1-BROWN, 2-RED, 3-ORANGE, 4-YELLOW\n");
    printf("5-GREEN, 6-BLUE, 7-VIOLET, 8-GREY, 9-WHITE, 10-GOLD, 11-SILVER\n");
    printf("Enter Value:");
    scanf("%d",&multi);
    printf("\n"); 
    
    printf("Tolerance Color\n");
    printf("1-BROWN, 2-RED, 3-ORANGE, 4-YELLOW\n");
    printf("5-GREEN, 6-BLUE, 7-VIOLET, 8-GREY, 10-GOLD, 11-SILVER\n");
    printf("Enter Value:");
    scanf("%d",&tolerCo);
    printf("\n"); 
	
	if(multi!=10&&multi!=11){resistor=firstStr*pow(10,multi+1)+secondStr*pow(10,multi);
	}
	else if (multi==10){resistor=(firstStr*10+secondStr*1)/10.0;
	}
	else if (multi==11){resistor=(firstStr*10+secondStr*1)/100.0;
	}
	
	switch (tolerCo){
	    case 1: toler=1;
	break;
		case 2: toler=2;
	break;
		case 3: toler=3;
	break;
		case 4: toler=4;
	break;
		case 5: toler=0.5;
	break;
		case 6: toler=0.25;
	break;
		case 7: toler=0.10;
	break;
		case 8: toler=0.05;
	break;
		case 10: toler=5;
	break;
		case 11: toler=10;
	break;
	}
	printf("Thank you...\n");
	printf("Your resistor has a value of:%.2lf +/-%.2f%%",resistor,toler); 
	break;	
	case 5:
		
	printf("First Stripe\n");
    printf("1-BROWN, 2-RED, 3-ORANGE, 4-YELLOW\n");
    printf("5-GREEN, 6-BLUE, 7-VIOLET, 8-GREY, 9-WHITE\n");
    printf("Enter Value:");
    scanf("%d",&firstStr);
    printf("\n");
    
 	printf("Second Stripe\n");
    printf("0-BLACK, 1-BROWN, 2-RED, 3-ORANGE, 4-YELLOW\n");
    printf("5-GREEN, 6-BLUE, 7-VIOLET, 8-GREY, 9-WHITE\n");
    printf("Enter Value:");
    scanf("%d",&secondStr);
    printf("\n");   
    
    printf("Third Stripe\n");
    printf("0-BLACK, 1-BROWN, 2-RED, 3-ORANGE, 4-YELLOW\n");
    printf("5-GREEN, 6-BLUE, 7-VIOLET, 8-GREY, 9-WHITE\n");
    printf("Enter Value:");
    scanf("%d",&thirdStr);
    printf("\n"); 
    
    printf("Multiplier Color\n");
    printf("0-BLACK, 1-BROWN, 2-RED, 3-ORANGE, 4-YELLOW\n");
    printf("5-GREEN, 6-BLUE, 7-VIOLET, 8-GREY, 9-WHITE, 10-GOLD, 11-SILVER\n");
    printf("Enter Value:");
    scanf("%d",&multi);
    printf("\n"); 
    
    printf("Tolerance Color\n");
    printf("1-BROWN, 2-RED, 3-ORANGE, 4-YELLOW\n");
    printf("5-GREEN, 6-BLUE, 7-VIOLET, 8-GREY, 10-GOLD, 11-SILVER\n");
    printf("Enter Value:");
    scanf("%d",&tolerCo);
    printf("\n"); 
	
	if(multi!=10&&multi!=11){resistor=firstStr*pow(10,multi+2)+secondStr*pow(10,multi+1)+thirdStr*pow(10,multi);
	}
	else if (multi==10){resistor=(firstStr*100+secondStr*10+thirdStr*1)/10.0;
	}
	else if (multi==11){resistor=(firstStr*100+secondStr*10+thirdStr*1)/100.0;
	}
	
	switch (tolerCo){
	    case 1: toler=1;
	break;
		case 2: toler=2;
	break;
		case 3: toler=3;
	break;
		case 4: toler=4;
	break;
		case 5: toler=0.5;
	break;
		case 6: toler=0.25;
	break;
		case 7: toler=0.10;
	break;
		case 8: toler=0.05;
	break;
		case 10: toler=5;
	break;
		case 11: toler=10;
	break;
	}
	printf("Thank you...\n");
	printf("Your resistor has a value of:%.2lf +/-%.2f%%",resistor,toler); 
	break;
	
	case 6:
		
	printf("First Stripe\n");
    printf("1-BROWN, 2-RED, 3-ORANGE, 4-YELLOW\n");
    printf("5-GREEN, 6-BLUE, 7-VIOLET, 8-GREY, 9-WHITE\n");
    printf("Enter Value:");
    scanf("%d",&firstStr);
    printf("\n");
    
 	printf("Second Stripe\n");
    printf("0-BLACK, 1-BROWN, 2-RED, 3-ORANGE, 4-YELLOW\n");
    printf("5-GREEN, 6-BLUE, 7-VIOLET, 8-GREY, 9-WHITE\n");
    printf("Enter Value:");
    scanf("%d",&secondStr);
    printf("\n");   
    
    printf("Third Stripe\n");
    printf("0-BLACK, 1-BROWN, 2-RED, 3-ORANGE, 4-YELLOW\n");
    printf("5-GREEN, 6-BLUE, 7-VIOLET, 8-GREY, 9-WHITE\n");
    printf("Enter Value:");
    scanf("%d",&thirdStr);
    printf("\n"); 
    
    printf("Multiplier Color\n");
    printf("0-BLACK, 1-BROWN, 2-RED, 3-ORANGE, 4-YELLOW\n");
    printf("5-GREEN, 6-BLUE, 7-VIOLET, 8-GREY, 9-WHITE, 10-GOLD, 11-SILVER\n");
    printf("Enter Value:");
    scanf("%d",&multi);
    printf("\n"); 
    
    printf("Tolerance Color\n");
    printf("1-BROWN, 2-RED, 3-ORANGE, 4-YELLOW\n");
    printf("5-GREEN, 6-BLUE, 7-VIOLET, 8-GREY, 10-GOLD, 11-SILVER\n");
    printf("Enter Value:");
    scanf("%d",&tolerCo);
    printf("\n"); 
    
    printf("Temperature Coefficient\n");
    printf("1-BROWN, 2-RED, 3-ORANGE, 4-YELLOW, 6-BLUE, 7-VIOLET\n");
    printf("Enter Value:");
    scanf("%d",&tempColor);
    printf("\n"); 
	
	if(multi!=10&&multi!=11){resistor=firstStr*pow(10,multi+2)+secondStr*pow(10,multi+1)+thirdStr*pow(10,multi);
	}
	else if (multi==10){resistor=(firstStr*100+secondStr*10+thirdStr*1)/10.0;
	}
	else if (multi==11){resistor=(firstStr*100+secondStr*10+thirdStr*1)/100.0;
	}
	
	switch (tolerCo){
	    case 1: toler=1;
	break;
		case 2: toler=2;
	break;
		case 3: toler=3;
	break;
		case 4: toler=4;
	break;
		case 5: toler=0.5;
	break;
		case 6: toler=0.25;
	break;
		case 7: toler=0.10;
	break;
		case 8: toler=0.05;
	break;
		case 10: toler=5;
	break;
		case 11: toler=10;
	break;
	}
	
	switch (tempColor){
	    case 1: temp=100;
	break;
		case 2: temp=50;
	break;
		case 3: temp=15;
	break;
		case 4: temp=25;
	break;
		case 6: temp=10;
	break;
		case 7: temp=5;
	break;
	}
	printf("Thank you...\n");
	printf("Your resistor has a value of:%.2lf +/-%.2f%% Temp. Co. %d",resistor,toler,temp); 
    break;
	
	
	}

	
} 
