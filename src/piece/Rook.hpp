#ifndef RookChessPiece_HeaderPlusPlus
#define RookChessPiece_HeaderPlusPlus

#include "board/Board.hpp"
#include "board/Castling.hpp"

namespace chesspp
{
    namespace piece
    {
        class Rook : public Piece
        {
            board::Castling &castling;

        public:
            Rook(board::Board &b, Position_t const &pos, Suit const &s);
            virtual ~Rook() = default;

            virtual config::BoardConfig::Textures_t::mapped_type::mapped_type const &texture() const override;

        protected:
            virtual void calcTrajectory() override;

        private:
            virtual void moveUpdate(Position_t const &from, Position_t const &to) override;
        };
    }
}

#endif
