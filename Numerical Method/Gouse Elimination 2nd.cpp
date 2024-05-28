#include <bits/stdc++.h>
using namespace std;

int main() {
    int m,n;
    cout<<"Enter Unknown Variable of the equations : ";
    cin>>n;
    cout<<"Number of Equation : ";
    cin>>m;
    n+=1;
    double mat[m][n];

    // Input coefficients from the user
    cout<<"Enter the coefficients of the linear equations:\n";
    for (int i = 0; i < m; i++) {
        printf("Equation %d: ", i+1);
        for (int j = 0; j <n; j++) {
            cin>>mat[i][j];
        }
    }
    // Forward Elimination
    for (int k = 0; k < m-1; k++) {
        for (int i = k+1; i < n; i++) {
            float factor = mat[i][k] / mat[k][k];
            for (int j = k; j <n; j++) {
                mat[i][j] -= factor * mat[k][j];
            }
        }
    }
    // Back Substitution
    float sol[m];
    for (int i = n; i >= 0; i--) {
        sol[i] = mat[i][m];
        for (int j = i+1; j < m; j++) {
            sol[i] -= mat[i][j] * sol[j];
        }
        sol[i] /= mat[i][i];
    }

    printf("\nSolution:\n");
    for (int i = 0; i < m; i++) {
        cout<<"X"<<i+1<<" = "<<setprecision(4)<< sol[i]<<endl;
    }
}
