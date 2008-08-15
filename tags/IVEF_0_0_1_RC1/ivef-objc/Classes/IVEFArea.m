
#import "IVEFArea.h"


@implementation IVEFArea

- (id) init {
    self = [super init];
    if (self != nil) {
        m_poss = [[NSMutableArray alloc] init];
    }
    return self;
}

-(void) addPos:(IVEFPos *) val {

    [m_poss addObject: val];
}

-(IVEFPos *) getPosAt:(int) i {

    return [m_poss objectAtIndex: i];
}

-(int) countOfPoss {

    return [m_poss count];
}

-(void) setAttributes:(NSDictionary *)attributeDict {

        for (NSString *key in attributeDict) {
            if ([key isEqualToString: @"Pos"]) {
                IVEFPos * val = [attributeDict objectForKey: key];
                [self addPos: val];
            }
        }
}

-(NSString *) XML {

    NSMutableString *xml = [NSString stringWithString:@"<Area"];
    [xml appendString:@">\n"];
    for(int i=0; i < [m_poss count]; i++ ) {
        IVEFPos *attribute = [m_poss objectAtIndex:i];
        [xml appendString: [attribute XML] ];
    }
    [xml appendString: @"</Area>\n"];
    return xml;
}

-(NSString *) stringValueWithLead: (NSString *) lead {

    NSMutableString *str = [[[NSMutableString alloc] init] autorelease];
    [str setString: [lead stringByAppendingString:@"Area\n"]];
    for(int i=0; i < [m_poss count]; i++ ) {
        IVEFPos *attribute = [m_poss objectAtIndex:i];
        [str appendString: [attribute stringValueWithLead: [lead stringByAppendingString: @" "]] ];
    }
    return str;
}


@end


