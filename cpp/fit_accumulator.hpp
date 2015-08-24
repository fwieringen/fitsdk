////////////////////////////////////////////////////////////////////////////////
// The following FIT Protocol software provided may be used with FIT protocol
// devices only and remains the copyrighted property of Dynastream Innovations Inc.
// The software is being provided on an "as-is" basis and as an accommodation,
// and therefore all warranties, representations, or guarantees of any kind
// (whether express, implied or statutory) including, without limitation,
// warranties of merchantability, non-infringement, or fitness for a particular
// purpose, are specifically disclaimed.
//
// Copyright 2015 Dynastream Innovations Inc.
////////////////////////////////////////////////////////////////////////////////
// ****WARNING****  This file is auto-generated!  Do NOT edit this file.
// Profile Version = 15.20Release
// Tag = development-akw-15.20.00-0
////////////////////////////////////////////////////////////////////////////////


#if !defined(FIT_ACCUMULATOR_HPP)
#define FIT_ACCUMULATOR_HPP

#include <vector>
#include "fit_accumulated_field.hpp"

namespace fit
{

class Accumulator
{
   public: 
      FIT_UINT32 Accumulate(const FIT_UINT16 mesgNum, const FIT_UINT8 fieldNum, const FIT_UINT8 componentNum, const FIT_UINT32 value, const FIT_UINT8 bits);

   private: 
      std::vector<AccumulatedField> fields;
};

} // namespace fit

#endif // defined(FIT_ACCUMULATOR_HPP)

