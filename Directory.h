#ifndef DIRECTORY_H
#define DIRECTORY_H
#include <iostream>
#include <string>
#include <list>
#include <vector>

#include "File.h"

using namespace std;

class Directory
{
private:
    string name;
    Directory* parent;
    list <Directory*> subFolders;
    list <File*> files;
    
public:
    bool noSubfolder();
    bool noFile();
    Directory(string,Directory*);
    ~Directory();
    string getName() const;
    Directory* searchDir(string) const;
    File* searchFile(string) const;
    void ls();
    void remove(Directory *);
    void makefolder(string);
<<<<<<< HEAD
    File * makeFile(string);
=======
    bool validFileFormat(string);
    void makeFile(string);
    void addFolder(Directory * f){subFolders.push_back(f);};
    void addFile(File * f){files.push_back(f);};
>>>>>>> a7b4b7c6580f1fc3d4ad5651a5089d7f5d89fcb0
    void echo(string, string);
    list <Directory *> getSubFolders() const;
    void setSubFolders(list<Directory *> l){subFolders = l;};
    void setFiles(list<File *> f){files = f;};
    list <File *> getFiles() const;
    Directory* getParent() const;
    void setParent(Directory*);
    void setName(string s){name = s;};

};

#endif // DIRECTORY_H