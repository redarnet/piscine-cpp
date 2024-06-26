#include <iostream>
#include "Array.hpp"


// int main( void )
// {
// 	Array <int>A(10);


// 	A[0] = 10;
// 	std::cout << A.size() << std::endl;
// 	 std::cout  << A[0] << std::endl;
// 	return (0);
// }
#include <iostream>
#include "Array.hpp"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    // // SCOPE
      {
           Array<int> tmp = numbers;
          Array<int> test(tmp);
      }

     for (int i = 0; i < MAX_VAL; i++)
     {
         if (mirror[i] != numbers[i])
         {
             std::cerr << "didn't save the same value!!" << std::endl;
             return 1;
         }
     }
     try
      {
          numbers[-2] = 0;
      }
      catch(const std::exception& e)
      {
          std::cerr << e.what() << '\n';
      }
     try
     {
         numbers[MAX_VAL] = 0;
     }
     catch(const std::exception& e)
     {
         std::cerr << e.what() << '\n';
     }

  for (int i = 0; i < MAX_VAL; i++)
     {
         numbers[i] = rand();
     }
       delete [] mirror;//
    return 0;
}
