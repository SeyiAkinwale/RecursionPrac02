#include <iostream>
using namespace std;

bool connectedPath(string maze[], int nRows, int nCols, int sr, int sc, int er, int ec) 
{
if (er==sr && ec==er) return true;
  else return false;
}

int main() 
{
  string baseMaze[]={"XXX","X.X","XXX"};
  string threeSpotsRow[]={"XXXXX", "X...X", "XXXXX"};
  cout<<connectedPath(baseMaze, 3,3, 1,1, 1,1)<<endl;
  cout<<connectedPath(threeSpotsRow, 3,5, 1,1, 1,2);
}