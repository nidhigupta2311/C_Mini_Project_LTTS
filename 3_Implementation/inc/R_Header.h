#include<stdio.h>
#include<stdlib.h>

/**
 * @brief Details structure declare variables and arrays
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

/**
 * @brief TiffinService structure , 
 * 
 */
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



struct Tatkal{
	char Name_Rail[25];
	int ID_Rail[15];
	int Time;
	float price;
};



struct seat{
	char Numbe[25];
	int total[15];
	int new2;
	float Id_seat;
};



struct Train{
	char name[30];
	char to[30];
	char from[30];
	float cost;
	int rail_id;
	int seats;
};


struct person{
	char name[25];
	char phone[15];
	int id;
	float cost;
};


struct booking{
	int id;
	int rail_id;
	int seats;
};
