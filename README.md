# Url Parse
#### A C++ Library that parses a url string.

## Description
#### Url Parse is a c++ static library that extracts data from a url string. 
#### When making request via sockets you must provide a path, hostname,and scheme in order to complete that socket request. This data is stored in a url(`ex.http://www.example.com/home`). When your browser or socket makes a request it needs to know the ***Scheme***(`ex.http:// or https://`), the ***Hostname***(`ex.www.example.com`) and the ***Path***(`/home/mypage`). Url Parse extracts that data for you from a string url.

## Getting Started

### Dependencies
- GCC compiler
- make

### Installing/Building
- Download the files.
- Run the makefile.
```
make
or
make all

```
- Place the header file in your projects directory.
- Place the liburlparser.a archive file in your projects directory.

### Usage
- include the header file.
- Create an instance of the UrlParser class.
```
UrlParser testparser;

```
- Call the UrlParser.parse_url() method with neccesary parameters.
```
testparser.parse_url(std::map<std::string,std::string> &mymap,std::string url);
```
- Link lib at link time. 
```
  g++ -std=c++17 main.o -o main liburlparser.a
```
## Author
@Erik Ramos

