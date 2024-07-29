/**
 * 
 * urlparser.cpp - A simple url parser
 * version 1.0
 * Written by Erik Ramos(erikram312@gmail.com)
 * 
 */
#include <iostream>
#include "../include/urlparser.h"



UrlParser::UrlParser(){};


UrlParser::~UrlParser(){};


string UrlParser::parse_path(string p1){
    int count=0;
    string e_path;
    string wrk_url=p1;
    for(std::size_t i=0; i < wrk_url.size(); i++){
        if(wrk_url[i] == '/'){
            count+=1;
        }
        if(count==3){
            e_path+=wrk_url[i];
        }

    }
    
    return e_path;
};

string UrlParser::parse_hostname(string h1){
    int count=0;
    string e_hostname;
    string wrk_url=h1;
    for(std::size_t i=0; i < wrk_url.size(); i++){
        if(wrk_url[i] == '/'){
            count+=1;
        }
        if(count==2 && wrk_url[i] != '/'){
            e_hostname+=wrk_url[i];
        }else if(count==3){
            break;

        }
    }

    return e_hostname;
};

string UrlParser::parse_scheme(string s1){
    int count=0;
    string e_scheme;
    string wrk_url=s1;
    for(std::size_t i=0; i < wrk_url.size(); i++){
        if(wrk_url[i] == '/'){
            count+=1;
        }
        e_scheme+=wrk_url[i];
        if(count >= 2){
            break;
        }
    }
    
    return e_scheme;

};


int UrlParser::parse_url(std::map<string,string> &m1,string url1){
    if(url1==""){
        std::cout << "ERROR: Invalid or empty string" << "\n";
        return -1;
    }
    m1.clear();
    m1["Path"]=parse_path(url1);
    m1["Hostname"]=parse_hostname(url1);
    m1["Scheme"]=parse_scheme(url1);

    std::cout << "Parse url successfully completed!" << "\n";
    return 0;
};



