/**
 * @file Şahan Aytekin Proje
 * @description Matrixler ve Vektörler üzerinde yapan işlemleri içeren fonksiyonlar
 * @assignment 1. Proje Ödevi
 * @date 04.12.2022
 * @author Şahan Aytekin sahan.aytekin@stu.fsm.edu.tr
 */

#ifndef MYLIB_H
#define MYLIB_H

float *returnVector(int size);                                                                    // Calısıyor   +Libde+
float **returnMatrix(int row, int col);                                                           // Calısıyor   +Libde+
void freeMatrix(float **mat, int row);                                                            // Calısıyor   +Mainde uygun yerde+
float mean(float *vec, int size);                                                                 // Calısıyor   +Mainde uygun yerde+
float correlation(float *vec, float *vec2, int size);                                             // Calısıyor   +Mainde uygun yerde+
float covariance(float *vec1, float *vec2, int size);                                             // Calısıyor   +Mainde uygun yerde+
float **matrixMultiplication(float **mat1, float **mat2, int row1, int col1, int row2, int col2); // Calısıyor   +Mainde uygun yerde+
float **matrixTranspose(float **mat, int row, int col);                                           // Calısıyor   +Mainde uygun yerde+
float *rowMeans(float **mat, int row, int col);                                                   // Calısıyor   +Mainde uygun yerde+
float *columnMeans(float **mat, int row, int col);                                                // Calısıyor   +Mainde uygun yerde+
float **covarianceMatrix(float **mat, int row, int col);                                          // Calısıyor   +Mainde uygun yerde+
float determinant(float **mat, int row);                                                          // Calısıyor   +Mainde uygun yerde+
void printVector(float *vec, int N);                                                              // Calısıyor   +Mainde uygun yerde+
void printMatrix(float **mat, int row, int col);                                                  // Calısıyor   +Mainde uygun yerde+

void fillVector(float *vec, int size, int seed);          // Calısıyor   +Libde+
void fillMatrix(float **mat, int row, int col, int seed); // Calısıyor   +Libde+

#endif