#pragma once

enum PieceCode
{
	None   = 0,
	King   = 1,
	Queen  = 2,
	Rook   = 3,
	Bishop = 4,
	Knight = 5,
	Pawn   = 6,
	White  = 8,
	Black  = 16
};

class Piece
{
private:
	unsigned int code;
	char charNotation;
	char printNotation;

public:
	[[nodiscard]] unsigned Code() const
	{
		return code;
	}

	[[nodiscard]] char CharNotation() const
	{
		return charNotation;
	}

	[[nodiscard]] char PrintNotation() const
	{
		return printNotation;
	}

	explicit Piece(const unsigned int code, const char charNotation, const char printNotation=' ')
		: code(code), charNotation(charNotation), printNotation(printNotation)
	{ }
};

static Piece nonePiece   = Piece(None,           '-', '-');
static Piece whiteKing   = Piece(White | King,   'K', '\u2654');
static Piece whiteQueen  = Piece(White | Queen,  'Q', '\u2655');
static Piece whiteRook   = Piece(White | Rook,   'R', '\u2656');
static Piece whiteBishop = Piece(White | Bishop, 'B', '\u2657');
static Piece whiteKnight = Piece(White | Knight, 'N', '\u2658');
static Piece whitePawn   = Piece(White | Pawn,   'P', '\u2659');
static Piece blackKing   = Piece(Black | King,   'k', '\u265A');
static Piece blackQueen  = Piece(Black | Queen,  'q', '\u265B');
static Piece blackRook   = Piece(Black | Rook,   'r', '\u265C');
static Piece blackBishop = Piece(Black | Bishop, 'b', '\u265D');
static Piece blackKnight = Piece(Black | Knight, 'n', '\u265E');
static Piece blackPawn   = Piece(Black | Pawn,   'p', '\u265F');
