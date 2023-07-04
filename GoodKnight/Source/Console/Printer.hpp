#pragma once

#include <iostream>
#include "../Engine/Board.hpp"

class Printer
{
public:
	static void PrintBoard(const Board& board)
	{
		for (size_t file = 0; file < Board::FILE_COUNT; file++)
		{
			for (size_t rank = 0; rank < Board::RANK_COUNT; rank++)
			{
				std::cout << board.GetSquareAt(file, rank).piece.CharNotation() << '\t';
			}
			std::cout << '\n';
		}
	}
};
