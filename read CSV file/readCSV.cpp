
#include <dlib/matrix.h>

using namespace dlib;

int main(){
matrix<double> data;

std::ifstream file("test.csv");

file >> data;

std::cout << data << std::endl;

return 0;
}

