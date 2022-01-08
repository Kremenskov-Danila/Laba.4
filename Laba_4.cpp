//Task 1.

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int n, i;
    float a[50], sum = 0;
    cout << "Введите размерность:\n";
    cin >> n;
    cout << "Введите массив:\n";
    cin >> a[n];
        for (i = 0; i < n; i++)
            cin >> a[i];
    for (i = 0; i < n; i++)
        sum += a[i];
    cout << "Среднее арифметическое:\n" << sum / n << endl;
    system("pause");
    return 0;
}

//Task 2.

#include <iostream>
#include <cstdlib>

using namespace std;

int N = 8;

int main()
{
    setlocale(LC_ALL, "rus");
    int mass[8], max, min;

    std::numeric_limits<int >::max();

    cout << "Элементы: |";
    for (int r = 0; r < 8; r++)
    {
        mass[r] = rand() % 99;
        cout << mass[r] << "|";
    }
    cout << endl;

    max = mass[0];
    min = mass[0];
    for (int r = 1; r < N; r++)
    {
        if (max < mass[r]) max = mass[r];
        if (min > mass[r]) min = mass[r];
    }
    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;

    return 0;
}

//Task 3.

#include <iostream>
#include <stdlib.h>
using namespace std;
void mas_out(int* a, int size);
void mas_in(int* a, int size);
int main(int argc, char* argv[])
{
    int* mas;
    int size;
    cout << "Enter size: ";
    cin >> size;
    mas = (int*)malloc(size);
    mas_in(mas, size);
    mas_out(mas, size);
    free(mas);
    return 0;
}
void mas_in(int* a, int size)
{
    for (int i = 0; i < size; i++)
        cin >> a[i];
}
void mas_out(int* a, int size)
{
    int max = 0, index = 0;
    max = a[0];
    for (int i = 1; i < size; i++)
    {
        if (a[i] >= max)
        {
            max = a[i];
            index = i;
        }
        //Task 4.

#include <iostream>

        using namespace std;

        setlocale(LC_ALL, "rus");
        int main();
        {
            const int mass[8]{ 4,12,7, 5, 10, 2, 3, 8 };
            cout << "Отсортированный массив: ";
            for (int i = 0; i < 8; ++i)
            {
                cout << mass[i] << " ";
            }
            cout << endl;
        }

        //Task 5.

#include<iostream>

        using namespace std;

        setlocale(LC_ALL, "rus");
        int main();
        {
            const int mass[8]{ 4,12,7, 5, 10, 2, 3, 8 };
            int k, l;
            int removed_element;
            for (int i = 0; i < 10; i++)
            {
                if (mass[i] < 0)
                {
                    removed_element = mass[i];
                    std::cout << "True" << endl;
                    break;
                }
                else
                    l = 0;
                removed_element = l;
                std::cout << "False" << endl;
            }
            for (int i = 0; i < 10; i++)
                cout << mass[i] << " " << endl;
        }

        //Task 6.

#include <iostream>
#include <string>

        int main();
        {
            setlocale(LC_ALL, "russian");
            std::string str("мировые державы хотят мира");
            std::string findstr = "мир";
            std::string replacestr = "ааа";
            std::string::size_type index;
            while ((index = str.find(findstr)) != std::string::npos)
                str.replace(index, findstr.size(), replacestr);
            std::cout << str << std::endl;
        }

        //Task 7.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string>
#include <iostream>
        using namespace std;

        int main();
        {
            setlocale(LC_ALL, "Russian");
            char str[500];
            cout << "Введите строку: ";
            cin.getline(str, sizeof(str));

            char delv[10];
            cout << "Введите разделитель: ";
            cin.getline(delv, sizeof(delv));

            char* token = strtok(str, delv);
            while (token != NULL)
            {
                printf("%s\n", token);
                token = strtok(NULL, delv);
            }
        }

        //Task 8.

        int main();
        {
            std::string s1 = "hello";
            std::string s2 = " world";

            std::cout << s1 + s2;
        }
    }