#include <iostream>
#include <dlib/matrix.h>

using namespace dlib;
int main(){

//create a matrix sized at compile time
matrix<double,3,3> y;
std::cout << y << std::endl;

//create dynamically sized matrix objects. pass the matrix dimensions to the constructor
matrix<double> m(3,2);
printf("create dynamically sized matrix objects \n");
std::cout << m << std::endl;

//change the size of this matrix
m.set_size(6,6);
std::cout << m << std::endl;

//initialize matrix values with a comma operator
m.set_size(3,3);
m = 54.2,7.4,12.1,
    1,2,3,
    5.9,0.05,1;
std::cout << m << std::endl;

double data[] = {1,2,3,4,5,6};
auto aa = dlib::mat(data, 2,3); // create matrix with size 2x3
std::cout << aa << std::endl;

//access matrix elements with the () operator to modify or get a particular value, 
m(1,2) = 3;
std::cout << m << std::endl;

//initialize a matrix with values such as identity matrix, 1s, or random values
auto a = dlib::identity_matrix<double>(3);
auto b = ones_matrix<double>(3,4);
auto cc = randm(3,4); // matrix with random values with size 3x3
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << cc << std::endl;

auto c = a + b;
std::cout << c << std::endl;

auto d  = dlib::pointwise_multiply(a, b);
std::cout << d << std::endl;

auto e = a * b; // real matrix multiplication
std::cout << e << std::endl;

printf("Transpose a matrix");
auto ccc= trans(c);
std::cout << ccc << std::endl;

auto ab = (a+5);
std::cout << ab << std::endl;

// takes first row of matrix
std::cout<<rowm(c,0)<<std::endl;


// takes first column
std::cout<<colm(c,1)<<std::endl;

//takes first two rows
std::cout<<dlib::rowm(c,dlib::range(0,1))<<std::endl;


// takes a rectangular part from center
auto temp = dlib::subm(c, range(1,2), range(1,2));
std::cout<<temp<<std::endl;

/*
dlib::set_subm(b,range(0,1), range(0,1)) = 7; // initialize part of the matrix
dlib::set_subm(b,range(0,1), range(0,1)) += 7; // add a value to the part of the matrix

//Broadcasting in the Dlib library can be modeled with  set_rowm(), set_colm(), and set_subm() 
dlib::set_subm(c,range(1,2), range(1,2)) = 7; // initialize part of the matrix

*/
return 0;
}