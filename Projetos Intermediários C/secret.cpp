#include <raylib.h>

//Texture2D (variavel) = loadtexture();

struct animatronic {
    const char* nome; //Dados de cada animatronic
    int sala_atual = 0;
    int nivel_ia = 10;
    float cronometro = -10.0f;
    float intervalo = 3.0f;
}

int main(){
    InitWindow(800,600,"Fnaf");
    SetTargetFPS(60);

    int chance_mover=0;

    animatronic freddy;
        freddy.sala_atual = -1;
    animatronic bonnie;
        bonnie.sala_atual = -2;
    animatronic chica;
        chica.sala_atual = 0;
    animatronic foxy;
        foxy.sala_atual = -3;

    while (!WindowShouldClose()){

        float tempo_relogio = GetFrameTime();
        freddy.cronometro += tempo_relogio;
        bonnie.cronometro += tempo_relogio;
        chica.cronometro += tempo_relogio;
        foxy.cronometro += tempo_relogio;

        if (freddy.cronometro >= freddy.intervalo){
            if (GetRandomValue(1,20) <= freddy.nivel_ia){

                if (freddy.sala_atual <= 3) {
                    freddy.sala_atual = GetRandomValue(1,7);
                }
                else if (freddy.sala_atual >=4 && freddy.sala_atual <=7){
                    freddy.sala_atual = GetRandomValue(8,11);
                }
                else { 
                    chance_mover = GetRandomValue(0,20);  //está nos corredores

                    if (chance_mover <=4){
                        freddy.sala_atual = GetRandomValue(4,6); //Volta
                    }
                    else if (chance_mover >=5 && chance_mover <=10){
                        freddy.sala_atual=freddy.sala_atual; //Fica parado
                    }
                    else {
                        if (freddy.sala_atual == 8 || freddy.sala_atual == 9){
                            freddy.sala_atual = 12; //Porta do escritório
                        }
                        else {
                            freddy.sala_atual = 13; //Outra porta do escritório
                        }
                    }
                }
            }

            freddy.cronometro = 0.0f;
        }
        if (bonnie.cronometro >= bonnie.intervalo){

            if (GetRandomValue(1,20) <= bonnie.nivel_ia){

                if (bonnie.sala_atual <= 3) {
                    bonnie.sala_atual = GetRandomValue(1,7);
                }
                else if (bonnie.sala_atual >=4 && bonnie.sala_atual <=7){
                    bonnie.sala_atual = GetRandomValue(8,11);
                }
                else { 
                    chance_mover = GetRandomValue(0,20);  //está nos corredores

                    if (chance_mover <=4){
                        bonnie.sala_atual = GetRandomValue(4,6); //Volta
                    }
                    else if (chance_mover >=5 && chance_mover <=10){
                        bonnie.sala_atual=bonnie.sala_atual; //Fica parado
                    }
                    else {
                        if (bonnie.sala_atual == 8 || bonnie.sala_atual == 9){
                            bonnie.sala_atual = 12; //Porta do escritório
                        }
                        else {
                            bonnie.sala_atual = 13; //Outra porta do escritório
                        }
                    }
                }
            }

            bonnie.cronometro = 0.0f;
        }
        if (chica.cronometro >= chica.intervalo){
            
            if (GetRandomValue(1,20) <= chica.nivel_ia){

                if (chica.sala_atual <= 3) {
                    chica.sala_atual = GetRandomValue(1,7);
                }
                else if (chica.sala_atual >=4 && chica.sala_atual <=7){
                    chica.sala_atual = GetRandomValue(8,11);
                }
                else { 
                    chance_mover = GetRandomValue(0,20);  //está nos corredores

                    if (chance_mover <=4){
                        chica.sala_atual = GetRandomValue(4,6); //Volta
                    }
                    else if (chance_mover >=5 && chance_mover <=10){
                        chica.sala_atual=chica.sala_atual; //Fica parado
                    }
                    else {
                        if (chica.sala_atual == 8 || chica.sala_atual == 9){
                            chica.sala_atual = 12; //Porta do escritório
                        }
                        else {
                            chica.sala_atual = 13; //Outra porta do escritório
                        }
                    }
                }
            }

            chica.cronometro = 0.0f;
        }
        if (foxy.cronometro >= foxy.intervalo){
            //RNG dele
            foxy.cronometro = 0.0f;
        }

        BeginDrawing();
            ClearBackground(BLACK);
    
        //Desenhar os animatronics na camera
        //Desenhar as texturas DrawTexture()

        EndDrawing();
    }

    UnloadTexture();

    return 0;
}
