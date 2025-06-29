# Problem - 1
#Лазарев Максим Сергеевич 24.Б-82мм
#st128707@student.spbu.ru

Сборка:

output: world.o print.o
	g++ world.o print.o -o output

world.o: world.cpp
	g++ -c world.cpp

print.o: print.cpp
	g++ -c print.cpp

clean:
	rm *.o output

Запуск:

./output
