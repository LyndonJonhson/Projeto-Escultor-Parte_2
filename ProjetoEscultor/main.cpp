#include "sculptor.h"
#include "interpretador.h"

int main(void){
    Sculptor *s;

    Interpretador interp;

    std::vector<FiguraGeometrica*> figs;

    figs = interp.leitor("Snorlax.txt");

    s = new Sculptor(interp.getDimX(), interp.getDimY(), interp.getDimZ());

    for(size_t i = 0; i < figs.size(); i++){
        figs[i]->draw(*s);
    }

    s->writeOFF((char*)"Snorlax.OFF");

    for(size_t i = 0; i < figs.size(); i++){
        delete figs[i];
    }
    delete s;
    return 0;
}
