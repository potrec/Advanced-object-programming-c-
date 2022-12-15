//
// Created by potrec on 15.12.2022.
//

#ifndef LAB10_BUFFERFILE_H
#define LAB10_BUFFERFILE_H


#include "Buffer.h"
#include <iostream>
#include <fstream>
#include <memory>

class BufferFile : public Buffer
{
private:
    std::string filename;
    std::ofstream file;

public:
    BufferFile(const std::string& fname) : filename(fname)
    {
        std::cout << "Konstruktor klasy BufferFile" << std::endl;
        file.open(filename);
    }
    ~BufferFile()
    {
        std::cout << "Destruktor klasy BufferFile" << std::endl;
        file.close();
    }

    std::string getFilename() const { return filename; }
    void setFilename(const std::string& fname) { filename = fname; }

    void add(int a) override
    {
        file << a << std::endl;
    }

    void write() override
    {
        std::ifstream in(filename);
        int a;
        while (in >> a) {
            std::cout << a << " ";
        }
        std::cout << std::endl;
    }
};



#endif //LAB10_BUFFERFILE_H
