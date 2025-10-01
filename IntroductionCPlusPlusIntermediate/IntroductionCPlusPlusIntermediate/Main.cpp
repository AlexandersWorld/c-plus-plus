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

struct WinningPlayer
{
	enum E
	{
		X,
		O,
		Stalemate,
		None
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
	virtual WinningPlayer::E GetWinningPlayer(Board& board) = 0;
};

class Game
{
private:
	Board& _board;
	IRuleEngine& _ruleEngine;
public:
	Game(Board& board, IRuleEngine& ruleEngine) : _board(board), _ruleEngine(ruleEngine)
	{
	}
	WinningPlayer::E Run()
	{
		WinningPlayer::E winningPlayer, currentPlayer = WinningPlayer::X;
		while ((winningPlayer = _ruleEngine.GetWinningPlayer(_board)) == WinningPlayer::None)
		{
			Render();
			cout << "\n";

			int input;
			cout << "Move for " << (currentPlayer == WinningPlayer::X ? 'X' : 'O') << ": ";
			cin >> input;
			cin.ignore();

			input -= 1;
			if (input < 0 || input > _board.GetTotalSquares() || _board.GetSquare(input) != BoardSquare::Empty)
			{
				cout << "Invalid Move!\n";
				continue;
			}
			_board.SetSquare(input, currentPlayer == WinningPlayer::X ? BoardSquare::X : BoardSquare::O);
			currentPlayer = currentPlayer == WinningPlayer::X ? WinningPlayer::O : WinningPlayer::X;
		}
		cout << "Player winner: " << (winningPlayer == 0 ? 'X' : 'O') << endl;
		return winningPlayer;
	}
private:
	void Render()
	{
		for (auto i = 1; i <= _board.GetTotalSquares(); i++)
		{
			cout << GetSquareChar(i, _board.GetSquare(i - 1)) << " ";
			if ((i % _board.GetWidth()) == 0)
				cout << "\n";
		}
	}

	char GetSquareChar(int index, BoardSquare::E square)
	{
		switch (square)
		{
			case BoardSquare::X: return 'X';
			case BoardSquare::O: return 'O';
		}
		return index + '0';
	}
};

class NullRuleEngine : public IRuleEngine
{
public:
	virtual WinningPlayer::E GetWinningPlayer(Board& board)
	{
		return WinningPlayer::None;
	}
};

class TicTacToeRuleEngine : public IRuleEngine
{
public:
	virtual WinningPlayer::E GetWinningPlayer(Board& board) override
	{
		int width = board.GetWidth();

		for (int row = 0; row < width; row++)
		{
			BoardSquare::E first = board.GetSquare(row * width);

			if (first != BoardSquare::Empty)
			{
				bool allSame = true;
				for (int col = 1; col < width; col++)
				{
					if (board.GetSquare(row * width + col) != first)
					{
						allSame = false;
						break;
					}
				}
				if (allSame)
					return first == BoardSquare::X ? WinningPlayer::X : WinningPlayer::O;
			}
		}

		for (int col = 0; col < width; col++)
		{
			BoardSquare::E first = board.GetSquare(col);

			if (first != BoardSquare::Empty)
			{
				bool allSame = true;
				for (int row = 1; row < width; row++)
				{
					if (board.GetSquare(row * width + col) != first)
					{
						allSame = false;
						break;
					}
				}
				if (allSame)
					return first == BoardSquare::X ? WinningPlayer::X : WinningPlayer::O;
			}
		}

		{
			BoardSquare::E first = board.GetSquare(0);
			if (first != BoardSquare::Empty)
			{
				bool allSame = true;
				for (int i = 1; i < width; i++)
				{
					if (board.GetSquare(i * width + i) != first)
					{
						allSame = false;
						break;
					}
				}
				if (allSame)
					return first == BoardSquare::X ? WinningPlayer::X : WinningPlayer::O;
			}
		}

		{
			BoardSquare::E first = board.GetSquare(width - 1);
			if (first != BoardSquare::Empty)
			{
				bool allSame = true;
				for (int i = 1; i < width; i++)
				{
					if (board.GetSquare(i * width + (width - 1 - i)) != first)
					{
						allSame = false;
						break;
					}
				}
				if (allSame)
					return first == BoardSquare::X ? WinningPlayer::X : WinningPlayer::O;
			}
		}

		bool full = true;
		for (int i = 0; i < board.GetTotalSquares(); i++)
		{
			if (board.GetSquare(i) == BoardSquare::Empty)
			{
				full = false;
				break;
			}
		}
		if (full)
			return WinningPlayer::Stalemate;

		return WinningPlayer::None;
	}
};

int main()
{
	cout << "Tic Tac Toe\n";

	Board board(3);

	TicTacToeRuleEngine ruleEngine;

	Game game(board, ruleEngine);
	game.Run();

	cin.get();
	return 0;
}