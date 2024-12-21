#include <iostream>
#include <iomanip>

using namespace std;

//void fullArray(int row, int col, int **arr)
//{
//    for (int i = 0; i < row; i++) {
//
//        arr[i] = new int[col];
//
//        for (int j = 0; j < col; j++) {
//
//            arr[i][j] = -10 + rand() % 21;
//        }
//    }
//}
//
//void outputArray(int row, int col, int** arr)
//{
//    for (int i = 0; i < row; i++) {
//
//        for (int j = 0; j < col; j++) {
//
//            cout << setw(4) << arr[i][j];
//        }
//        cout << endl;
//    }
//}
//
//int countZeroArr(int row, int col, int** arr)
//{
//    int count = 0;
//
//    for (int i = 0; i < row; i++) {
//
//        for (int j = 0; j < col; j++) {
//
//            if (arr[i][j] == 0)
//            {
//                count ++;
//                break;
//            }
//        }
//    }
//
//    return count;
//}
//
//void outputNewArr(int rowsOld, int rowsNew, int columns, int** arr)
//{
//    int** newArray = new int*[rowsNew];
//
//    int index = 0;
//
//    for (int i = 0; i < rowsOld; i++)
//    {
//        bool zero = false;
//        for (int j = 0; j < columns; j++)
//        {
//            if (arr[i][j] == 0) {
//                zero = true;
//                break;
//            }
//        }
//        newArray[index] = new int[rowsNew];
//
//        if (!zero)
//        {
//            newArray[index] = new int[columns];
//            for (int n = 0; n < columns; n++)
//            {
//                newArray[index][n] = arr[i][n];
//            }
//            index++;
//        }
//    }
//
//    cout << endl;
//    cout << endl;
//    cout << endl;
//    outputArray(rowsNew, columns, newArray);
//}
//
//int main()
//{
//    srand(time(0));
//
//    int stolb = 5, lines = 5;
//
//    int** pArr = new int* [stolb];
//
//
//    fullArray(stolb, lines, pArr);
//    outputArray(stolb, lines, pArr);
//    int zero = stolb - countZeroArr(stolb, lines, pArr);
//
//
//    outputNewArr(stolb, zero, lines, pArr);
//
//    int** pArr2 = new int* [stolb];
//
//
//
//    for (int i = 0; i < stolb; i++) {
//
//        delete[] pArr[i];
//
//    }
//
//    delete[] pArr;
//}



void fullArray(int row, int col, int **arr)
{
    for (int i = 0; i < row; i++) {

        arr[i] = new int[col];

        for (int j = 0; j < col; j++) {

            arr[i][j] = -10 + rand() % 21;
        }
    }
}

void outputArray(int row, int col, int** arr)
{
    for (int i = 0; i < row; i++) {

        for (int j = 0; j < col; j++) {

            cout << setw(4) << arr[i][j];
        }
        cout << endl;
    }
}


void swapArr(int row, int col, int** arr)
{

    int** newArr = new int* [col];

    for (int i = 0; i < col; i++) {
        newArr[i] = new int[row];
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            newArr[j][i] = arr[i][j];
        }
    }

    cout << endl;

    outputArray(col, row, newArr);

    for (int i = 0; i < col; i++) {
        delete[] newArr[i];
    }
    delete[] newArr;
}


int main()
{
    srand((time(0)));

    int row = 5, col = 4;

    int** pArr = new int* [row];


    fullArray(row, col, pArr);
    outputArray(row, col, pArr);

    swapArr(row, col, pArr);



    for (int i = 0; i < row; i++) {

        delete[] pArr[i];

    }

    delete[] pArr;
}




