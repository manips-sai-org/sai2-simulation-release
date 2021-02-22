//===========================================================================
/*
    This file is part of the dynamics library.
    Copyright (C) 2014, Artificial Intelligence Laboratory,
    Stanford University. All rights reserved.

    \version   $MAJOR.$MINOR.$RELEASE $Rev: 1242 $
*/
//===========================================================================

//---------------------------------------------------------------------------
#ifndef CDynReferenceH
#define CDynReferenceH
//---------------------------------------------------------------------------

class cDynReference
{
    //----------------------------------------------------------------------
    // CONSTRUCTOR & DESTRUCTOR:
    //----------------------------------------------------------------------

public:
    cDynReference() { rc_=1; }
    

    //----------------------------------------------------------------------
    // PUBLIC METHODS:
    //----------------------------------------------------------------------
public:
    inline void reference(); { rc_++; }
    inline void unreference(); { rc_--; }
    inline const int count() const { return rc_; }


    //----------------------------------------------------------------------
    // PRIVATE MEMBERS:
    //----------------------------------------------------------------------
private:
    int rc_;
};

//---------------------------------------------------------------------------
#endif
//---------------------------------------------------------------------------