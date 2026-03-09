#include <iostream> 
#include "Wektor3D.h"
using namespace std;

int main(int argc, char **argv){
    Wektor3D v1(2, 2, 2);
    Wektor3D v2(1, 1, 1);
    std::cout << "Wektor1: " << v1 << std::endl;
    std::cout << "Wektor2: " << v2 << std::endl;

    std::cout << "v1 + v2: " << v1 + v2 << std::endl;
    std::cout << "v1 - v2: " << v1 - v2 << std::endl;
    std::cout << "v1 * 2: " << v1 * 2 << std::endl;
    std::cout << "2*v1 " << 2*v1 << std::endl;
    std::cout << "" << (v1 * v2) << std::endl;
    std::cout << "v1[0] == (v2[0] = 2 * v2[0]): " << (v1[0] == (v2[0] = 2 * v2[0])) << std::endl;
    std::cout << "v1[0] != (v2[0] = 2 * v2[0]): " << (v1[0] != (v2[0] = 2 * v2[0])) << std::endl;
    
    std::cout << "Wektor2: " << v2 << std::endl;
    std::cout << "-v2: " << -v2 << std::endl;
    return 0;
}

//OUTPUT:
// Wektor1: {2, 2, 2}
// Wektor2: {1, 1, 1}
// v1 + v2: {3, 3, 3}
// v1 - v2: {1, 1, 1}
// v1 * 2: {4, 4, 4}
// 2*v1 {4, 4, 4}
// {2, 2, 2}
// 
// v1[0] == (v2[0] = 2 * v2[0]): 1
// v1[0] != (v2[0] = 2 * v2[0]): 1
// 
// Wektor2: {4, 1, 1}
// -v2: {-4, -1, -1}