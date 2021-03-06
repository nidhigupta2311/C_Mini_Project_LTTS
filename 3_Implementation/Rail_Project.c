
// #include<stdio.h>
// #include<string.h>
// #include"R_Header.h"
// /**
//  * @brief RailDisplay Taking to Argument int, struct type.
//  * 
//  */
// void RailDisplay(struct Train *, int );

// /**
//  * @brief Pricing for giving price
//  * 
//  * @return float 
//  */
// float Pricing( int , float );
#include<stdio.h>
#include<string.h>
#include"R_Header.h"
/**
 * @brief RailDisplay Taking two Argument int, struct type.
 * 
 */
void RailDisplay(struct Train *, int );

/**
 * @brief Pricing for giving price.
 * 
 * @return float 
 */
float Pricing( int , float );

/**
 * @brief 
 * 
 */
void ShowTraveller(struct person *, int );

/**
 * @brief InputTravellerDetails taking two argument struct and int type.
 * 
 */
void InputTravellerDetails(struct person *, int );

/**
 * @brief ReservationOfRail taking 6 argument , 3 of them are struct type and 2 of them are int type.
 * 
 */
void ReservationOfRail(struct Train *, struct person *, struct booking *, int , int );

/**
 * @brief 
 * 
 */
void ShowRailwayDetails(struct Train *, int );

/**
 * @brief ShowTravellerDetails taking three argument struct ,struct and int type.
 * 
 */
void ShowTravellerDetails(struct person *, struct booking *, int );
/**
 * @brief InputRailDetails Taking to argumement struct and int type.
 * 
 */
void InputRailDetails(struct Train *, int );





int main()

{
	
	char code[20] = "LTTS";
	int reg_no;
	int age;
	char pass[20];	
	char name1[20];
	int count=0;
	int num=0;
	int x;
	int r=0;
	int p=0;
	struct Train ptr1[100];
	struct person ptr2[100];
	struct booking ptr3[100];


	
	/**
	 * @brief While loop for that 5 option that we will given for user
	 * 
	 */
	while(x!=5)
	{
		int choice;
		printf("\n");
		printf("\n");
		printf("               1- Update Train Schedule (Host):       \n");
		printf("               2- Check Train Bookings made (Host):      \n");
		printf("               3- Book Train Tickets(User):    \n");
		printf("               4- Check Train Schedule(User):                             \n");
		printf("               5- Exit system:                                    \n");
		printf("  \n");
		printf("  Enter Option of your choice: ");
		scanf("%d",&choice);
		/**
		 * @brief Construct a new switch object taking "choice"
		 * 
		 */
		switch(choice)
		{
			case 1:
				printf("Enter Host Code :\n");
				scanf("%s",&pass);
				if (strcmp(pass,code)==0)
				{
				
					if(r>=0)
					{
						InputRailDetails(ptr1,r);
						r = r+1;
					}
				}
				break;
			case 2:
				printf("Enter Host Code:\n");
				scanf("%s",&pass);
				if (strcmp(pass,code)==0)
				{
					int y=0,a=0,b=0;
					while(y!=3)
					{	
						int ch;
						printf("                 Host Options\n");
						printf(" -------------------------------------------------------------------\n");
						printf("               1- Check Train Route:           \n");
						printf("               2- Check Train Reservation:          \n");
						printf("               3- Exit:                              \n");
						printf(" ------------------------------------------------------------------ \n");
						printf("  Enter your choice: ");
						scanf("%d",&ch);
						
						switch(ch)
						{
							case 1:
								while(a!=3)
								{
									int rail;
									printf(" -------------------------------------------------------------------\n");
									printf("               1- Print all Train details:           \n");
									printf("               2- Find Train :          \n");
									printf("               3- Exit:                              \n");
									printf(" ------------------------------------------------------------------ \n");
									printf("  Enter The Option of your choice: ");
									scanf("%d",&rail);
									switch(rail)
									{
										int sp_id;
										case 1:
											RailDisplay(ptr1, r);			
											break;
										case 2:
											printf("Enter ID to find:\n");
											scanf("%d",&sp_id);
											ShowRailwayDetails(ptr1,sp_id);
											break;
										case 3:
											a=3;
											break;
										default: 
											printf("Invalid Entry\n");
											break;
									}
								}
								break;	
							case 2:
								while(b!=3)
								{
									int custd;
									printf(" ////////////////////////////////////////////////////////////////////\n");
									printf(" -------------------------------------------------------------------\n");
									printf(" ////////////////////////////////////////////////////////////////////\n");
									printf("               1- Print Present Traveller details:           \n");
									printf("               2- Find Traveller(Enter ID):          \n");
									printf("               3- Exit:                              \n");
									printf(" ///////////////////////////////////////////////////////////////////\n");
									printf(" -------------------------------------------------------------------\n");
									printf(" ///////////////////////////////////////////////////////////////////\n");
									printf("  Enter Option of your choice: ");
									scanf("%d",&custd);
									switch(custd)
									{
										int cuid;
										case 1:
											ShowTraveller(ptr2, r);			
											break;
										case 2:
											printf("Enter ID:\n");
											scanf("%d",&cuid);
											ShowTravellerDetails(ptr2,ptr3,cuid);
											break;
										case 3:
											b=3;
											break;
										default: 
											printf("Invalid Entry\n");
											break;
									}
								}
								break;	
							case 3:
								y=3;
								break;
							default: 
								printf("Invalid Entry\n");
								break;
						}
					}
				}
				break;
			case 3:
				if(p>=0)
				{
					InputTravellerDetails(ptr2,p);
					ReservationOfRail(ptr1,ptr2,ptr3,p,r);
					p = p+1;
				}
				break;
			case 4:
				RailDisplay(ptr1, r);			
				break;
			case 5:
				x=5;
				break;
			default: 
				printf("Invalid Entry\n");
				break;
		}
	}
	return 0;
}				
/**
 * @brief End of main function
 * 
 */
					
					
					
					
