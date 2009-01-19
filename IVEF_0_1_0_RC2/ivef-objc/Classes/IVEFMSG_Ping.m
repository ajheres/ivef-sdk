
#import "IVEFMSG_Ping.h"


@implementation IVEFMSG_Ping

- (id) init {
    self = [super init];
    if (self != nil) {
        m_dateFormatter = [[NSDateFormatter alloc] init];
        [m_dateFormatter setDateFormat:@"yyyy-MM-dd'T'HH:mm:ss.SSS"];
    }
    return self;
}

-(void) setHeader:(IVEFHeader *) val {

    [m_header release];
    m_header = val;
    [m_header retain];
}

- (IVEFHeader *) getHeader {

    return m_header;
}

-(void) setBody:(IVEFBody *) val {

    [m_body release];
    m_body = val;
    [m_body retain];
}

- (IVEFBody *) getBody {

    return m_body;
}

-(void) setAttributes:(NSDictionary *)attributeDict {

        for (NSString *key in attributeDict) {
            if ([key isEqualToString: @"Header"]) {
                IVEFHeader * val = [attributeDict objectForKey: key];
                [self setHeader: val];
            }
            else if ([key isEqualToString:@"Body"]) {
                IVEFBody * val = [attributeDict objectForKey: key];
                [self setBody: val];
            }
        }
}

-(NSString *) XML {

    NSMutableString *xml = [NSMutableString stringWithString:@"<MSG_Ping"];
    [xml appendString:@">\n"];
    [xml appendString: [m_header XML] ];
    [xml appendString: [m_body XML] ];
    [xml appendString: @"</MSG_Ping>\n"];
    return xml;
}

-(NSString *) stringValueWithLead: (NSString *) lead {

    NSMutableString *str = [[[NSMutableString alloc] init] autorelease];
    [str setString: [lead stringByAppendingString:@"MSG_Ping\n"]];
    [str appendString: [m_header stringValueWithLead: [lead stringByAppendingString: @"    "]] ];
    [str appendString: [m_body stringValueWithLead: [lead stringByAppendingString: @"    "]] ];
    return str;
}


@end


