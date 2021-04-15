#include<stdio.h>
#include<stdlib.h>

/**
 * @brief structure details about the details of passenger
 * 
 */
struct details{
	char name[30];
	char Adha[30];
	char age1[30];
	float price;
	int amount;
	int reason;
};

struct TiffinService{
	char name[30];
	char mail[30];
	char Meal1[30];
	char Meal2[30];
	float price1 ,price2;
	int seat_no;
};

struct Premium{
	char name[30];
	char mail[30];
	char address1[30];
	char address2[30];
	int Adharno;
};
struct compartment{
	char name[30];
	char mail[30];
	char Preference[30];
	char preference2[30];
	int Adharno;
};

/**
 * @brief Structure BusDetails is details about the Air_details
 * 
 */

struct Tatkal{
	char Name_Rail[25];
	int ID_Rail[15];
	int Time;
	float price;
};

/**
 * @brief Structure seat is the details about the seat details
 * 
 */

struct seat{
	char Numbe[25];
	int total[15];
	int new2;
	float Id_seat;
};

/**
 * @brief Air is the details about the Airline
 * 
 */

struct Train{
	char name[30];
	char to[30];
	char from[30];
	float cost;
	int rail_id;
	int seats;
};

/**
 * @brief The person structure is structure about the person
 * 
 */

struct person{
	char name[25];
	char phone[15];
	int id;
	float cost;
};

/**
 * @brief the structure booking is about booking
 * 
 */
struct booking{
	int id;
	int rail_id;
	int seats;
};
