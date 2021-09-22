//
// Created by zyming on 2021/8/16.
//

#ifndef CHARACTERIZINGFORMULAS_COMPUTATIONTREE_MODEL_H
#define CHARACTERIZINGFORMULAS_COMPUTATIONTREE_MODEL_H


#include <set>

typedef int state_id;
/**
  Class used to store subsets of states of a Kripke structure.
*/

//class state_set;
typedef std::set<int> state_set;

//Returns a new and empty model.
model* makeEmptyModel(int debug_level);

//Abstract class - interface for models and model checking operations.
class model {
    model(){}
    virtual ~model() {  }

    //Finalize the Kripke structure.
    virtual bool finish() = 0;




};

#endif //CHARACTERIZINGFORMULAS_COMPUTATIONTREE_MODEL_H
