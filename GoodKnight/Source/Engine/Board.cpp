#include "Board.hpp"

std::array<Square, Board::FILE_COUNT * Board::RANK_COUNT> Board::InitBoard()
{
	return std::array
	{
		Square(blackRook), Square(blackKnight), Square(blackBishop), Square(blackQueen), Square(blackKing), Square(blackBishop), Square(blackKnight), Square(blackRook),
		Square(blackPawn), Square(blackPawn),   Square(blackPawn),   Square(blackPawn),  Square(blackPawn), Square(blackPawn),   Square(blackPawn),   Square(blackPawn),
		Square(nonePiece), Square(nonePiece),   Square(nonePiece),   Square(nonePiece),  Square(nonePiece), Square(nonePiece),   Square(nonePiece),   Square(nonePiece),
		Square(nonePiece), Square(nonePiece),   Square(nonePiece),   Square(nonePiece),  Square(nonePiece), Square(nonePiece),   Square(nonePiece),   Square(nonePiece),
		Square(nonePiece), Square(nonePiece),   Square(nonePiece),   Square(nonePiece),  Square(nonePiece), Square(nonePiece),   Square(nonePiece),   Square(nonePiece),
		Square(nonePiece), Square(nonePiece),   Square(nonePiece),   Square(nonePiece),  Square(nonePiece), Square(nonePiece),   Square(nonePiece),   Square(nonePiece),
		Square(whitePawn), Square(whitePawn),   Square(whitePawn),   Square(whitePawn),  Square(whitePawn), Square(whitePawn),   Square(whitePawn),   Square(whitePawn),
		Square(whiteRook), Square(whiteKnight), Square(whiteBishop), Square(whiteQueen), Square(whiteKing), Square(whiteBishop), Square(whiteKnight), Square(whiteRook)
	};
}

Square Board::GetSquareAt(const size_t file, const size_t rank) const
{
	return squares[(file * FILE_COUNT) + rank];
}
