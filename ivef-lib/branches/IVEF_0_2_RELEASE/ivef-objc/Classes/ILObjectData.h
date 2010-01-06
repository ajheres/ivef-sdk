/* 
 *  ILObjectData
 *
 *  ILObjectData is free software: you can redistribute it and/or modify
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
#import "ILTrackData.h"
#import "ILVesselData.h"
#import "ILVoyageData.h"
#import "ILTaggedItem.h"

//-----------------------------------------------------------
//! \brief       Class definition of ILObjectData
//!
//! DATA regarding an object in the supliers domain, contains at least 1 one of the sub elements (TrackData, VesselData, VoyageData)
//!

@interface ILObjectData : NSObject { 
    ILTrackData *m_trackData;
    NSMutableArray *m_vesselDatas;
    NSMutableArray *m_voyageDatas;
    NSMutableArray *m_taggedItems;
}

//!Setter for TrackData
//!
-(void) setTrackData:(ILTrackData *) val;
//!Getter for TrackData
//!
-(ILTrackData *) trackData;
//!Setter for VesselData
//!
-(void) addVesselData:(ILVesselData *) val;
//!Getter for VesselData
//!
-(ILVesselData *) vesselDataAt:(int) i;
//!Element counter for VesselData
//!
-(int) countOfVesselDatas;
//!Get all elements for VesselData
//!
-(NSArray *) vesselDatas;
//!Setter for VoyageData
//!
-(void) addVoyageData:(ILVoyageData *) val;
//!Getter for VoyageData
//!
-(ILVoyageData *) voyageDataAt:(int) i;
//!Element counter for VoyageData
//!
-(int) countOfVoyageDatas;
//!Get all elements for VoyageData
//!
-(NSArray *) voyageDatas;
//!Setter for TaggedItem
//!
-(void) addTaggedItem:(ILTaggedItem *) val;
//!Getter for TaggedItem
//!
-(ILTaggedItem *) taggedItemAt:(int) i;
//!Element counter for TaggedItem
//!
-(int) countOfTaggedItems;
//!Get all elements for TaggedItem
//!
-(NSArray *) taggedItems;
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



