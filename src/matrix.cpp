#include <matrix.h>
#include <stdio.h>
#include <stdlib.h> 

matrix::matrix()
{
	/*
		This constructor (the default constructor) creates a matrix with all zero elements
	*/


	e00 = e01 = e10 = e11 = 0;

	printf("%f  %f\n",e00, e01 );
	printf("%f  %f\n",e10, e11 );
}

matrix::matrix(double a)
{
	/*
		This constructor should create a diagonal matrix with the diagonal elements equal to a and
		the other elements equal to zero.

		TO DO
	*/
		 e00 =a;
		 e11 =a;
		 e01 =0;
		 e10 =0;
		printf("%f  %f\n",e00, e01 );
	    printf("%f  %f\n",e10, e11 );
	    printf("\n");

}

matrix::matrix(double a, double b, double c, double d)
{
	/*
		This constructor should set the elements the values of the elements using the
		parameters a,b,c,d

		TO DO
	*/
		 e00 =a;
		 e01 =b;
		 e10 =c;
		 e11 =d;

		printf("%f  %f\n",e00, e01 );
	    printf("%f  %f\n",e10, e11 );
	    printf("\n");

}

matrix::matrix(const matrix& a)
{
	/*
		This is the copy constructor: it takes a matrix and makes a new one with the same element values
	*/

	e00 = a.e00;
	e01 = a.e01;
	e10 = a.e10;
	e11 = a.e11;
}

matrix& matrix::add(matrix& a)
{
	/*
		The add member function adds the elements of matrix 'a' to this matrix. 
	*/

	e00 = e00 + a.e00;
	e01 = e01 + a.e01;
	e10 = e10 + a.e10;
	e11 = e11 + a.e11;

	return *this;
}

matrix& matrix::multiply(double x)
{
//  // TO DO: Multiply the matrix by a scalar
 e00 *=x;
 e01 *=x;
 e10 *=x;
 e11  *=x;
printf("%f  %f\n",e00, e01 );
	printf("%f  %f\n",e10, e11 );
	printf("\n");


}
matrix& matrix::multiply(matrix& m)  // TO DO: Multiply the matrix by another matrix
{
    e00 = e00 * m.e00 + e10 * e01;
	e01 = e01 * m.e10 + e11 * e11;
	e10 = e10 * m.e10 + e10 * e01;
	e11 = e11 * m.e11 + e01 * e10;

	printf("%f  %f\n",e00, e01 );
	printf("%f  %f\n",e10, e11 );
	printf("\n");


}




double matrix::element(int col,int row)
	 // TO DO: return the specified element using its column and row number
	{
		double one = e00;
		double two = e01;
		double three = e10;
		double four = e11;
		if(col==0 && row==0)
			return one;
		if(col==1 && row==0)
			return two;
		if(col==0 && row==1)
			return three;
		if(col==1 && row==1)
			return four;

	}
double matrix::determinant()
	 // TO DO: return the determinant of the matrix
{
double det=((e00*e11)-(e10*e01));
return det;
}
	
matrix& matrix::inverse() // TO DO: return the inverse of the matrixs
{
	double det=((e00*e11)-(e10*e01));
double one = e00/det;
double two = e01/det;
double three =e10/det;
double four = e11/det;
	printf("%f  %f\n",one, three );
	printf("%f  %f\n",two, four );
	printf("\n");

}

void print()
{

	//printf("%d  %d\n",e00, e01 );
 //   printf("%d  %d\n",e10, e11 );
}