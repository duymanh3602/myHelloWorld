#include<iostream>
#include<windows.h>

using namespace std;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;

string slogan="Hello World!!";
string copyright="20020438 - Dinh Duy Manh";

void gotoxy(int x, int y){
	CursorPosition.X = x;
	CursorPosition.Y = y;
	SetConsoleCursorPosition(console, CursorPosition);
}

int main ()
{
    for(int i=0;i<slogan.size()-2;i++)
    {
        system("cls");
        gotoxy(2,9);   cout<<copyright;
        for (int j=i;j<i+2;j++)
        {
            gotoxy(j+6,10); cout<<slogan[j];
        }
        Sleep(150);
    }
    gotoxy(5,10);   cout<<slogan;
}
