#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char name[50];
    cin.get(name, 50);
    char temp;
    int i, j;
    int n = strlen(name);
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (name[i] > name[j])
		            {
		                temp = name[i];
		                name[i] = name[j];
		                name[j] = temp;
		            }
        	}
		}

    cout << "name in alphabetical order :" << name;
    return 0;
}
