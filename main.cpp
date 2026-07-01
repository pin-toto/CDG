#include<SDL2/SDL.h>
#include<iostream>
#include <ctime>  


int main() {

    srand(time(0));

    SDL_Init(SDL_INIT_VIDEO);

    SDL_Window* win=SDL_CreateWindow(

        "GAME-CDG",
        SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED,
        800,
        800,
        SDL_WINDOW_SHOWN

    );


    bool run=true;
    SDL_Event ev;
    int px=400;
    int py=660;

    int ex=rand() %799;
    int ey=1;

    SDL_Renderer* ren=SDL_CreateRenderer(win,-1,SDL_RENDERER_ACCELERATED);
      int speed=4;
     int en_speed=6;


    while (run) {
        while(SDL_PollEvent(&ev)){
        if(ev.type == SDL_QUIT) {

                run=false;

            }
        }

        SDL_RenderClear(ren);
        SDL_SetRenderDrawColor(ren,70,150,220,255);
        SDL_RenderClear(ren);
        const Uint8* key=SDL_GetKeyboardState(NULL);




        SDL_Rect bak={0,700,799,700};

        SDL_SetRenderDrawColor(ren,0,255,0,255);

        SDL_RenderFillRect(ren,&bak);
        
        SDL_Rect pl={px,py,50,50};

        SDL_SetRenderDrawColor(ren,255,0,255,255);

        SDL_RenderFillRect(ren,&pl);

        //--move--
        if(key[SDL_SCANCODE_D]) {

            px+=speed;

        }else if(key[SDL_SCANCODE_A]) {

            px-=speed;


        }



        if(px<0) {

            px=799;

        }else if(px>799) {

            px=0;

        }

        SDL_Rect en={ex,ey,30,30};

        SDL_SetRenderDrawColor(ren,255,0,0,255);

        ey+=en_speed;

        if(ey>700) {

            ey=1;
            ex=rand() %799;


        }

        if(pl.x < en.x +en.w 
                && pl.x + pl.w > en.x 
                    && pl.y < en.y + en.h 
                        && pl.y + pl.h > en.y) {
             ey=1;
            ex=rand() %799;

            en_speed+=0.05;
            speed+=0.03;

        }

        SDL_RenderFillRect(ren,&en);
        SDL_RenderPresent(ren);
        SDL_Delay(16);

    }
    
SDL_DestroyWindow(win);
SDL_DestroyRenderer(ren);
SDL_Quit();
return 0;
}
