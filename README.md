# SeeDeck.io

SeeDeck is a simple C++ implementation of a Deck of Cards that can be used to build any game using a standard deck of 52 cards

## Requirements 

CMake3

## Getting Started

Once you clone the project cd build and run all tests

```
./buildDebug.sh
./runTests.sh
```

If you don't feel like using scripts...

```
cd build
cmake .. -DCMAKE_BUILD_TYPE=Debug -G "Unix Makefiles" 
make all
./test/Deck_Project_tst 

```

## Usage

Create a deck object. This will create a deck that represents a standard deck of playing cards. The Deck class is an abstract class so it's functions can be overridden to implement different shuffle and dealing functionality depending on what game you want to build 
```cpp
Deck deck;
deck.shuffle();
Card *card = deck.deal_card();
```

## Contributing
Please don't

## License
Apache Licence