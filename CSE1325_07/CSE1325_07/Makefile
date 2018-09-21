CXXFLAGS += --std=c++11

all: main
rebuild: clean main

main: main.o container.o icecream.o topping.o
	$(CXX) $(CXXFLAGS) -o app main.o container.o icecream.o topping.o
main.o: main.cpp *.h
	$(CXX) $(CXXFLAGS) -c main.cpp
container.o: container.cpp *.h
	$(CXX) $(CXXFLAGS) -c container.cpp
icecream.o: icecream.cpp *.h
	$(CXX) $(CXXFLAGS) -c icecream.cpp
topping.o: topping.cpp *.h
	$(CXX) $(CXXFLAGS) -c topping.cpp
clean:
	-rm -f *.o app
