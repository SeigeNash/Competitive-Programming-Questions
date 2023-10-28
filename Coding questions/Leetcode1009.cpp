// the following code has been done by bity manipulation and bit masking 
/* 
APPROACH- 

let n be a number for which we need to find the complimemnt 
perform not n
perform bitwise and with bitwise not  n and a variable named mask 
how to find mask 
increment a count variable and calculate  count till n becomes equal to zero
count is  the number of 1s that are needed to be added in the right side of mask
let mask be initialised to 0
now 0 or 1 gives me 1
perform left shift of mask and this would return me 10 
keep perfomring ht e above two steps until i get allthe 1s in mask
mask obtained

perform bitwise and operation with bitwise not n
*/


#include <iostream>
using namespace std;

int main(){

    
    int num = 1, mask = 0, temp = num;
    
    if( num == 0){
            return 1;
    }
    

    
    while (temp != 0){

        mask = (mask << 1) | 1;
        temp >>= 1;
       
    }
    
    cout << "result: " << ((~num) & mask) << endl;
    
}


