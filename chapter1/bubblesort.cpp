#include<cstdio>
#include<cstdlib>

using namespace std;

// ascending order
void bubblesort1A(int A[]; int n)
{
    bool sorted = false;
    int tmp;
    while (!sorted){
        sorted = true;
        for (int i=0; i<n; i++){
            if (A[i]>A[i+1]){
                tmp = A[i+1];
                A[i+1] = A[i];
                A[i] = tmp;
                sorted = false;
            }
        }
        n--;
    }

}
