#include <iostream>
using namespace std;

bool connectedPath(string maze[], int nRows, int nCols, int sr, int sc, int er, int ec) 
{
  if (sr<0 || sr>=nRows || sc<0 || sc>=nCols || er<0 || er >=nRows || ec < 0 || ec>=nCols)
    return false;
  if(maze[sr][sc]=='X' || maze[er][ec]=='X' || maze[sr][sc] =='@')
    return false;
  if (sr==er && sc==ec) return true;

  maze[sr][sc]='@';
  if(connectedPath(maze,nRows,nCols,sr+1,sc,er,ec)||
     connectedPath(maze,nRows,nCols,sr,sc+1,er,ec)||
     connectedPath(maze,nRows,nCols,sr-1,sc,er,ec)||
     connectedPath(maze,nRows,nCols,sr,sc-1,er,ec))
    {return true;}
  return false;
}  

int main() 
{
  string baseMaze[]={"XXX","X.X","XXX"};
  string threeSpotsRow[]={"XXXXX", "X...X", "XXXXX"};
  string maze[10] = {
    "XXXXXXXXXX",
    "X.......@X",
    "XX@X@@.XXX",
    "X..X.X...X",
    "X..X...@.X",
    "X....XXX.X",
    "X@X....XXX",
    "X..XX.XX.X",
    "X...X....X",
    "XXXXXXXXXX"
};

  cout<<connectedPath(baseMaze, 3,3, 1,1, 1,1)<<endl;
  cout<<connectedPath(threeSpotsRow, 3,5, 1,1, 1,2)<<endl;
  cout<<connectedPath(maze, 10,10, 6,4, 1,1);
}