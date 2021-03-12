//
// Created by Maria João on 12/03/2021.
//

#ifndef CLASS1_PONTO_H
#define CLASS1_PONTO_H


class Ponto {
    float x;
    float y;
    float z;

    Ponto(){
        x=0;
        y=0;
        z=0;
    }

public:
    Ponto(float a, float b, float c){
        x=a;
        y=b;
        z=c;
    }
};


#endif //CLASS1_PONTO_H
