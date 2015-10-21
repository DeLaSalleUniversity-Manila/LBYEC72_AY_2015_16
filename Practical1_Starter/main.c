/*============================================================*/
// 
//   Author: Melvin Cabatuan
//   Date Modified: October 20, 2015
//   Description:   Practical Exam
//
/*============================================================*/

/* MODIFY THIS FILE FOR THE ACTIVITY */

/*

Task 1: Debug the "Invalid Input bug" after the String routines.
Task 2: Complete the main program and the related implementation.

 */


#include <stdio.h>
#include <stdlib.h>

/* Include files */
#include "mystring.h"        // String header file
#include "mypolynomial.h"    // Polynomial Evaluation header
#include "mystatistics.h"    // Statistics operations header
#include "mymatrix.h"        // Matric operations header
#include "basiccalculator.h" // Basic calculator header, +,-,*,/,%


int main(){

  /* DO NOT MODIFY THE INITIALIZATION */

  /// Polynomial initialization:
  int order; // polynomial order
  double coef[MAX_SIZE]; // polynomial coefficients
  double x; // polynomial x value


  /// Basic Statistics initialization:
  int count;
  double data[MAX_SIZE];
  int statOption;


  /// Matrix Operations
  int firstRows, firstCols;  // first matrix dimensions
  int secondRows, secondCols;// second matrix dimensions

  int matrixOption; // for Matrix menu switch
  int option;  // for Transpose and Modify options

  double first[MAX_ROWS][MAX_COLS]; // first matrix
  double second[MAX_ROWS][MAX_COLS];// second matrix
  double result[MAX_ROWS][MAX_COLS];// resulting matrix

  /// String initializations
  char datastorage[NUM_OF_STRINGS][BUFFER_SIZE];
  int length;

  /// Main menu
  char choice; // main menu option

  while(1){
    puts("\n");
    puts("=====================================================");
    puts(" Main Menu:");
    puts("=====================================================");
    puts(" a: Enter Strings");
    puts(" b: Remove String");
    puts(" c: View String");
    puts(" d: Search String");
    puts(" e: Polynomial Evaluation");
    puts(" f: Basic Statistics");
    puts(" g: Matrix Operations");
    puts(" h: Basic Calculator");
    puts(" q: Quit \n");
    printf(">> ");

    scanf(" %c", &choice);
  
    if (choice == 'a' || choice == 'A'){
      /* DO NOT MODIFY */
      puts("You chose Enter String ...\n");
      puts("How many strings are you going to input?");
      scanf("%d", &length);
      getchar(); // flush new line from scanf()
      getStrings(datastorage, length); 
    }


 
    else if (choice == 'b' || choice == 'B'){
      puts("You chose Remove String ...\n");
      /* TO DO: MODIFY THIS PART FOR THE ACTIVITY */
      // Refer to the 'mystring.h' for the usable function prototypes
      // Refer to the 'mystring.c' for the function implementation

    } 



    else if (choice == 'c' || choice == 'C'){
      puts("You chose View String ...\n");
	  /* DO NOT MODIFY */
      viewStrings(datastorage, length);
    }



    else if (choice == 'd' || choice == 'D'){
      puts("You chose Search String ...\n");

      /* TO DO: MODIFY THIS PART FOR THE ACTIVITY */
      // Refer to the 'mystring.h' for the usable function prototypes
      // Refer to the 'mystring.c' for the function implementation  

    } 
    
    
       // Polynomial Evaluation
    if (choice == 'e' || choice == 'E'){
      puts("You chose Polynomial Evaluation ...\n");

      /* TO DO: MODIFY THIS PART FOR THE ACTIVITY */

      // Provide the implementation for the polynomial evaluation
      // Refer to the 'mypolynomial.h' for the usable function prototypes
      // Refer to the 'mypolynomial.c' for the function implementation

    }


    // Basic Statistics
    else if (choice == 'f' || choice == 'F'){
      puts("You chose Basic Statistics ...\n");

      /* TO DO: MODIFY THIS PART FOR THE ACTIVITY */

      // Provide the implementation for the basic statistics
      // Refer to the 'mystatistics.h' for the usable function prototypes
      // Refer to the 'mystatistics.c' for the function implementation


    } 



    // Basic Matrix Operations
    else if (choice == 'g' || choice == 'G'){
      puts("You chose Matrix Operations ...\n");

      /* TO DO: MODIFY THIS PART FOR THE ACTIVITY */

      // Provide the implementation for the matrix evaluation
      // Refer to the 'mymatrix.h' for the usable function prototypes
      // Refer to the 'mymatrix.c' for the function implementation


    } 
    
    
    // Basic Calculator
    else if (choice == 'h' || choice == 'H'){
      puts("You chose Basic Calculator ...\n");

      /* DO NOT MODIFY */

      // Provide the implementation for the Basic Calculator evaluation
      // Refer to the 'basiccalculator.h' for the usable function prototype
      // Modify 'basiccalculator.c' for the function implementation
      calculator();

    } 


    else if (choice =='q' || choice =='Q'){
      puts("Exiting now...");
      break;
    }


    else
    {
      puts("\nInvalid Input... Please try again! (Type 'q' or 'Q' to quit)");
    }

    getchar(); // Absorb the extra new line char

  } // END MAIN MENU WHILE-LOOP

  return EXIT_SUCCESS;
} // END MAIN
