#include "../include/main.h"
/*******************************************************************************
 * AUTHOR      : Carlos Aguilera
 * STUDENT ID  : 1152562
 * LAB #       : 
 * CLASS       : CS1B
 * SECTION     : M-W
 * DUE DATE    : 
 ******************************************************************************/

/******************************************************************************
 * Title:
 * ----------------------------------------------------------------------------
 * PROGRAM:
 * 
 * ----------------------------------------------------------------------------
 ******************************************************************************/

/*******************************************************************************
 * 
 ------------------------------------------------------------------------------- 
 * FUNCTION:
 * @param
 * RETURNS - 
 ******************************************************************************/

int main() {
  heading();
  Livestock livestock;
  MenuOptions choice = kExit;
  MenuType menuType = kEntry;
  do {
    switchLoop(livestock, choice, menuType);
  } while (choice != kExit);
  return 0;
}