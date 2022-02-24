
#include <iostream>
using namespace std;

int main()
{
	int row, col;
	// nhập số dòng, cột
	cout << "Nhap so dong: ";
	cin >> row;
	cout << "Nhap so cot: ";
	cin >> col;

	// cấp phát động
	int **arr = new int*[row]; // Cấp phát vùng nhớ cho ROW con trỏ kiểu (int *): dòng
	for (int i = 0; i < row; i++)
	{
		arr[i] = new int[col]; // Mỗi con trỏ kiểu (int *) sẽ quản lý COL phần tử kiểu int: cột
	}

	// nhập mảng 2 chiều
	cout << "Nhap mang:" << endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << "a[" << i << "][" << j << "] = ";
			cin >> arr[i][j];
		}
	}

	// xuất mảng 2 chiều
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	// Giải phóng vùng nhớ cho từng phần tử mảng
	for (int i = 0; i < row; i++)
	{
		delete[] arr[i];
	}

	// Giải phóng cho mảng
	delete[] arr;

	system("pause");
	return 0;
}