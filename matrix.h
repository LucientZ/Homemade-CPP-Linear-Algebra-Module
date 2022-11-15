#ifndef MATRIX_H
#define MATRIX_H

class Matrix{
    private:
        unsigned int rows;
        unsigned int cols;

        // Two Dimensional Array containing the numbers in the matrix.
        float** arr;

    public:
        // Constructors
        Matrix();
        Matrix(const Matrix& rhs);
        Matrix& operator=(const Matrix& rhs);
        ~Matrix();

        // Constructor helper methods
        void clear();
        void copy(const Matrix& rhs)
        

};