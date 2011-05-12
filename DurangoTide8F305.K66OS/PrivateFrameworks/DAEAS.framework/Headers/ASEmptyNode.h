/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"
#import "ASParsingFrontingBasicType.h"


@interface ASEmptyNode : ASItem <ASParsingFrontingBasicType> {
	Class _expectedClassType;	// 40 = 0x28
}
+ (BOOL)acceptsTopLevelLeaves;	// 0x302f9d39
+ (BOOL)frontingBasicTypes;	// 0x302f9c61
+ (BOOL)notifyOfUnknownTokens;	// 0x302f9c19
+ (BOOL)parsingLeafNode;	// 0x302f9cf1
+ (BOOL)parsingWithSubItems;	// 0x302f9ca9
- (id)initWithExpectedClassType:(Class)expectedClassType;	// 0x302f9ac1
- (id)commonValue;	// 0x302f9afd
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x302f9bb1
- (int)parsingState;	// 0x302f9abd
@end
