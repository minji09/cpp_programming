#include <iostream>
using namespace std;

//행 : r/ 열 : c
int main()
{
	int c, r;
	cin >> r >> c;
	int **mat1;
    int **mat2;
    int **mat_plus;
	mat1 = new int*[r];
    mat2 = new int*[r];
    mat_plus = new int*[r];
	for (int i = 0; i < r; i++){
		mat1[i] = new int[c];
        mat2[i] = new int[c];
        mat_plus[i] = new int[c];
    }

	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cin >> mat1[i][j] ;
		}
    }
    for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cin >> mat2[i][j] ;
		}
	}

    for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			mat_plus[i][j] = mat1[i][j]+mat2[i][j];
		}
	}
    for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << mat_plus[i][j] << "endl";
		}
        cout <<endl;
	}



	for (int i = 0; i < r; i++){
		delete [] mat1[i];
        delete [] mat2[i];
        delete [] mat_plus[i];
    }
	delete [] mat1;
    delete [] mat2;
    delete [] mat_plus;
    
}