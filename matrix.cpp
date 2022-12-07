#include "matrix.h"
#include <stdexcept>




Matrix::~Matrix(){clear();}
Matrix::Matrix(const Matrix& rhs){copy(rhs);}
Matrix& Matrix::operator=(const Matrix& rhs){
    if(this != &rhs){
        clear();
        copy(rhs);
    }
    return *this;
}

Matrix::copy(const Matrix& rhs){}

Matrix::clear(){}