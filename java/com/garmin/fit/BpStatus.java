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


package com.garmin.fit;

public enum BpStatus {
   NO_ERROR((short)0),
   ERROR_INCOMPLETE_DATA((short)1),
   ERROR_NO_MEASUREMENT((short)2),
   ERROR_DATA_OUT_OF_RANGE((short)3),
   ERROR_IRREGULAR_HEART_RATE((short)4),
   INVALID((short)255);


   protected short value;




   private BpStatus(short value) {
     this.value = value;
   }

   public static BpStatus getByValue(final Short value) {
      for (final BpStatus type : BpStatus.values()) {
         if (value == type.value)
            return type;
      }

      return BpStatus.INVALID;
   }

   public short getValue() {
      return value;
   }


}
