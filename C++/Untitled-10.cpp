#include<iostream>
using namespace std;
int matrix[20][20];
int c=0;
void Print(int v) {
   int i, j;
   for(i = 0; i < v; i++) {
      for(j = 0; j < v; j++) {
         cout << vertArr[i][j] << " ";
      }
      cout << endl;
   }
}
void e(int u, int v) {       //function to add edge into the matrix
   vertArr[u][v] = 1;
   vertArr[v][u] = 1;
}
int main()
{
    string name;
    getline (cin,name);
    for(i=0;i<n;i++)
    

}