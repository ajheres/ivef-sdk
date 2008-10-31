/* 
 *  IVEFObject
 *
 *  IVEFObject is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Fri Oct 31 17:00:48 2008.
 **********************************************************************************
 *  Copyright 2008
 *
 */

#import <Cocoa/Cocoa.h>

@interface IVEFObject : NSObject { 
    NSString *m_fileName;
}


/* FileName:
   Name of the filter. The filter can be a predefined selector or can be defined here in the future. One of the predefined selectors will be 'all' */
-(void) setFileName:(NSString *) val;
-(NSString *) getFileName;

-(void) setAttributes:(NSDictionary *)attributeDict;
-(NSString *) XML;
-(NSString *) stringValueWithLead:(NSString *) lead;

@end



