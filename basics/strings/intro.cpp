/*
1. c styled string 

        char str[]="abcde";
        double quotes used because it will add \0 to the end in memory 
        thats how compiler knows the string is end 

        we cannot initialize value later like
        char str[4];
        str="abcd";

        cuz each character is a memory location you cant add memory location to another memory locatoin
        so we use 
        strcpy(string1,string2);

        strcmp(s1,s2) 
        s1==s2   return 0
        s1 lexicographically greater than s2 returh 1
        s1<s2 return negative value
        
2.cpp styled string 
        cin>>string will not accept spaced string as it will terminate after space.
        to avoid this we will use

         getline(cin,string);

         strname.substr(begining index,length of substring)

         strname.find("abac") returns the starting index of the passed string i.e index of a; 
 */