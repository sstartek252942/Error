CPPFLAGS= -c -g -Iinc -Wall -pedantic -std=c++17 

__start__: Dron
	./Dron < test.txt

Dron: obj/Dr3D_gnuplot_api.o obj/main.o obj/Wektor.o obj/Macierz.o
	g++ -o Dron obj/main.o obj/Dr3D_gnuplot_api.o obj/Wektor.o obj/Macierz.o -lpthread

obj/main.o: src/main.cpp inc/Dr3D_gnuplot_api.hh inc/MacierzOb.hh inc/Wektor3D.hh inc/Obiekt3D.hh
	g++ ${CPPFLAGS} -o obj/main.o src/main.cpp

obj/Dr3D_gnuplot_api.o: src/Dr3D_gnuplot_api.cpp inc/Dr3D_gnuplot_api.hh
	g++ ${CPPFLAGS} -o obj/Dr3D_gnuplot_api.o src/Dr3D_gnuplot_api.cpp

inc/Dr3D_gnuplot_api.hh: inc/Draw3D_api_interface.hh
	touch inc/Dr3D_gnuplot_api.hh

obj/Macierz.o: src/Macierz.cpp src/MacierzC.cpp inc/Macierz.hh 
	g++ ${CPPFLAGS} -o obj/Macierz.o src/MacierzC.cpp


obj/Wektor.o: src/Wektor.cpp src/WektorC.cpp inc/Wektor.hh
	g++ ${CPPFLAGS} -o obj/Wektor.o src/WektorC.cpp


obj/Wektor3D.o: inc/Wektor3D.hh 
	g++ ${CPPFLAGS} -o obj/Wektor3D.o inc/Wektor3D.hh

clear:
	rm -f obj/*.o Dron
