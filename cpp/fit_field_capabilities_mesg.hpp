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


#if !defined(FIT_FIELD_CAPABILITIES_MESG_HPP)
#define FIT_FIELD_CAPABILITIES_MESG_HPP

#include "fit_mesg.hpp"

namespace fit
{

class FieldCapabilitiesMesg : public Mesg
{
   public:
      FieldCapabilitiesMesg(void) : Mesg(Profile::MESG_FIELD_CAPABILITIES)
      {
      }

      FieldCapabilitiesMesg(const Mesg &mesg) : Mesg(mesg)
      {
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns message_index field
      ///////////////////////////////////////////////////////////////////////
      FIT_MESSAGE_INDEX GetMessageIndex(void) const
      {
         return GetFieldUINT16Value(254, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set message_index field
      ///////////////////////////////////////////////////////////////////////
      void SetMessageIndex(FIT_MESSAGE_INDEX messageIndex)
      {
         SetFieldUINT16Value(254, messageIndex, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns file field
      ///////////////////////////////////////////////////////////////////////
      FIT_FILE GetFile(void) const
      {
         return GetFieldENUMValue(0, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set file field
      ///////////////////////////////////////////////////////////////////////
      void SetFile(FIT_FILE file)
      {
         SetFieldENUMValue(0, file, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns mesg_num field
      ///////////////////////////////////////////////////////////////////////
      FIT_MESG_NUM GetMesgNum(void) const
      {
         return GetFieldUINT16Value(1, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set mesg_num field
      ///////////////////////////////////////////////////////////////////////
      void SetMesgNum(FIT_MESG_NUM mesgNum)
      {
         SetFieldUINT16Value(1, mesgNum, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns field_num field
      ///////////////////////////////////////////////////////////////////////
      FIT_UINT8 GetFieldNum(void) const
      {
         return GetFieldUINT8Value(2, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set field_num field
      ///////////////////////////////////////////////////////////////////////
      void SetFieldNum(FIT_UINT8 fieldNum)
      {
         SetFieldUINT8Value(2, fieldNum, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns count field
      ///////////////////////////////////////////////////////////////////////
      FIT_UINT16 GetCount(void) const
      {
         return GetFieldUINT16Value(3, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set count field
      ///////////////////////////////////////////////////////////////////////
      void SetCount(FIT_UINT16 count)
      {
         SetFieldUINT16Value(3, count, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

};

} // namespace fit

#endif // !defined(FIT_FIELD_CAPABILITIES_MESG_HPP)
