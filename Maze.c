/*
 ============================================================================
 Name        : Maze.c
 Author      : Jorge Rios
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char maze[12][12] = {	"############",
							"############",
							"#...########",
							"..#.########",
							"###...##....",
							"#####.##.###",
							"#####.##.###",
							"#####....###",
							"############",
							"############",
							"############",
							"############"};
	printf("%s",maze[0]);
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
