#include<iostream>
int bin(int* arr, int s, int key);

int R_bin(int* arr, int i, int j, int key);


int main()
{

	const int s = 100;
	int arr[s] = {};
	int a  = 21;
	for(int i = 0; i < s; ++i)
	{
		arr[i] = a;
		++a;
	}
	int i = 0;
	int j = s -1;
	int key = 0;
 	std::cout << "enter to num 1 ->> 100" << std::endl;;
        std::cin >> key;	
	std::cout <<R_bin(arr, i, j, key) << std::endl;

}

int bin(int* arr, const int s, int key)
{
	int i = 0;
	int mid = 0;
	int j = s - 1;
	while(i < j)
	{
		mid = (i + j) / 2;
	        if(key == arr[mid])
		{
			return mid;
		}	
		if(arr[mid] < key)
		{
			++mid;
			i = mid;
			
		}else if(arr[mid] > key)
		{
			--mid;
			j = mid;
		}	
	}
  return -1;
}


int R_bin(int* arr, int i, int j, int key)
{
	int mid = (i + j) / 2;
	if(i > j)
	{
		return -1;
	}
	if(arr[mid] == key)
	{
		return mid;
	}
	if(arr[mid] < key)
	{
		return R_bin(arr, mid + 1, j, key); 
	}
	if(arr[mid] > key)
	{
		return R_bin(arr, i, mid -1, key);
	}
	return -1;
}
