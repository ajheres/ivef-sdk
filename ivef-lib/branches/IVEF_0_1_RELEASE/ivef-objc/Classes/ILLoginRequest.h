/* 
 *  ILLoginRequest
 *
 *  ILLoginRequest is free software: you can redistribute it and/or modify
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
 *  Generated by xsd2code on Mon Apr 26 13:49:59 2010.
 **********************************************************************************
 *  Copyright 2010
 *
 */

#import <Foundation/Foundation.h>

//-----------------------------------------------------------
//! \brief       Class definition of ILLoginRequest
//!
//! DATA login message with details of the user
//!

@interface ILLoginRequest : NSObject { 
    NSString *m_name;
    BOOL m_namePresent;
    NSString *m_password;
    BOOL m_passwordPresent;
    int m_encryption;
    BOOL m_encryptionPresent;
}


/* Name:
   Login name */
//!Setter for Name
//!
-(BOOL) setName:(NSString *) val;
//!Getter for Name
//!
-(NSString *) name;

/* Password:
   Password value */
//!Setter for Password
//!
-(BOOL) setPassword:(NSString *) val;
//!Getter for Password
//!
-(NSString *) password;

/* Encryption:
   1 = plain 2 = md5 */
//!Setter for Encryption
//!
-(BOOL) setEncryption:(int) val;
//!Getter for Encryption
//!
-(int) encryption;
//!Set attributes by providing a key/value dictionary
//!

-(BOOL) setAttributes:(NSDictionary *)attributeDict;
//!Get attributes as a key/value dictionary
//!
-(NSDictionary *) attributes;
//!Get a XML representation of this class
//!returns nil if not all required fields are set
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



