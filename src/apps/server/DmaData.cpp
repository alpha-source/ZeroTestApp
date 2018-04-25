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
    delete (_pData);
}
void DmaData::process()
{

}
void DmaData::generate()
{
    for (unsigned int i = 0; i < this->get_length(); i++) {
        _pData[i] = (unsigned char) i;

    }

}
void DmaData::format()
{

}
void DmaData::packege()
{

}
void DmaData::initDmaData()
{
    _pData = new unsigned char[this->get_length()];
}
unsigned char *DmaData::get_pData() const
{
    return _pData;
}
void DmaData::set_pData(unsigned char *_pData)
{
    DmaData::_pData = _pData;
}
unsigned int DmaData::get_length() const
{
    return (_row * _column);
}
void DmaData::demo()
{
    for (unsigned int i = 0; i < this->get_length(); i++) {
        printf("%X ",_pData[i] );
    }
    std::cout<<std::endl<<std::endl;

}

