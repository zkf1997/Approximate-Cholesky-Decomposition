#include <iostream>
#include "approxChol.hpp"
#include "test.h"
#include "conditionNumber.hpp"

#define TOLERANCE 0.01

int main(){

    std::vector<std::vector<double> > matrix{
        {0,1,1,0},
        {1,0,0,1},
        {1,0,0,1},
        {0,1,1,0}};
    std::vector<std::vector<double> > matrix2{
        {0,1,1,1,0},
        {1,0,1,1,1},
        {1,1,0,0,0},
        {1,1,0,0,0},
        {0,1,0,0,0}};
    // SparseMatrix A(matrix);
    // SparseMatrix A(matrix2);
    SparseMatrix A(1000, 5000, 1);
    LLMatOrd llmat = LLMatOrd(A);

    LDLinv ldli = approxChol(llmat);
    // std::cout << ldli << std::endl;

    Tval ratio = ApproxCholValidation(A, ldli, 1e-4);

    return 0;
}