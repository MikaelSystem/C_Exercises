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

    animatronic freddy;
        freddy.sala_atual = -1;
    animatronic bonnie;
        bonnie.sala_atual = -2;
    animatronic chica;
        chica.sala_atual = 0;
    animatronic foxy;
        foxy.sala_atual = -3;

    while (!WindowShouldClose){

        float tempo_relogio = GetFrameTime();
        freddy.cronometro += tempo_relogio;
        bonnie.cronometro += tempo_relogio;
        chica.cronometro += tempo_relogio;
        foxy.cronometro += tempo_relogio;

        if (freddy.cronometro >= freddy.intervalo){
            if (GetRandomValue(1,20) <= freddy.nivel_ia){
                 = GetRandomValue(0,2)
                if (freddy.sala)
                
            }

            freddy.cronometro = 0.0f;
        }
        if (bonnie.cronometro >= bonnie.intervalo){
            //RNG dele
            bonnie.cronometro = 0.0f;
        }
        if (chica.cronometro >= chica.intervalo){
            //RNG dele
            chica.cronometro = 0.0f;
        }
        if (foxy.cronometro >= foxy.intervalo){
            //RNG dele
            foxy.cronometro = 0.0f;
        }
    }

    BeginDrawing();
        ClearBackground(BLACK);
    
        //Desenhar os animatronics na camera
        //Desenhar as texturas DrawTexture()

    EndDrawing();

    UnloadTexture();

    return 0;
}
