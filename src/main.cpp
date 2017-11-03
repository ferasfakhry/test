#include <stdio.h>
#include <stdlib.h>  
#include <matrix.h>
#include <windows.h>


int main(int argc, char* argv[])
{

//one matrix = new matrix();

//one.matrix();
//one.print();

matrix four(2,3,1,1);

four.inverse();


	double x = 2;
matrix one(x);
matrix two(x);

matrix three(2,2,2,2);
three.multiply(4.);

three.multiply(one);



double test = one.element(0,0);
double det = three.determinant();


printf("%f\n",test);
printf("%f\n",det);
return 0;
}