//
// Created by sande on 4/20/2018.
//

#ifndef ZERO_DMADATA_H
#define ZERO_DMADATA_H

#include <iostream>
#include <memory>

#define DMA_DATA_ROW_LENGTH 80
#define DMA_DATA_COLUMN_LENGTH 780

class DmaData;

typedef std::shared_ptr<DmaData> DmaDataRef;

class DmaData
{

public:
    DmaData();
    virtual ~DmaData();
protected:
    unsigned int get_length() const;
    void initDmaData();
    void process();
    void generate();
    void format();
    void packege();
    unsigned char *get_pData() const;
    void set_pData(unsigned char *_pData);
    void demo();

protected:
    unsigned int _row, _column;
    unsigned char * _pData;
    unsigned int _length;
};


#endif //ZERO_DMADATA_H
