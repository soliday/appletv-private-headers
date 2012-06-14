/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSNumber, NSArray;

@interface ASItemOperationsResponse : ASItem {
	NSNumber *_status;	// 40 = 0x28
	NSArray *_fetchResponses;	// 44 = 0x2c
}
@property(retain) NSArray *fetchResponses;	// G=0x321b4d01; S=0x321b4d11; converted property
@property(retain) NSNumber *status;	// G=0x321b5139; S=0x321b50f5; converted property
+ (BOOL)acceptsTopLevelLeaves;	// 0x321b4b5d
+ (BOOL)frontingBasicTypes;	// 0x321b4c59
+ (BOOL)notifyOfUnknownTokens;	// 0x321b4cad
+ (BOOL)parsingLeafNode;	// 0x321b4bb1
+ (BOOL)parsingWithSubItems;	// 0x321b4c05
- (id)asParseRules;	// 0x321b4d55
- (void)dealloc;	// 0x321b5171
- (id)description;	// 0x321b5089
// converted property getter: - (id)fetchResponses;	// 0x321b4d01
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x321b4f75
// converted property setter: - (void)setFetchResponses:(id)responses;	// 0x321b4d11
// converted property setter: - (void)setStatus:(id)status;	// 0x321b50f5
// converted property getter: - (id)status;	// 0x321b5139
@end

