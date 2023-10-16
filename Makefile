game: main.cpp Farm.o Inventory.o Employee.o Commodity.o Animal.o Crop.o Chicken.o Sheep.o Goat.o Cow.o Wheat.o Carrot.o Potato.o Watermelon.o
	g++ main.cpp Farm.o Inventory.o Employee.o Commodity.o Animal.o Crop.o Chicken.o Sheep.o Goat.o Cow.o Wheat.o Carrot.o Potato.o Watermelon.o -Wall -std=c++11 -o game

Farm.o: Farm.h Farm.cpp
	g++ -c Farm.h Farm.cpp -std=c++11

Inventory.o: Inventory.h Inventory.cpp
	g++ -c Inventory.h Inventory.cpp -std=c++11

Employee.o: Employee.h Employee.cpp
	g++ -c Employee.h Employee.cpp -std=c++11

Comodity.o: Commodity.h Commodity.cpp
	g++ -c Commodity.h Commodity.cpp -std=c++11

Animal.o: Animal.h Animal.cpp
	g++ -c Animal.h Animal.cpp -std=c++11

Crop.o: Crop.h Crop.cpp
	g++ -c Crop.h Crop.cpp -std=c++11

Chicken.o: Chicken.h Chicken.cpp
	g++ -c Chicken.h Chicken.cpp -std=c++11

Sheep.o: Sheep.h Sheep.cpp
	g++ -c Sheep.h Sheep.cpp -std=c++11

Goat.o: Goat.h Goat.cpp
	g++ -c Goat.h Goat.cpp -std=c++11

Cow.o: Cow.h Cow.cpp
	g++ -c Cow.h Cow.cpp -std=c++11

Wheat.o: Wheat.h Wheat.cpp
	g++ -c Wheat.h Wheat.cpp -std=c++11

Carrot.o: Carrot.h Carrot.cpp
	g++ -c Carrot.h Carrot.cpp -std=c++11

Potato.o: Potato.h Potato.cpp
	g++ -c Potato.h Potato.cpp -std=c++11

Watermelon.o: Watermelon.h Watermelon.cpp
	g++ -c Watermelon.h Watermelon.cpp -std=c++11

clear:
	rm *.o game