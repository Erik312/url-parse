/**
 * 
 * urlparser.h - A simple url parser
 * version 1.0
 * Written by Erik Ramos(erikram312@gmail.com)
 * 
 */
#pragma once
#include <string>
#include <map>

using std::string;

/**
 * UrlParser - A class that parses a url string.
 * 
 * UrlParser is a Class with methods that take a url in the form of a std::string and extracts the path,scheme and hostname.
 * 
 * 
 */

class UrlParser
{
public:
    UrlParser();
    ~UrlParser();
    string parse_path(string p1);
    string parse_hostname(string h1);
    string parse_scheme(string s1);
    /**
     * parse_url() - calls parse_path(),parse_hostname() and parse_scheme() to extract information from url string.
     * param: std::map<string,string> arg1, std::string arg2; 
     * return: std::map<string,string>;
     * 
     */
    int parse_url(std::map<string,string> &m1,string url1);
};