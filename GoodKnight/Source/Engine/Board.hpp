#pragma once

#include <array>
#include "Square.hpp"

class Board
{
public:
	constexpr static size_t FILE_COUNT = 8;
	constexpr static size_t RANK_COUNT = 8;
	constexpr static size_t SQUARE_COUNT = FILE_COUNT * RANK_COUNT;

private:
	static std::array<Square, FILE_COUNT* RANK_COUNT> InitBoard();
	std::array<Square, FILE_COUNT* RANK_COUNT> squares = InitBoard();

public:
	[[nodiscard]] Square GetSquareAt(size_t file, size_t rank) const;
};
