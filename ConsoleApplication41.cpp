#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


std::vector<int> Shisla { 1 ,1 ,2 ,5, 6, 1, 2, 4 };
auto iter1 = Shisla.begin();
int vrem;

int main()
{
    setlocale(LC_ALL, "Russian");

    std::cout << "_______________________________________________________________________\n";
    std::cout << "Ваши числа изначально.\n";
    for (int n : Shisla)
    {
        std::cout << n << std::endl;
    }


    std::sort(Shisla.begin(), Shisla.end());
    iter1 = Shisla.begin();

    std::cout << "_______________________________________________________________________\n";
    std::cout << "Ваши числа отсортированные.\n";
    for (int n : Shisla)
    {
        std::cout << n << std::endl;
    }
    

  if (Shisla.empty())
    {
        std::cout << "Вектор пуст.\n";
    }
    else
    {
        vrem = *iter1;
        iter1++;
        while (iter1 != Shisla.end())
        {
            if (*iter1 == vrem)
            {
               iter1=Shisla.erase(iter1);
           

            }
            else
            {
                vrem = *iter1;
                iter1++;
            }
           
        }//while (iter1 != Shisla.end())

    }



    std::cout << "_______________________________________________________________________\n";
    std::cout << "Ваши числа без дупликатов.\n";

    for (int n : Shisla)
    {
        std::cout << n << std::endl;
    }
}