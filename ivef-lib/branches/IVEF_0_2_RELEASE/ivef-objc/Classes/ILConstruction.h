/* 
 *  ILConstruction
 *
 *  ILConstruction is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Foobar is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY ); without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 **********************************************************************************
 *  WARNING: THIS CODE WAS GENERATED DO NOT MODIFY, CHANGE THE XSD INSTEAD
 *  Generated by xsd2code on Wed Jan 6 14:24:26 2010.
 **********************************************************************************
 *  Copyright 2010
 *
 */

#import <Foundation/Foundation.h>
#import "ILUnType.h"

//-----------------------------------------------------------
//! \brief       Class definition of ILConstruction
//!
//! attributes of the object regarding the physical construction
//!

@interface ILConstruction : NSObject { 
    ILUnType *m_unType;
    NSString *m_hullColor;
    bool m_hullColorPresent;
    int m_hullType;
    bool m_hullTypePresent;
    float m_length;
    bool m_lengthPresent;
    int m_lloydsShipType;
    bool m_lloydsShipTypePresent;
    float m_maxKeelHeight;
    bool m_maxKeelHeightPresent;
    float m_maxDraught;
    bool m_maxDraughtPresent;
    float m_maxPersonsOnBoard;
    bool m_maxPersonsOnBoardPresent;
    float m_maxSpeed;
    bool m_maxSpeedPresent;
    float m_width;
    bool m_widthPresent;
}


/* UnType:
   Object type according to CODES FOR TYPES OF MEANS OF TRANSPORT Revision 2 (UNECE CEFACT Trade Facilitation Recommendation No. 28 edition 2007) Check latest version */
//!Setter for UnType
//!
-(void) setUnType:(ILUnType *) val;
//!Getter for UnType
//!
-(ILUnType *) unType;

/* HullColor:
   Color of Hull (in RGB hex) for SAR operations */
//!Setter for HullColor
//!
-(void) setHullColor:(NSString *) val;
//!Getter for HullColor
//!
-(NSString *) hullColor;
//!Test for pressence of HullColor
//!
-(bool) hasHullColor;

/* HullType:
   Type of hull (1 = single,  2 = double, 3 =  triple) */
//!Setter for HullType
//!
-(void) setHullType:(int) val;
//!Getter for HullType
//!
-(int) hullType;
//!Test for pressence of HullType
//!
-(bool) hasHullType;

/* Length:
   Length of the target in meter as confirmed by NCA */
//!Setter for Length
//!
-(void) setLength:(float) val;
//!Getter for Length
//!
-(float) length;
//!Test for pressence of Length
//!
-(bool) hasLength;

/* LloydsShipType:
   Number indicating type of vessel */
//!Setter for LloydsShipType
//!
-(void) setLloydsShipType:(int) val;
//!Getter for LloydsShipType
//!
-(int) lloydsShipType;
//!Test for pressence of LloydsShipType
//!
-(bool) hasLloydsShipType;

/* MaxKeelHeight:
   Maximum height of the object, to be used if voyage data is not available */
//!Setter for MaxKeelHeight
//!
-(void) setMaxKeelHeight:(float) val;
//!Getter for MaxKeelHeight
//!
-(float) maxKeelHeight;
//!Test for pressence of MaxKeelHeight
//!
-(bool) hasMaxKeelHeight;

/* MaxDraught:
   Maximum draught of the object in meters, to be used if voyage data is not available */
//!Setter for MaxDraught
//!
-(void) setMaxDraught:(float) val;
//!Getter for MaxDraught
//!
-(float) maxDraught;
//!Test for pressence of MaxDraught
//!
-(bool) hasMaxDraught;

/* MaxPersonsOnBoard:
   The maximum number of persons on board of the object (crew, support, passengers, pilots) */
//!Setter for MaxPersonsOnBoard
//!
-(void) setMaxPersonsOnBoard:(float) val;
//!Getter for MaxPersonsOnBoard
//!
-(float) maxPersonsOnBoard;
//!Test for pressence of MaxPersonsOnBoard
//!
-(bool) hasMaxPersonsOnBoard;

/* MaxSpeed:
   The maximum speed the object is able to sustain with normal draft and load */
//!Setter for MaxSpeed
//!
-(void) setMaxSpeed:(float) val;
//!Getter for MaxSpeed
//!
-(float) maxSpeed;
//!Test for pressence of MaxSpeed
//!
-(bool) hasMaxSpeed;

/* Width:
   Width of the target in meter as confirmed by the NCA */
//!Setter for Width
//!
-(void) setWidth:(float) val;
//!Getter for Width
//!
-(float) width;
//!Test for pressence of Width
//!
-(bool) hasWidth;
//!Set attributes by providing a key/value dictionary
//!

-(void) setAttributes:(NSDictionary *)attributeDict;
//!Get attributes as a key/value dictionary
//!
-(NSDictionary *) attributes;
//!Get a XML representation of this class
//!
-(NSString *) XML;
//!Get a string representation of this class
//!
-(NSString *) stringValue;
-(NSString *) stringValueWithLead:(NSString *) lead;
//!Helper routine to encode any string to an XML escaped string
//!
-(NSString *) encode: (NSString *) input;

@end



