calculator: driver.o calculator.o
	g++ -o calculator driver.o calculator.o

driver.o: driver.cpp calculator.h
	g++ -c driver.cpp

calculator.o: calculator.cpp calculator.h
	g++ -c calculator.cpp

clean: 
	rm *.o calculator