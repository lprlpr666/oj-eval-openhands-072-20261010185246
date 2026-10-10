all: code

code: main.cpp
	g++ -std=c++17 -O2 -pipe -o code main.cpp

clean:
	rm -f code
