#include <fstream>
#include <iostream>
#include <string>
#include <vector>

int main()
{std::ifstream inputStream{"Input.txt"};
 if(!inputStream)
   {std::cout<<"File couldn't be opened for reading :'("; }

 std::vector<std::string> inputVector;
 std::string tempString;
 while(inputStream)
 {inputStream>>tempString;
  inputVector.push_back(tempString);
 }

 //Vector of ints from the vector of strings
 std::vector<int> numbers;
 int tempInt{0};
 for(int i = 0; i < inputVector.size(); i++)
 {tempInt = std::stoi(inputVector.at(i));
  numbers.push_back(tempInt);
 }

 int increased{0};
 int previousNumber{0};
 previousNumber = numbers.at(0);

 for(int i = 1; i < numbers.size(); i++)
 {
	 if(numbers.at(i) > previousNumber)
	 {increased++;}

  previousNumber = numbers.at(i);  
 }

 std::cout<<increased;
 return 0;
}
