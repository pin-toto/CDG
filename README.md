🟣 CDG - Color Dodge Game
CDG (Color Dodge Game) is a simple and fast-paced 2D arcade game built with C++ and SDL2. You control a pink square, dodging red squares falling from the top. The longer you survive, the harder it gets!

🎮 Gameplay
Goal: Survive as long as possible and avoid colliding with the red enemies.

Controls:

A = Move left

D = Move right

Mechanics:

Each time you dodge an enemy (or collide), the game speed increases slightly — both player and enemy speed go up.

Enemies respawn from the top after leaving the screen or hitting the player.

🧠 Features
🔹 Player movement (left/right)

🔹 Falling enemies with random spawn positions

🔹 Collision detection (manual intersection check)

🔹 Dynamic difficulty — speed increases over time

🔹 Wrap-around movement (player teleports from one side to the other)

🚀 How to Build & Run
1. Install Dependencies (Ubuntu/Debian)
bash
sudo apt update
sudo apt install g++ libsdl2-dev
2. Compile the Game
bash
g++ cdg.cpp -o cdg -lSDL2
3. Run
bash
./cdg
💡 Note: Make sure SDL2 is installed correctly. If you're using a different OS, check the official SDL2 installation guide.

📁 Project Structure
text
CDG/
├── cdg.cpp          # Main game source code
└── README.md        # This file
🛠️ Built With
C++ — core logic and performance

SDL2 — graphics, windowing, and input handling

🧪 Next Steps (Future Improvements)
Display score and lives

Add sound effects (SDL_mixer)

Add a start menu or game-over screen

Use textures instead of colored rectangles

Add more enemy types

📄 License
This project is open-source and available under the MIT License.

by pintoto
