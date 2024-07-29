/**
 * 
 * basic_urltest.cpp - simple test for urlparser
 * version 1.0
 * Written by Erik Ramos(erikram312@gmail.com)
 * 
 */
#include "../include/urlparser.h"
#include <iostream>
#include <string>
#include <cassert>
#include <map>


using std::string;

int main(){
    UrlParser testparser;
    std::map<string,string> test_map;
    string s1="http://testurl.dev/gobigorgohome";
    assert(typeid(testparser) == typeid(UrlParser));
    testparser.parse_url(test_map,s1);
    assert(test_map["Path"]=="/gobigorgohome");
    assert(test_map["Hostname"]=="testurl.dev");
    assert(test_map["Scheme"]=="http://");
    std::cout << "---------------Map results---------------" << "\n";
    for(auto x:test_map){
        std::cout << x.first << ":" << x.second << "\n";
    }

    std::cout <<"\n";
    std::cout << "Basic Test Cases: Passed" << "\n";


    return 0;
}