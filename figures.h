#ifndef CHESS_FIGURES_H
#define CHESS_FIGURES_H

#include <iostream>

enum class FigureColor {
    White,
    Black
};

class Figure{
protected:
    FigureColor color;
    int x, y;
    std::string figureImage;

public:
    Figure(FigureColor color, int x, int y) : color(color), x(x), y(y) {}
    virtual void move() = 0;
    std::string getFigureImage(){
        return figureImage;
    }
};

class Pawn : public Figure{
public:
    Pawn(FigureColor color, int x, int y) : Figure(color, x, y) {
        figureImage = (color == FigureColor::White) ? "\u2659" : "\u265F";
    }

    void move() override{
        std::cout << "xaxa";
    }
};

class Rook : public Figure{
public:
    Rook(FigureColor color, int x, int y) : Figure(color, x, y) {
        figureImage = (color == FigureColor::White) ? "\u2656" : "\u265C";
    }

    void move() override{
        std::cout << "xaxa";
    }
};

class Knight : public Figure{
public:
    Knight(FigureColor color, int x, int y) : Figure(color, x, y) {
        figureImage = (color == FigureColor::White) ? "\u2658" : "\u265E";
    }

    void move() override{
        std::cout << "xaxa";
    }
};

class Bishop : public Figure{
public:
    Bishop(FigureColor color, int x, int y) : Figure(color, x, y) {
        figureImage = (color == FigureColor::White) ? "\u2657" : "\u265D";
    }

    void move() override{
        std::cout << "xaxa";
    }
};

class Queen : public Figure{
public:
    Queen(FigureColor color, int x, int y) : Figure(color, x, y) {
        figureImage = (color == FigureColor::White) ? "\u2655" : "\u265B";
    }

    void move() override{
        std::cout << "xaxa";
    }
};

class King : public Figure{
public:
    King(FigureColor color, int x, int y) : Figure(color, x, y) {
        figureImage = (color == FigureColor::White) ? "\u2654" : "\u265A";
    }

    void move() override{
        std::cout << "xaxa";
    }
};


#endif //CHESS_FIGURES_H
