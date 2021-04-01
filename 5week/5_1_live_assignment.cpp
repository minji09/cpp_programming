#include <iostream>
using namespace std;
void init_array(int *array, int n);
int sum_array1(int *array, int n);
void sum_array2(int *array, int n, int *output);
void sum_array3(int *array, int n, int &output);

int main(int argc, char *argv[]){
    
    int n = atoi(argv[1]);

    n = (n<1)? 1 : n;
    
    n = (n>10)? 10 : n;


    int a[10];
    if (!a) {cout << "allocation failed.\n"; return -1;}
    int s;

    init_array(a,n);
    for (int i=0; i<n; i++) cout<<a[i]<< " ";

    s = sum_array1(a,n);
    cout << endl << s << endl;

    sum_array2(a,n, &s);
    cout << s << endl;

    sum_array3(a,n, s);
    cout << s << endl;
    return 0;
}

void init_array(int *array, int n)
{   srand(time(NULL));
    for(int i = 0;i< n;i++)
    {
        array[i] = rand()%100;
    }
}

int sum_array1(int *array, int n)
{
    int temp = 0;
    for(int i = 0;i<n;i++)
    {
        temp += array[i];
    }

    return temp;
}

void sum_array2(int *array, int n, int *output)
{
    *output = sum_array1(array, n);
}

void sum_array3(int *array, int n, int &output)
{
    output = sum_array1(array, n);
}

