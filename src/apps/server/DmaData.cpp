//
// Created by sande on 4/20/2018.
//

#include "DmaData.h"

DmaData::DmaData()
{
    this->_column = DMA_DATA_COLUMN_LENGTH;
    this->_row = DMA_DATA_ROW_LENGTH;
}
DmaData::~DmaData()
{

}
int DmaData::get_row() const
{
    return _row;
}
void DmaData::set_row(int _row)
{
    DmaData::_row = _row;
}
int DmaData::get_column() const
{
    return _column;
}
void DmaData::set_column(int _column)
{
    DmaData::_column = _column;
}
