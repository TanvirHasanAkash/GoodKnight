#pragma once

#include "Piece.hpp"

struct Square
{
	Piece piece;

	Square()
		: piece(nonePiece)
	{ }

	explicit Square(const Piece& piece)
		: piece(piece)
	{ }
};
