// Write a C Program to rotate a Matrix by 90 Degree in Clockwise Direction.
#include <stdio.h> 
#define N 4 
void rotate90Clockwise(int a[N][N]) 
{ 
    for (int i = 0; i < N / 2; i++) { 
        for (int j = i; j < N - i - 1; j++) { 
            int temp = a[i][j]; 
            a[i][j] = a[N - 1 - j][i]; 
            a[N - 1 - j][i] = a[N - 1 - i][N - 1 - j]; 
            a[N - 1 - i][N - 1 - j] = a[j][N - 1 - i]; 
            a[j][N - 1 - i] = temp; 
        } 
    } 
} 
void printMatrix(int arr[N][N]) 
{ 
    for (int i = 0; i < N; i++) { 
        for (int j = 0; j < N; j++) 
            printf("%d ",arr[i][j] ); 
        printf("\n"); 
    } 
} 
int main() 
{ 
    int arr[N][N] = { { 1, 2, 3, 4 }, 
                      { 5, 6, 7, 8 }, 
                      { 9, 10, 11, 12 }, 
                      { 13, 14, 15, 16 } }; 
    rotate90Clockwise(arr); 
    printMatrix(arr); 
    return 0; 
}