#include <iostream>
#include <string.h>
using namespace std;
char mat[50][50];
//function to create edge
void edge(char u, char v)
{ //function to add edge into the matrix
    mat[u][v] = 1;
}
int main()
{
    int i, j;
    char name[50];
    //creating the adjacency matrix
    cin.get(name, 50);
    for (i = 0; i < sizeof(name); i++)
    {
        for (j = 1; j < sizeof(name) - 1; j++)
        {
            if (name[i] == name[j])
            {
                edge(name[i], name[j])
            }
        }
    }
    for (j = 1; j < sizeof(name) - 1; j++)
    {
        edge(name[i], name[i + 1]);
        edge(name[i], name[i - 1]);
    }
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
}