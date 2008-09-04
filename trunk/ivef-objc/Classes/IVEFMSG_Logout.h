/* 
 *  IVEFMSG_Logout
 *
 *  IVEFMSG_Logout is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Thu Sep 4 16:09:19 2008.
 **********************************************************************************
 *  Copyright 2008
 *
 */

#import <Cocoa/Cocoa.h>
#import "IVEFHeader.h"
#import "IVEFBody.h"

@interface IVEFMSG_Logout : NSObject { 
    IVEFHeader *m_header;
    IVEFBody *m_body;
}

-(void) setHeader:(IVEFHeader *) val;
-(IVEFHeader *) getHeader;
-(void) setBody:(IVEFBody *) val;
-(IVEFBody *) getBody;

-(void) setAttributes:(NSDictionary *)attributeDict;
-(NSString *) XML;
-(NSString *) stringValueWithLead:(NSString *) lead;

@end



