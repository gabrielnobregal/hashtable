#include "WordSumKeyCalc.h"

WordSumKeyCalc::WordSumKeyCalc():HASH_FACTOR((sqrt(5.0)-1)/2){
}

int WordSumKeyCalc::calculateHashKey(string word, int hashSize){
        int wordSum = 0;

        for(int i=0; i<word.length();i++){
            wordSum += (int)word.at(i);
        }

        double value = ((double)wordSum) * HASH_FACTOR;
        double fraction = ((double)value - ((int)value)); 

        return (int)(fraction * hashSize);
}
