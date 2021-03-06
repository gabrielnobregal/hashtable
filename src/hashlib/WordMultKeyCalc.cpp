#include "WordMultKeyCalc.h"

WordMultKeyCalc::WordMultKeyCalc():HASH_FACTOR((sqrt(5.0)-1)/2){
}

int WordMultKeyCalc::calculateHashKey(string word, int hashSize){
       long wordMult = 1;

        for(int i=0; i<word.length();i++){
            wordMult *= word.at(i);
        }

        // Em caso de overflow como indicado no slide
        if(wordMult<0){
	    wordMult *= -1;
	}
	
        double value = ((double)wordMult) * HASH_FACTOR;
        double fraction = ((double)value - ((int)value)); 

        return (int)(fraction * hashSize);
}


