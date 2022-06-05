//Inserting element at end
#include <iostream>
using namespace std;


int insertAtEnd (int arr[], int sizeOfArray, int element)
{

  int n = sizeOfArray;
  arr[n - 1] = element;
}

int main ()
{
  int sizeOfArray;
  cout << "Enter size of array";
  cin >> sizeOfArray;

  int arr[sizeOfArray];
  for (int i = 0; i < sizeOfArray - 1; i++)
    {
      cin >> arr[i];
    }

  int element;
  cin >> element;
  insertAtEnd (arr, sizeOfArray, element);

  for (int i = 0; i < sizeOfArray; i++)
    {
      cout << arr[i] << " ";
    }

}
