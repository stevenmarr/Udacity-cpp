#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using std::cout;
using std::string;
using std::vector;
using std::ifstream;

// TODO: Add the ReadBoardFile function here.
void ReadBoardFile(){
    ifstream my_file;
    my_file.open("files/1.board");
    if (my_file){
        string file_line;
        while (getline(my_file, file_line)) {
            cout << file_line << "\n";
        }
    }
}

// PrintBoard not used in this exercise
void PrintBoard(const vector<vector<int>> board) {
  for (int i = 0; i < board.size(); i++) {
    for (int j = 0; j < board[i].size(); j++) {
      cout << board[i][j];
    }
    cout << "\n";
  }
}

int main() {
  ReadBoardFile(); 
  
  // Leave the following line commented out.
  //PrintBoard(board);
}