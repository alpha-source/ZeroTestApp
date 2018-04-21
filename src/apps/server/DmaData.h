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
    int get_row() const;
    void set_row(int _row);
    int get_column() const;
    void set_column(int _column);
    void process();
    void generate();
    void format();
    void packege();
    virtual ~DmaData();
protected:
    int _row, _column;

};


#endif //ZERO_DMADATA_H
