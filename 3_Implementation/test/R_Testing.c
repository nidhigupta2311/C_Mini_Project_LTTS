#include "unity.h"
#include "R_Header.h"

/**
 * @brief Name of the project 
 * 
 */
#define PROJECT_NAME "Train_Reservation"


/**
 * @brief Writing all the prototyping of function
 * 
 */
void test_RailDisplay(void);
void test_ShowTraveller(void);
void test_ReservationOfRail(void);
void test_ShowRailwayDetails(void);
void test_ShowTravellerDetails(void);

/**
 * @brief Set the Up object These function are important to test for unity framwork
 * 
 */
void setUp(){}
void tearDown(){}

/**
 * @brief Main started for Test
 * 
 * @return int 
 */
int main()
{
/**
 * @brief Construct a new unity begin object "START"
 * 
 */
  UNITY_BEGIN();

/**
 * @brief Construct a new run test object "RUN TEST CASE"
 * 
 */
  RUN_TEST(test_RailDisplay);
  RUN_TEST(test_ShowTraveller);
  RUN_TEST(test_ReservationOfRail);
  RUN_TEST(test_ShowRailwayDetails);
  RUN_TEST(test_ShowTravellerDetails);

/**
 * @brief END TEST 
 * 
 * @return return 
 */
  return UNITY_END();
}
/**
 * @brief FUNCTIONS MENTION ABOVE
 * 
 */
void test_RailDisplay(void) {
  

}
void test_ShowTraveller(void) {
 
  
}
void test_ReservationOfRail(void) {
 
  
}

void test_ShowRailwayDetails(void) {
  
  
}

void test_ShowTravellerDetails(void) {
  
 
}
/**
 * @brief END TEST
 * 
 */