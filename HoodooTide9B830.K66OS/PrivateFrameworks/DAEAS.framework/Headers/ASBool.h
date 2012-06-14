/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"
#import "ASParsingFrontingBasicType.h"


@interface ASBool : ASItem <ASParsingFrontingBasicType> {
}
+ (BOOL)acceptsTopLevelLeaves;	// 0x31875071
+ (BOOL)expectsContent;	// 0x318752a5
+ (BOOL)frontingBasicTypes;	// 0x3187516d
+ (BOOL)notifyOfUnknownTokens;	// 0x318751c1
+ (BOOL)parsingLeafNode;	// 0x318750c5
+ (BOOL)parsingWithSubItems;	// 0x31875119
- (id)commonValue;	// 0x31875215
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x31875235
- (int)parsingState;	// 0x318752a1
@end
