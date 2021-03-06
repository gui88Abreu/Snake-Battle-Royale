/*
Nome: Guilherme de Brito Abreu
RA: 173691
*/

#ifndef _CONTROLER_HPP
#define _CONTROLER_HPP

#include <iostream>
#include <vector>
#include <cstdlib>
#include <time.h>

#include "../model/snake_model.hpp"

#define VEL 1

class Fisica {
  private:
    ListaDeSnakes *lista;
    short int verify_snake_collison(std::vector<Snake*> *s, int snake_Id, bool snakes_status[]); // verify if the head of snake has same position of some other body of it
    bool verify_snake_ate(std::vector<Corpo*> *c); // verify if snake ate the food 

  public:
    Fisica(ListaDeSnakes *lds);
    void change_dir(int direction, int i); // change direction of the movement
    void add_corpo(Corpo *c); // add one single body to the snake
    short int update(int snake_ID, bool snakes_status[]); // update position according with delta time, movement is uniforme. it returns 1 if snake ate itself

    std::vector<pos_2d> food_vector;
    void feed_snake(); // put one single food in a random position of the arena
};

#endif
