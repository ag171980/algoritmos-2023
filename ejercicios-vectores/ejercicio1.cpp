#include <iostream>

using namespace std;
int buscarMenor(int vec[], int &len);
int main()
{

    int vec[10] = {20, 19, 111, -2, 55, 901, 12, 5, 129, 1};
    int len = 10;
    int menor = buscarMenor(vec, len);

    cout << "El menor es: " << menor << endl;
    return 0;
}
int buscarMenor(int vec[], int &len)
{
    int menor;
    for (int i = 0; i < len; i++)
    {
        if (i == 0)
        {
            menor = vec[i];
        }

        if (vec[i] < menor)
        {
            menor = vec[i];
        }
    }
    return menor;
}