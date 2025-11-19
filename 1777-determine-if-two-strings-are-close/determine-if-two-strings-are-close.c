#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

bool closeStrings(char * word1, char * word2){
    if(strlen(word1) != strlen(word2)) return false;
    
    int count1[26] = {0};
    int count2[26] = {0};
    
    // Count frequency of each character
    for(int i=0; word1[i]; i++){
        count1[word1[i]-'a']++;
        count2[word2[i]-'a']++;
    }
    
    // Check if same set of characters exists
    for(int i=0; i<26; i++){
        if((count1[i]==0 && count2[i]>0) || (count1[i]>0 && count2[i]==0))
            return false;
    }
    
    // Sort frequency arrays to compare multiset
    qsort(count1, 26, sizeof(int), (__compar_fn_t)strcmp);
    qsort(count2, 26, sizeof(int), (__compar_fn_t)strcmp);
    
    for(int i=0;i<26;i++){
        if(count1[i]!=count2[i]) return false;
    }
    
    return true;
}
