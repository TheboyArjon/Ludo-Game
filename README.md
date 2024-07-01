# Ludo-Game
# Ludo Game

Welcome to the Ludo Game project! This project is a simple implementation of the classic board game Ludo using Qt for the GUI. 

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Introduction

Ludo is a strategy board game for two to four players, in which the players race their four tokens from start to finish according to the rolls of a single die. This project aims to create a digital version of the game using C++ and the Qt framework.

## Features

- Classic Ludo gameplay
- Simple and intuitive user interface
- Multiplayer support (up to 4 players)
- Basic AI opponents (optional)

## Installation

### Prerequisites

- [Qt 5.x](https://www.qt.io/download) (Qt 6.x should also work)
- C++ compiler (GCC, Clang, MSVC, etc.)
- CMake (optional, for building)

### Building the Project

1. Clone the repository:
    ```sh
    git clone https://github.com/yourusername/ludo-game.git
    cd ludo-game
    ```

2. Open the project in Qt Creator:
    - Launch Qt Creator.
    - Select `Open Project` and navigate to the `ludo-game` directory.
    - Open the `Ludo.pro` file.

3. Build and run the project:
    - Click the `Run` button in Qt Creator to build and run the project.

Alternatively, you can build the project using CMake:

1. Create a build directory and navigate into it:
    ```sh
    mkdir build
    cd build
    ```

2. Run CMake to configure the project:
    ```sh
    cmake ..
    ```

3. Build the project:
    ```sh
    cmake --build .
    ```

4. Run the executable:
    ```sh
    ./Ludo
    ```

## Usage

To start the game, simply run the executable. The main window will appear, displaying the Ludo board. Follow the on-screen instructions to play the game. You can add up to 4 players and choose whether they are human or AI.

## Contributing

Contributions are welcome! If you have any ideas, bug reports, or feature requests, please open an issue on GitHub. If you would like to contribute code, please fork the repository and submit a pull request.

1. Fork the repository.
2. Create a new branch:
    ```sh
    git checkout -b feature-branch
    ```

3. Make your changes and commit them:
    ```sh
    git commit -am 'Add some feature'
    ```

4. Push to the branch:
    ```sh
    git push origin feature-branch
    ```

5. Open a pull request.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

---

Happy playing!

