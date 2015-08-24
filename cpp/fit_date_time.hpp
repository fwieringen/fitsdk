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


#if !defined(FIT_DATE_TIME_HPP)
#define FIT_DATE_TIME_HPP

#include <ctime>
#include <cmath>
#include "fit_profile.hpp"
namespace fit
{

class DateTime
{
   public:
      DateTime(time_t timeStamp);
      DateTime(FIT_DATE_TIME timeStamp);
      DateTime(FIT_DATE_TIME timeStamp, FIT_FLOAT64 fractionalTimeStamp);
      DateTime(const DateTime& dateTime);
      bool Equals(DateTime dateTime);
      FIT_DATE_TIME GetTimeStamp();
      FIT_FLOAT64 GetFractionalTimestamp();
      time_t GetTimeT();
      void ConvertSystemTimeToUTC(long offset);

   private:
      FIT_DATE_TIME timeStamp;
      FIT_FLOAT64 fractionalTimeStamp;
      static const time_t systemTimeOffset = 631065600; // Needed for conversion from UNIX time to FIT time
};

} // namespace fit

#endif // !defined(FIT_DATE_TIME_HPP)
