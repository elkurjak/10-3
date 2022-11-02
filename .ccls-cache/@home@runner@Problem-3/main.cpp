#include <iostream>
#include <array>

int count = 0;

using namespace std;

void arraysort(int myArray[], int ARRAY_SIZE, int newMAX, int newArraySize);
int main() {
  int newMAX, newArraySize;
  int N;
  cout << "Enter a size: ";
  cin>>N;

  const int ARRAY_SIZE = N;
  int myArray[ARRAY_SIZE];
  int myNewArray[] = {0};

  cout << "Enter " << N << " integers: ";
  for(int i = 0; i < ARRAY_SIZE; i ++){
    cin >> myArray[i];
  }
  arraysort(myArray,ARRAY_SIZE,newMAX,newArraySize);
}

void arraysort(int myArray[], int ARRAY_SIZE, int newMAX, int newArraySize)
{
  for(int i = 0; i< ARRAY_SIZE; i++){
    if (i == 0){
      newMAX = myArray[0];
      cout << newMAX << " ";
    }
    else if(newMAX < myArray[i] && i >0 ){
      newMAX = myArray[i];
      cout<<newMAX<< " ";
      count++;
    }
  }
  cout << "\nThe new array size is: " << count + 1 << endl;
}