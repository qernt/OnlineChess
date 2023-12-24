#ifndef CHESS_BOARD_H
#define CHESS_BOARD_H
#include "figures.h"

const int BOARD_SIZE_X_Y = 8;

class Cell{
private:
    Figure* figure;
    int x, y;

public:
    Cell(int x, int y, Figure *figure = nullptr) : x(x), y(y), figure(figure) {}

    bool isOcupied() const{
        return figure != nullptr;
    }

    Figure* getFigure() const{
        return figure;
    }

    void setFigure(Figure* newFigure){
        figure = newFigure;
    }

    void print() const{
        if(figure != nullptr){
            std::cout << figure->getFigureImage() << " ";
        }else{
            std::cout << "0 ";
        }

    }
};


std::ostream& operator<<(std::ostream& os, Cell* board[BOARD_SIZE_X_Y][BOARD_SIZE_X_Y]) {
    for (int i = 0; i < BOARD_SIZE_X_Y; i++) {
        for (int j = 0; j < BOARD_SIZE_X_Y; j++) {
            if(board[i][j]->getFigure() != nullptr){
                os << board[i][j]->getFigure()->getFigureImage() << " ";
            }else{
                os << "0 ";
            }
        }
        os << std::endl;
    }
    return os;
}

#endif //CHESS_BOARD_H
