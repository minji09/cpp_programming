#include <iostream>
using namespace std;

//행 : r/ 열 : c
//mat1 : r*c 이고 mat2 : c*k, mat_multiple : r* k

int main()
{
	int c, r, k;
	cin >> r >> c >> k;
	int **mat1;
    int **mat2;
    int **mat_multiple;
	mat1 = new int*[r];
    mat2 = new int*[c];
    mat_multiple = new int*[r];

	for (int i = 0; i < r; i++){
		mat1[i] = new int[c];
        mat_multiple[i] = new int[k];
    }
    for (int i = 0; i<c; i++){
        mat2[i] = new int[k];
    }

	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cin >> mat1[i][j] ;
		}
    }
    for (int i = 0; i < c; i++)
	{
		for (int j = 0; j < k; j++)
		{
			cin >> mat2[i][j] ;
		}
	}
    int sum;
    for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < k; j++)
		{   sum =0;
			for(int z = 0; z < c; z++){
                sum += mat1[i][z] * mat2[z][j];
            }
            mat_multiple[i][j] = sum;
		}
	}
    for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < k; j++)
		{
			cout << mat_multiple[i][j] << " ";
		}
        cout <<endl;
	}



	for (int i = 0; i < r; i++){
		delete [] mat1[i];
        delete [] mat_multiple[i];
    }
    for (int i =0; i<c; i++){
        delete [] mat2[i];
    }
	delete [] mat1;
    delete [] mat2;
    delete [] mat_multiple;
    
}