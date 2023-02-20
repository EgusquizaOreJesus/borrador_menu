//
// Created by USER on 4/02/2023.
//

#ifndef MAZE_LABERINTO_H
#define MAZE_LABERINTO_H
#define MAP_WIDTH  480
#define MAP_HEIGHT 360
#define TILE_SIZE_WIDTH  20     //tamaño de cuadrado
#define TILE_SIZE_HEIGHT  15
#define MAZE_WIDTH 24
#define MAZE_HEIGHT 24

using I = int;
#include <iostream>
#include <stack>
#include <raylib.h>

#include <vector>

class Laberinto {
private:
    int * maze2{};
    std::stack<std::pair<I,I> >  Visited_Coordinates;
public:


    Laberinto(){

        this->maze2=  new int[MAZE_HEIGHT*MAZE_WIDTH];
        //this->maze2[1]=1;
        Visited_Coordinates.push({1,1}); // Stablishing first coordinate

    }

    [[nodiscard]] int *getMaze2() const {
        return maze2;
    }

    [[nodiscard]] const std::stack<std::pair<I, I>> &getVisitedCoordinates() const {
        return Visited_Coordinates;
    }

    I &operator()(int i_row, int i_col);
    I operator()(int i_row, int i_col) const;
    friend void backtraking(Laberinto& Alfa);

};


#endif //MAZE_LABERINTO_H
