#include <iostream>
#include <fstream>
#include <string>

// Tile Constants
const int TILE_OPEN     (0),    // Empty Tile
          TILE_PLAYER   (1),    // Player's Current Tile
          TILE_PILLAR   (2),    // Unpassable Pillar Tile
          TILE_EXIT     (3),    // Tile for Exit 

          TILE_WIDTH    (3),    // Tile Width

          STATUS_MOVE   (0),    // Player has moved 
          STATUS_STAY   (1),    // Player Didn't Move
          STATUS_ESCAPE (2);    // Player on Exit Tile

const char MOVE_UP      ('w'),  // Up
           MOVE_LEFT    ('a'),  // Left
           MOVE_DOWN    ('s'),  // Down
           MOVE_RIGHT   ('d'),  // Right
           INPUT_QUIT   ('q');  // Quit


void deleteMap(int** map, int width) {
    for (int x = 0; x < width; ++x) { delete[] map[x]; }
    delete[] map;
}

void outputMap(int** map, int width, int height) {
    // Top Border
    std::cout << "+";
    for (int x(0); x < width * TILE_WIDTH; ++x) { std::cout << "-"; }
    std::cout << "+" << std::endl;
    
    for (int y(0); y < height; ++y) {
        // Left Border
        std::cout << "|";

        // Inner 
        for (int x(0); x < width; ++x) {
            switch (map[x][y]) {
                case TILE_OPEN:   std::cout << "   "; break;
                case TILE_PLAYER: std::cout << " o "; break;
                case TILE_PILLAR: std::cout << " x "; break;
                case TILE_EXIT:   std::cout << " ! "; break;
            }
        }
        // Right Border
        std::cout << "|" << std::endl;
    }
    
    // Bottom Border
    std::cout << "+";
    for (int x(0); x < width * TILE_WIDTH; ++x) { std::cout << "-"; }
    std::cout << "+" << std::endl;
}

void outputStatus(int status, int currX, int currY) {
    switch (status) {
        case STATUS_MOVE: std::cout << "You have moved to location: (" << currX << ", " << currY << ")" << std::endl; break;
        case STATUS_STAY: std::cout << "An obstacle blocks your path." << std::endl; break;
        case STATUS_ESCAPE: std::cout << "Congratulations, adventurer! You have escaped the dungeon!" << std::endl; break;
    }
    std::cout << std::endl;
}

int** createMap(const std::string fileName, int& width, int& height, int& currX, int& currY) {
    std::ifstream ifs(fileName);
    if (!ifs.is_open()) {
        std::cout << "ERROR: unable to open: " << fileName << std::endl;
        ifs.close();
        return nullptr;
    }

    // Player Start Position
    ifs >> width >> height;
    ifs >> currX >> currY;

    int** ppA(new int*[height]);
    for(int i = 0; i < width; i++) ppA[i] = new int[width]; 

    // Populate 2D Array
    for (int i = 0; i < width; i++) {  
        for (int j = 0; j < height; j++) ifs >> ppA[j][i]; 
    }

    ppA[currX][currY] = TILE_PLAYER;
    ifs.close();
    return ppA;
}


int updateNextPosition(int** map, int width, int height, char direction, int& currX, int& currY, int& nextX, int& nextY){
    nextX = currX; 
    nextY = currY;    

    switch (direction) {
        case MOVE_UP:    nextY -= 1; break;
        case MOVE_LEFT:  nextX -= 1; break;
        case MOVE_DOWN:  nextY += 1; break;
        case MOVE_RIGHT: nextX += 1; break;
    }

    if (nextX < 0 || width <= nextX || nextY < 0 || height <= nextY || map[nextX][nextY] == TILE_PILLAR) {
        nextY = currY;
        nextX = currX;
        return STATUS_STAY;

    } else if (map[nextX][nextY] == TILE_EXIT) {
        return STATUS_ESCAPE;
    } 

    return STATUS_MOVE;
}

void updateMap(int** map, int& currX, int& currY, int& nextX, int& nextY) {
    map[currX][currY] = TILE_OPEN;
    currX = nextX;
    currY = nextY;
    map[nextX][nextY] = TILE_PLAYER;
}

int main() {
    int width(0), height(0), currX(0), currY(0), nextX(0), nextY(0), status(0);
    std::string fileName;
    char input;

    // Prompt for Filename
    std::cout << "Please enter dungeon map file: ";
    std::cin >> fileName;


    // Alloc Map
    int** map = createMap(fileName, width, height, currX, currY);
    if (map == nullptr) {
        std::cout << "This dungeon map does not exist.\nReturning you back to the real word, adventurer!" << std::endl;
        return 1;
    }

    // Main Menu
    std::cout << std::endl
              << "---------------------------------------------------------\n" 
              << "Good day, adventurer! Your goal is to escape the dungeon!\n" 
              << " --- SYMBOLS ---\n"                                          
              << " o          : That is you, the adventurer!\n"               
              << " x, -, |    : These are unpassable obstacles.\n"             
              << " !          : That is the door to escape the dungeon.\n"     
              << " --- CONTROLS ---\n"                                         
              << " w, a, s, d : Keys for moving up, left, down, and right.\n"  
              << " q          : Key for abandoning your quest.\n"              
              << "---------------------------------------------------------\n" 
              << std::endl;

    // Print Map
    outputMap(map, width, height);

    // Get Player Input
    while (true) {
        std::cout << "Enter command (w,a,s,d: move, q: quit): ";
        std::cin >> input;

        if (input == INPUT_QUIT) {
            std::cout << "Thank you for playing!" << std::endl;
            break;
        }

        // Invalid Input 
        if (input !=  MOVE_UP && input != MOVE_LEFT && input != MOVE_DOWN && input != MOVE_RIGHT) {
            std::cout << "I did not understand your command, adventurer!" << std::endl;
            continue;
        }

        // Move Player (if possible), Get Status
        status = updateNextPosition(map, width, height, input, currX, currY, nextX, nextY);
        

        // Update Map
        if (status == STATUS_MOVE || status == STATUS_ESCAPE)  
            updateMap(map, currX, currY, nextX, nextY);
        
        
        // Print Map & Status
        outputMap(map, width, height);
        outputStatus(status, currX, currY);
        
        // Quit on Escape
        if (status == STATUS_ESCAPE) break;
        
    }

    // Deallocate map
    deleteMap(map, width);
    return 0;
}
