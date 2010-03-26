/* 
 *  ILWaypoint
 *
 *  ILWaypoint is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Fri Mar 26 13:53:32 2010.
 **********************************************************************************
 *  Copyright 2010
 *
 */

#import <Foundation/Foundation.h>
#import "ILPos.h"

//-----------------------------------------------------------
//! \brief       Class definition of ILWaypoint
//!
//! Waypoint belonging to the route of this voyage
//!

@interface ILWaypoint : NSObject { 
    ILPos *m_pos;
    NSDate *m_ATA;
    bool m_ATAPresent;
    NSDate *m_ETA;
    bool m_ETAPresent;
    NSDate *m_RTA;
    bool m_RTAPresent;
    NSString *m_loCode;
    bool m_loCodePresent;
    NSString *m_name;
}

//!Setter for Pos
//!
-(void) setPos:(ILPos *) val;
//!Getter for Pos
//!
-(ILPos *) pos;

/* ATA:
   Date and time in UTC format (YYYY-MM-DDThh:mmZ) (subset of ISO 8601 ) of the Actual Time Of Arrival of the target. */
//!Setter for ATA
//!
-(void) setATA:(NSDate *) val;
//!Getter for ATA
//!
-(NSDate *) ATA;
//!Test for pressence of ATA
//!
-(bool) hasATA;

/* ETA:
   Date and time in UTC format (YYYY-MM-DDThh:mmZ) (subset of ISO 8601) of the Expected Time Of Arrival of the target. */
//!Setter for ETA
//!
-(void) setETA:(NSDate *) val;
//!Getter for ETA
//!
-(NSDate *) ETA;
//!Test for pressence of ETA
//!
-(bool) hasETA;

/* RTA:
   Date and time in UTC format (YYYY-MM-DDThh:mmZ) (subset of ISO 8601) of the Requested Time Of Arrival of the target. */
//!Setter for RTA
//!
-(void) setRTA:(NSDate *) val;
//!Getter for RTA
//!
-(NSDate *) RTA;
//!Test for pressence of RTA
//!
-(bool) hasRTA;

/* LoCode:
   Waypoint name in UN/LOCODE optionally addended with local location code (e.g. BEANR0170100497 = Antwerp, HANSADOK 497) */
//!Setter for LoCode
//!
-(void) setLoCode:(NSString *) val;
//!Getter for LoCode
//!
-(NSString *) loCode;
//!Test for pressence of LoCode
//!
-(bool) hasLoCode;

/* Name:
   Name of the waypoint */
//!Setter for Name
//!
-(void) setName:(NSString *) val;
//!Getter for Name
//!
-(NSString *) name;
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



