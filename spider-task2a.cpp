#include<stdio.h>
#include<conio.h>
#include<string>
#include<iostream>
#include <bits/stdc++.h> 


using namespace std;


long long int parser(string);

int main()
{

    int n = 0, i = 0;
    cin >> n;
    string str1[n];
    long long int int1[n];
    while(i<n){
        cin>>str1[i];
        int1[i]=parser(str1[i]);
        i++;
    }
    i = 0;
    while(i<n){
        cout << int1[i] << "\n";
        i++;
    }

    return 0;
}



long long int parser(string s)
{
    long long int countLesser = 0, countGreater = 0;
    long long int counter = 0;
    for(int j = 0; s[j] != '\0'; j++){
        if(s[j]=='<'){
            if(j==0 || countGreater == 0){
                countLesser++;
            }
            else if(countLesser == countGreater){
                counter = countLesser;
                countLesser = 1;
                countGreater = 0;
            }
            else{
                return counter*2;
            }
        }
        else if (s[j]=='>'){
            countGreater++;
            if(countGreater == countLesser){
                counter = counter + countLesser;
                countGreater = 0;
                countLesser = 0;
            }
            else if (countGreater>countLesser){
                return counter*2;
            }

        }
    }

    return counter*2;
}
