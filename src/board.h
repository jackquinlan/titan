#include "bitboard.h";

/**
 * Chessboard representation
 * 
 * Notes:
 * - To represent the entire chessboard, represent each piece and color
 *   with a different bitboard.
 */ 
struct board {
    bitboard white_king;
    bitboard white_queens;
    bitboard white_rooks;
    bitboard white_bishops;
    bitboard white_knights;
    bitboard white_pawns;

    bitboard black_king;
    bitboard black_queens;
    bitboard black_rooks;
    bitboard black_bishops;
    bitboard black_knights;
    bitboard black_pawns;
};