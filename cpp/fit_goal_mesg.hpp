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


#if !defined(FIT_GOAL_MESG_HPP)
#define FIT_GOAL_MESG_HPP

#include "fit_mesg.hpp"

namespace fit
{

class GoalMesg : public Mesg
{
   public:
      GoalMesg(void) : Mesg(Profile::MESG_GOAL)
      {
      }

      GoalMesg(const Mesg &mesg) : Mesg(mesg)
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
      // Returns sport field
      ///////////////////////////////////////////////////////////////////////
      FIT_SPORT GetSport(void) const
      {
         return GetFieldENUMValue(0, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set sport field
      ///////////////////////////////////////////////////////////////////////
      void SetSport(FIT_SPORT sport)
      {
         SetFieldENUMValue(0, sport, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns sub_sport field
      ///////////////////////////////////////////////////////////////////////
      FIT_SUB_SPORT GetSubSport(void) const
      {
         return GetFieldENUMValue(1, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set sub_sport field
      ///////////////////////////////////////////////////////////////////////
      void SetSubSport(FIT_SUB_SPORT subSport)
      {
         SetFieldENUMValue(1, subSport, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns start_date field
      ///////////////////////////////////////////////////////////////////////
      FIT_DATE_TIME GetStartDate(void) const
      {
         return GetFieldUINT32Value(2, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set start_date field
      ///////////////////////////////////////////////////////////////////////
      void SetStartDate(FIT_DATE_TIME startDate)
      {
         SetFieldUINT32Value(2, startDate, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns end_date field
      ///////////////////////////////////////////////////////////////////////
      FIT_DATE_TIME GetEndDate(void) const
      {
         return GetFieldUINT32Value(3, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set end_date field
      ///////////////////////////////////////////////////////////////////////
      void SetEndDate(FIT_DATE_TIME endDate)
      {
         SetFieldUINT32Value(3, endDate, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns type field
      ///////////////////////////////////////////////////////////////////////
      FIT_GOAL GetType(void) const
      {
         return GetFieldENUMValue(4, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set type field
      ///////////////////////////////////////////////////////////////////////
      void SetType(FIT_GOAL type)
      {
         SetFieldENUMValue(4, type, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns value field
      ///////////////////////////////////////////////////////////////////////
      FIT_UINT32 GetValue(void) const
      {
         return GetFieldUINT32Value(5, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set value field
      ///////////////////////////////////////////////////////////////////////
      void SetValue(FIT_UINT32 value)
      {
         SetFieldUINT32Value(5, value, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns repeat field
      ///////////////////////////////////////////////////////////////////////
      FIT_BOOL GetRepeat(void) const
      {
         return GetFieldENUMValue(6, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set repeat field
      ///////////////////////////////////////////////////////////////////////
      void SetRepeat(FIT_BOOL repeat)
      {
         SetFieldENUMValue(6, repeat, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns target_value field
      ///////////////////////////////////////////////////////////////////////
      FIT_UINT32 GetTargetValue(void) const
      {
         return GetFieldUINT32Value(7, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set target_value field
      ///////////////////////////////////////////////////////////////////////
      void SetTargetValue(FIT_UINT32 targetValue)
      {
         SetFieldUINT32Value(7, targetValue, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns recurrence field
      ///////////////////////////////////////////////////////////////////////
      FIT_GOAL_RECURRENCE GetRecurrence(void) const
      {
         return GetFieldENUMValue(8, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set recurrence field
      ///////////////////////////////////////////////////////////////////////
      void SetRecurrence(FIT_GOAL_RECURRENCE recurrence)
      {
         SetFieldENUMValue(8, recurrence, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns recurrence_value field
      ///////////////////////////////////////////////////////////////////////
      FIT_UINT16 GetRecurrenceValue(void) const
      {
         return GetFieldUINT16Value(9, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set recurrence_value field
      ///////////////////////////////////////////////////////////////////////
      void SetRecurrenceValue(FIT_UINT16 recurrenceValue)
      {
         SetFieldUINT16Value(9, recurrenceValue, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns enabled field
      ///////////////////////////////////////////////////////////////////////
      FIT_BOOL GetEnabled(void) const
      {
         return GetFieldENUMValue(10, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set enabled field
      ///////////////////////////////////////////////////////////////////////
      void SetEnabled(FIT_BOOL enabled)
      {
         SetFieldENUMValue(10, enabled, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

};

} // namespace fit

#endif // !defined(FIT_GOAL_MESG_HPP)
