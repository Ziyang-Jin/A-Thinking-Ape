all: simulation solution

simulation: Simulation.cpp
	g++ -Wall Simulation.cpp -o simulation

solution: Solution.cpp
	g++ -Wall Solution.cpp -o solution

clean:	
	rm -f simulation
	rm -f solution
