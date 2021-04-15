#include "unity.h"
#include "R_Header.h"

/**
 * @brief Defining Project_main
 * 
 */
#define PROJECT_NAME    "air_Ticket"


/**
 * @brief Function Prototyping for testing
 * 
 */
void test_RailDisplay(void);
void test_ShowTraveller(void);
void test_ReservationOfRail(void);
void test_ShowRailwayDetails(void);
void test_ShowTravellerDetails(void);

/**
 * @brief Set the Up object /Used for unity framwork "Needed"
 * 
 */
void setUp(){}
void tearDown(){}

/**
 * @brief Start of testing from here
 * 
 * @return int 
 */
int main()
{
/**
 * @brief Construct a new unity begin object
 * 
 */
  UNITY_BEGIN();

/**
 * @brief Construct a new run test object (Run test cases)
 * 
 */
  RUN_TEST(test_RailDisplay);
  RUN_TEST(test_ShowTraveller);
  RUN_TEST(test_ReservationOfRail);
  RUN_TEST(test_ShowRailwayDetails);
  RUN_TEST(test_ShowTravellerDetails);

  /**
   * @brief Unity framwork Ended
   * 
   * @return return 
   */
  return UNITY_END();
}

/**
 * @brief Function 
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
