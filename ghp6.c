#include <stdio.h>
#define PI 3.14159265358979323846

/*
 * PURPOSE
 * a program that calculates and displays the volume of a cone
 * formula:  (pi * height * radius^2) / 3  
 * 
 * INPUTS
 * - height
 * - radius
 * 
 * OUTPUTS
 * - volume
 * 
 * ALGORITHM
 * 0 - Declare variables
 * 1 - Greet user
 * 2 - Prompt for height
 * 3 - Record height
 * 4 - Prompt for radius
 * 5 - Record radius
 * 6 - Set variable to the calculation for volume
 * 7 - Display the following:
 *   a. Height
 *   b. Radius
 *   c. Formula
 *   d. Formula with values
 *   e. Volume
 * 8 - Terminate
 * 
*/

int main(void) {
	
	// Step 0
	double height = 0.0;
	double radius = 0.0;
	double volume = 0.0;
	
	// Step 1
	printf("This program will calculate and display the volume of a cone,\n");
	printf("given the cone's height and radius of the base.\n\n");
	
	// Step 2
	printf("Height: ");
	
	// Step 3
	scanf("%lf", &height);
	//printf("%lf\n", height);
	
	// Step 4
	printf("Radius: ");
	
	// Step 5
	scanf("%lf", &radius);
	//printf("%lf\n", radius);
	
	// Step 6
	// Formula: (pi * height * radius^2) / 3  
	volume = (PI * height * (radius * radius)) / 3.0;
	
	// Step 7
	printf("\n\n");
	printf("Height: %lf inches\n", height);
	printf("Radius: %lf inches\n", radius);
	printf("Formula: (pi x height x radius^2 = volume\n");
	printf("Formula w/ values: (pi x %lf x %lf^2) / 3 = volume\n", height, radius);
	printf("\n");
	printf("Volume = %lf cubic inches\n", volume);

	// Step 8
	printf("\n\n");
	return 0;
	
};
