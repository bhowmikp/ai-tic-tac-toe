[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg)](https://opensource.org/licenses/MIT) [![Build Status](https://travis-ci.org/bhowmikp/ai-tic-tac-toe.svg?branch=master)](https://travis-ci.org/bhowmikp/ai-tic-tac-toe)

# ai-tic-tac-toe

Play tic tac toe with another person or computer.

## Getting Started

### Installing

Play the game:
```
make
./game
```

### Coding style tests

Checks linting of .cpp, .h and .md files:
```
./lint.sh
```

### Test

Spot memory leaks:
```sh
make
sudo apt install valgrind
valgrind --leak-check=yes ./game
```

## Built With
- C++17

## Authors

* **Prantar Bhowmik** - *Initial work* - [bhowmikp](https://github.com/bhowmikp)

See also the list of [contributors](https://github.com/bhowmikp/ai-tic-tac-toe/graphs/contributors) who participated in this project.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details
