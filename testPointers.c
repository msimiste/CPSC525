/*
 * testPointers.c
 * 
 * Copyright 2016 msimiste <msimiste@zone07wa>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>


struct point makepoint(int, int);
struct point addpoint(struct point, struct point);

struct point {
	int x;
	int y;
};

struct rect {

	struct point pt1;
	struct point pt2;
	
};

int main()
{
	struct rect screen;
	struct point middle;
	
	screen.pt1 = makepoint(0,0);
	screen.pt2 = makepoint(100,100);
	
	printf("first: %d %d\nsecond: %d %d\n", screen.pt1.x, screen.pt1.y, screen.pt2.x, screen.pt2.y);
	
	middle = makepoint((screen.pt1.x + screen.pt2.x0/2, (screen.pt1.y + screen.pt2.y)/2);
	
	
	
	return 0;
}

struct point makepoint(int x, int y){
	
	struct point temp;
	
	temp.x = x;
	temp.y = y;
	return temp;

}

struct point addpoint(struct point p1, struct point p2){
	
	p1.x += p2.x;
	p1.y += p2.y;
	return p1;
}
