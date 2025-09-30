#include <iostream>
using namespace std;

struct BoardSquare
{
	enum E
	{
		X,
		O,
		Empty
	};
};

class Board
{
private:
	int _width;
	BoardSquare::E* _squares;
public:
	Board(int width) : _width(width)
	{
		_squares = new BoardSquare::E[width * width];
		for (auto i = 0; i < GetTotalSquares(); i++)
			_squares[i] = BoardSquare::Empty;
	}

	int GetWidth() { return _width; }

	int GetTotalSquares() { return _width * _width; }

	~Board()
	{
		delete[] _squares;
	}

	BoardSquare::E GetSquare(int index)
	{
		return _squares[index];
	}

	void SetSquare(int index, BoardSquare::E square)
	{
		_squares[index] = square;
	}
};

class IRuleEngine
{
public:
	virtual BoardSquare::E HasWon(Board& board) = 0;
};

class Game
{
public:
	BoardSquare::E Run() {}
};

int main()
{
	cout << "Tic Tac Toe\n";

	cin.get();
	return 0;
}