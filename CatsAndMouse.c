char* catAndMouse(int x, int y, int z) {

 if(abs(z-x)<abs(z-y))
 return "Cat A";
 else if(abs(z-x)==abs(z-y))
 return "Mouse C";
 else
 return "Cat B";
 
}