#include <iostream>
#include "figures.h"
#include "board.h"

Cell* board[BOARD_SIZE_X_Y][BOARD_SIZE_X_Y];

void createBoard(){
    for(int i = 0; i < BOARD_SIZE_X_Y; i++){
        for(int j = 0; j < BOARD_SIZE_X_Y; j++){
            board[i][j] = new Cell(i, j);
        }
    }

    for (int i = 0; i < BOARD_SIZE_X_Y; i++) {
        board[1][i]->setFigure(new Pawn(FigureColor::White, 1, i));
        board[6][i]->setFigure(new Pawn(FigureColor::Black, 6, i));
    }

    board[0][0]->setFigure(new Rook(FigureColor::White, 0, 0));
    board[0][7]->setFigure(new Rook(FigureColor::White, 0, 7));
    board[7][0]->setFigure(new Rook(FigureColor::Black, 7, 0));
    board[7][7]->setFigure(new Rook(FigureColor::Black, 7, 7));

    board[0][1]->setFigure(new Knight(FigureColor::White, 0, 1));
    board[0][6]->setFigure(new Knight(FigureColor::White, 0, 6));
    board[7][1]->setFigure(new Knight(FigureColor::Black, 7, 1));
    board[7][6]->setFigure(new Knight(FigureColor::Black, 7, 6));

    board[0][2]->setFigure(new Bishop(FigureColor::White, 0, 2));
    board[0][5]->setFigure(new Bishop(FigureColor::White, 0, 5));
    board[7][2]->setFigure(new Bishop(FigureColor::Black, 7, 2));
    board[7][5]->setFigure(new Bishop(FigureColor::Black, 7, 5));

    board[0][3]->setFigure(new Queen(FigureColor::White, 0, 3));
    board[0][4]->setFigure(new King(FigureColor::White, 0, 4));
    board[7][3]->setFigure(new Queen(FigureColor::Black, 7, 3));
    board[7][4]->setFigure(new King(FigureColor::Black, 7, 4));
}

void deleteBoard() {
    for (int i = 0; i < BOARD_SIZE_X_Y; i++) {
        for (int j = 0; j < BOARD_SIZE_X_Y; j++) {
            delete board[i][j];
        }
    }
}

int main() {
    createBoard();
    std::cout << board;
    return 0;
}
