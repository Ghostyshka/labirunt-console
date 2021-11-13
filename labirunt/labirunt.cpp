#include <iostream>
#include <conio.h>
#include <fstream>
#include <stdio.h>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

#define HORIZONTAL_LINE '-'
#define VERTICAL_LINE '|'
#define SPACE ''
   
void printObject(int x = 1, int y = 0)
{
}

int main(int argc, char* argv[])
{
    const int len = 23, strings = 18;
    const char ch = '\n';
    vector<string> arr;

    //ifstream inFile("C:\\Users\\den01\\Desktop\\dev mentor\\labirunt\\Debug\\labirunt.txt");
    ifstream inFile2;
    inFile2.open("C:\\Users\\den01\\Desktop\\dev mentor\\labirunt\\Debug\\labirunt.txt");
    if (!inFile2.is_open())
    {
        cout << "Can't open!" << endl;
    }
    else
    {
        cout << "It's open' " << endl;
         
    }
    while (!inFile2.eof())
    {
        string temp;
        getline(inFile2, temp);
        cout << temp << endl;
        arr.push_back(temp);
    }
    inFile2.close();
    return 0;
}

/*
char c;
printObject(x,y);
while (c = _getch()) {
  switch (c)
  {
  case 'w': // top
    y--;
    break;
  case 's': // bottom
    y++;
    break;
  case 'a': // left
    x--;
    break;
  case 'd': // right
    x++;
    break;
  default:
    break;
  }
  system("cls");
  printObject(x, y);
}*/