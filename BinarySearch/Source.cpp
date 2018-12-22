#include<iostream>
#include<vector>

using namespace std;

bool binaryS(int number, vector<int> arreglo, int left, int right)
{
	int middle =(right+left)/ 2;
	int numeros = right - left + 1;
	if (arreglo[middle] == number) 
	{
		return true;
	}
	
	if (numeros >= 1) 
	{
		if (number >= arreglo[middle]) 
		{
			return binaryS(number, arreglo, middle + 1, right);
		}
		else if (number < arreglo[middle]) 
		{
			return binaryS(number, arreglo, left, middle - 1);
		}
	}
	return false;
}

int main() 
{

	vector<int> arreglo;
	for (int x = 12; x <=3213; x++) 
	{
		arreglo.push_back(x);
	}
	cout << endl;
	cout << binaryS(1223, arreglo, 0, arreglo.size() - 1)<<endl;

	system("pause");
}