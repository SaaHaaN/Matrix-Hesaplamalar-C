/**
 * @file Şahan Aytekin Proje
 * @description Matrixler ve Vektörler üzerinde yapan işlemleri içeren fonksiyonlar
 * @assignment 1. Proje Ödevi
 * @date 04.12.2022
 * @author Şahan Aytekin sahan.aytekin@stu.fsm.edu.tr
 */

#include <stdio.h>
#include <stdlib.h>
#include "matrixLib.h"
#include <time.h>

int main(int argc, char *argv[])
{
    int seed = atoi(argv[1]);

    if (argc > 2)
    {
        printf("Cok sayida arguman girildi...\n");
        return 1;
    }
    else if (argc < 2)
    {
        printf("Yetersiz sayida arguman girildi...\n");
        return 1;
    }
    else if (argc = 2)
    {
        printf("Seed %d olarak belirlendi...\n", seed);
    }

    // Random seed ile Vektör ve Matrixlerin Oluşturulması ve sonradan ekrana yazdırması...
    float *vec1 = returnVector(5);
    fillVector(vec1, 5, seed);

    printf("1. Vektor\n");
    printVector(vec1, 5);

    float *vec2 = returnVector(5);
    fillVector(vec2, 5, seed);

    printf("2. Vektor\n");
    printVector(vec2, 5);

    float **mat1 = returnMatrix(2, 2);
    fillMatrix(mat1, 2, 2, seed);

    printf("1. Matrix\n");
    printMatrix(mat1, 2, 2);

    float **mat2 = returnMatrix(3, 2);
    fillMatrix(mat2, 3, 2, seed);

    printf("2. Matrix\n");
    printMatrix(mat2, 3, 2);

    //------------------------------------------------------------------------------------------------------------------------------

    printf("-------------------------------------------------------\n");

    // Vektörlerin Ortalamsı...
    printf("Vec1 Ortalamasi %.2f\n", mean(vec1, 5));
    printf("Vec2 Ortalamasi %.2f\n", mean(vec2, 5));

    free(vec1);
    free(vec2);

    //------------------------------------------------------------------------------------------------------------------------------

    printf("-------------------------------------------------------\n");

    float *kov1 = returnVector(4);
    fillVector(kov1, 4, seed);
    printVector(kov1, 4);

    float *kov2 = returnVector(4);
    fillVector(kov2, 4, seed);
    printVector(kov2, 4);

    printf("1. Vektor\n");
    printVector(kov1, 4);

    printf("2. Vektor\n");
    printVector(kov2, 4);

    // Korelasyon Hesabı...
    printf("Korelasyon: %.2f\n", correlation(kov1, kov2, 4));

    // Kovaryans Hesabı...
    printf("Kovaryans: %.2f\n", covariance(kov1, kov2, 4));

    free(kov1);
    free(kov2);

    //------------------------------------------------------------------------------------------------------------------------------

    printf("-------------------------------------------------------\n");
    // 2 Matrisin Çarpımı...

    float **carpimMatrix1 = returnMatrix(3, 2);
    fillMatrix(carpimMatrix1, 3, 2, seed);

    float **carpimMatrix2 = returnMatrix(2, 3);
    fillMatrix(carpimMatrix2, 2, 3, seed);

    printf("1. Matrix\n");
    printMatrix(carpimMatrix1, 3, 2);

    printf("2. Matrix\n");
    printMatrix(carpimMatrix2, 2, 3);

    float **matrisCapimiOlusanMatris = matrixMultiplication(carpimMatrix1, carpimMatrix2, 3, 2, 2, 3);
    printf("Matrix Carpimi\n");
    printMatrix(matrisCapimiOlusanMatris, 3, 3);

    freeMatrix(carpimMatrix1, 3);
    freeMatrix(carpimMatrix2, 2);

    //------------------------------------------------------------------------------------------------------------------------------

    printf("-------------------------------------------------------\n");

    // 1.Matrixin Transpozu
    printf("1.Matrix'in Tranpozu\n");
    float **mat1Transpoz = matrixTranspose(mat1, 2, 2);
    printMatrix(mat1Transpoz, 2, 2);

    // 2.Matrixin Transpozu
    printf("2.Matrix'in Tranpozu\n");
    float **mat2Transpoz = matrixTranspose(mat2, 3, 2);
    printMatrix(mat2Transpoz, 2, 3);

    //------------------------------------------------------------------------------------------------------------------------------

    printf("-------------------------------------------------------\n");

    // 1.Matrisin Satırlarının ortalaması..
    printf("1.Matrixin satirlarinin ortalmasi\n");
    printVector(rowMeans(mat1, 2, 2), 2);

    // 2.Matrisin Satırlarının ortalaması...
    printf("2.Matrix satirlarinin ortalmasi\n");
    printVector(rowMeans(mat2, 3, 2), 3);

    //------------------------------------------------------------------------------------------------------------------------------

    printf("-------------------------------------------------------\n");

    // 1. Matrisin Sütunlarının ortalaması...
    printf("1.Matrixin sutunlarinin ortalmasi\n");
    printVector(columnMeans(mat1, 2, 2), 2);

    // 2. Matrisin Sütunlarının ortalaması...
    printf("2.Matrixin sutunlarinin ortalmasi\n");
    printVector(columnMeans(mat2, 3, 2), 2);

    freeMatrix(mat1, 2);
    freeMatrix(mat2, 3);

    //------------------------------------------------------------------------------------------------------------------------------

    printf("-------------------------------------------------------\n");
    // Kovaryans Matrisin Hesabı...

    float **kM = returnMatrix(3, 2);
    fillMatrix(kM, 3, 2, seed);

    printf("Matris\n");
    printMatrix(kM, 3, 2);

    float **kovaryansMatrix = covarianceMatrix(kM, 3, 2);
    printf("Kovaryans Matrix\n");
    printMatrix(kovaryansMatrix, 3, 3);

    freeMatrix(kM, 3);

    //------------------------------------------------------------------------------------------------------------------------------

    printf("-------------------------------------------------------\n");
    // Kare matrisin sarrus yöntemi (yana doğru uzatma) ile determinant hesabı...
    float **det = returnMatrix(3, 3);
    fillMatrix(det, 3, 3, seed);

    printf("Matris\n");
    printMatrix(det, 3, 3);

    printf("Detarminant: %.2f\n", determinant(det, 3));

    freeMatrix(det, 3);

    return 0;
}