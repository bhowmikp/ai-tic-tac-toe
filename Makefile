CXX = g++
CXXFLAGS = -std=c++17 -O2 -Wall -Wextra -Wshadow -Wnon-virtual-dtor -pedantic -Werror -g

main: main.o Board.o PlayerCreation.o Player.o Human.o Computer.o
	$(CXX) $(CXXFLAGS) -o game $^

%.o: %.c build/*.h
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f *.o game
