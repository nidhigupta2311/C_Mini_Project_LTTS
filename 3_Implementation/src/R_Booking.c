#include "R_Header.h"

float Pricing( int , float );

/**
 * @brief Error on this function shown that's why commented
 * 
 */

// /**
//  * @brief Function for Rails details.
//  * 
//  * @param p 
//  * @param n 
//  */
// void InputRailDetails(struct Train *p, int n)
// {
// 	printf("Enter name of Train:");
// 	scanf("%s",(p + n)->name);
// 	printf("From:");
// 	scanf("%s",(p + n)->from);
// 	printf("Target Destination:");
// 	scanf("%s",(p + n)->to);
// 	printf("Enter the Cost Per Traveller:");
// 	scanf("%f",&(p + n)->cost);
// 	(p + n)->rail_id =n;
// 	(p + n)->seats =40;
// }


/**
 * @brief Function for Rails details.
 * 
 * @param p 
 * @param n 
 */
void InputRailDetails(struct Train *p, int n)
{
	printf("Enter name of Train:");
	scanf("%s",(p + n)->name);
	printf("From:");
	scanf("%s",(p + n)->from);
	printf("Target Destination:");
	scanf("%s",(p + n)->to);
	printf("Enter the Cost Per Traveller:");
	scanf("%f",&(p + n)->cost);
	(p + n)->rail_id =n;
	(p + n)->seats =40;
}

/**
 * @brief Funciton for pricing the total amount
 * 
 * @param s 
 * @param c 
 * @return float 
 */
float Pricing( int s, float c)
{
	return (s*c);
}

/**
 * @brief Function for Traveller details.
 * 
 * @param p 
 * @param n 
 */
void InputTravellerDetails(struct person *p, int n )
{
	printf("Enter your Name:");
	scanf("%s",(p + n)->name);
	printf("Mobile Number:");
	scanf("%s",(p + n)->phone);
	(p + n)->id = n;	
}

/**
 * @brief Function for rail details
 * 
 * @param p 
 * @param n 
 */

void RailDisplay(struct Train *p, int n)
{
	printf("        Booking Available        \n");
	for(int i=0; i<n; i++)
	{
		printf("Train No: %d\n",(p+i)->rail_id);
		printf("Train Name: %s\n",(p+i)->name);
		printf("Destination: %s\n",(p+i)->to);	
		printf("From: %s\n",(p+i)->from);
		printf("Cost: Rs %f\n",(p+i)->cost);
		printf("-------------------------------------------------\n");
	}	
}

/**
 * @brief Function to show traveller details.
 * 
 * @param p1 
 * @param p2 
 * @param n 
 */
void ShowTravellerDetails(struct person *p1, struct booking *p2, int n)
{
	printf("        Customer details       \n");
	printf("CustomerID: %d\n",(p1+n)->id);
	printf("Name: %s\n",(p1+n)->name);
	printf("Mobile Number: %s\n",(p1+n)->phone);
	printf("Train booked: %d\n",(p2+n)->rail_id);
	printf("No. of seats: %d\n",(p2+n)->seats);	
	printf("-------------------------------------------------\n");	
}

/**
 * @brief function to display traveller
 * 
 * @param p 
 * @param n 
 */
void ShowTraveller(struct person *p, int n)
{
	for(int i=0; i<n; i++)
	{
		printf("CustomerID: %d\n",(p+i)->id);
		printf("Name: %s\n",(p+i)->name);
		printf("Mobile Number: %s\n",(p+i)->phone);	
		printf("-------------------------------------------------\n");
	}	
}
									
/**
 * @brief Display rail
 * 
 * @param p1 
 * @param n 
 */
void ShowRailwayDetails(struct Train *p1, int n)
{
	printf("        Train Details       \n");
	printf("Train ID: %d\n",(p1+n)->rail_id);
	printf("Train Name: %s\n",(p1+n)->name);
	printf("Target Destination: %s\n",(p1+n)->to);	
	printf("From: %s\n",(p1+n)->from);
	printf("Cost: Rs %f\n",(p1+n)->cost);
	printf("Seats: %d\n",(p1+n)->seats);
	printf("-------------------------------------------------\n");	
}		

/**
 * @brief Function for Reservation Details
 * 
 * @param p1 
 * @param p2 
 * @param p3 
 * @param id 
 * @param count 
 */
void ReservationOfRail(struct Train *p1, struct person *p2, struct booking *p3, int id, int count)
{
	int railid,bseat;
	float val;
	(p3 + id)->id = id;
	RailDisplay(p1,count);
	printf("Enter the Train ID of your choice:");
	scanf("%d",&railid);
	(p3 + id)->rail_id = railid;
	float price = (p1+railid)->cost;
	if((p1 + railid)->seats >= 0)
	{
		printf("Seats available: %d\n",(p1 + railid)->seats);
		printf("Enter required no. of seats: ");
		scanf("%d",&bseat);
		(p1+railid)->seats = (p1+railid)->seats - bseat;
		if((p1 + railid)->seats >= 0)
		{
			printf("Seats Booked!\n");
			(p3 + id)->seats = bseat;
			val = Pricing(bseat,price);
			(p2+id)->cost = val;
			printf("Total Amount: %f",(p2+id)->cost);
		}
		else
		{
			printf("Booking failed\n");
		}
	}
	else
	{
		printf("TrainFull\n");
	}			
}				
	

			
					
