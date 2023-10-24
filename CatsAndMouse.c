// Two cats and a mouse are at various positions on a line. You will be given their starting positions. Your task is to determine which cat will reach the mouse first, assuming the mouse does not move and the cats travel at equal speed. If the cats arrive at the same time, the mouse will be allowed to move and it will escape while they fight.

// You are given q queries in the form of x,y , and z representing the respective positions for cats A and B, and for mouse C . Complete the function catAndMOuse to return the appropriate answer to each query, which will be printed on a new line.

// If cat A catches the mouse first, print Cat A.
// If cat B catches the mouse first, print Cat B.
// If both cats reach the mouse at the same time, print Mouse C as the two cats fight and mouse escapes.

// Function Description

// Complete the catAndMouse function in the editor below.

// catAndMouse has the following parameter(s):

// int x: Cat A's position
// int y: Cat B's position
// int z: Mouse C's position
// Returns

// string: Either 'Cat A', 'Cat B', or 'Mouse C'
// Link to the Problem:https://www.hackerrank.com/challenges/cat-and-mouse/problem

char* catAndMouse(int x, int y, int z) {

 if(abs(z-x)<abs(z-y))
 return "Cat A";
 else if(abs(z-x)==abs(z-y))
 return "Mouse C";
 else
 return "Cat B";
 
}