#include <iostream>
using namespace std;

bool connectedPath(string maze[], int nRows, int nCols, int sr, int sc, int er, int ec) 
{
if (er==sr && ec==er) return true;
}

int main() {
  string simpleMaze[]={"XXX","X.X","XXX"};
  cout<<connectedPath(simpleMaze, 3,3, 1,1, 1,1);
}