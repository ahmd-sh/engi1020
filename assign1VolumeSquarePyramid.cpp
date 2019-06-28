/*!
 * @file      assign1.cpp
 * @brief     Header file for assignment 1 in ENGI 1020 (2018-19S)
 *
 * @author    Lori Hogan <lehogan@mun.ca>
 * @copyright (c) 2018-2019 Lori Hogan. All rights reserved.
 * @license   Apache License, Version 2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may not
 * use this file except in compliance with the License.  You may obtain a copy
 * of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
 * License for the specific language governing permissions and limitations
 * under the License.
 */

/*
 * First, we'll declare the functions that you will implement.
 *
 * In future assignments we will put declarations like this in a separate
 * header file, but for now we'll just put everything in one file.
 */

/**
 * Calculate the volume for a right square prism given its dimensions in cm.
 *
 * @param   a     the length of the side of the base [cm] @pre > 0
 * @param   h     the height of the prism [cm] @pre > 0
 *
 * @returns       the prism volume [cm^3]
 */
double squarePrismVolume(double a, double h);

/**
 * Calculate the volume for a square pyramid given its dimensions in cm.
 *
 * @param   a     the length of the side of the base [cm] @pre > 0
 * @param   h     the height of the prism [cm] @pre > 0
 *
 * @returns       the pyramid volume [cm^3]
 */
double squarePyramidVolume(double a, double h);


/*
 * Include the iostream library so that we can use cout in our main function:
 */
#include <iostream>
#include <cmath>
using namespace std;

/*
 * It's not required to write a main() function here, but it's a very good idea
 * to write tests before writing the code being tested. This helps you keep an
 * objective perspective on how well your code works.
 */
int main()
{
	// Here's an example of one test to get you started:
	cout
		<< "With dimensions of a = 6cm and h = 10.5cm...\n"
		<< "Calling squarePrismVolume(6.0, 10.5) returns: "
		<< squarePrismVolume(6.0, 10.5)
		<< " (should be 378)\n"
		<< "Calling squarePyramidVolume(6.0, 10.5) returns: "
		<< squarePyramidVolume(6.0, 10.5)
		<< " (should be 126)\n"
		;

	// Now I'd suggest that you write some more tests!
  cout
		<< "With dimensions of a = 9cm and h = 23.5cm...\n"
		<< "Calling squarePrismVolume(9.0, 23.5) returns: "
		<< squarePrismVolume(9.0, 23.5)
		<< " (should be 1903.5)\n"
		<< "Calling squarePyramidVolume(9.0, 23.5) returns: "
		<< squarePyramidVolume(9.0, 23.5)
		<< " (should be 634.5)\n"
		;

	return 0;
}

/*
 * Finally, write your function definitions here.
 */

/*
 * Function to calculate and return square prism volume:
 * volume of square prism = a * a * h
 */
double squarePrismVolume(double a, double h) {
  /* 
   * pow(base, exponent) is a function under the cmath library.
   * It returns the value of base raised to the exponent (base^exponent).
   */
  return(pow(a, 2) * h);
}

/*
 * Function to calculate and return square pyramid volume:
 * volume of square pyramid = (a * a * h) / 3
 */
double squarePyramidVolume(double a, double h) {
  return( (pow(a, 2) * h) / 3 );
}
