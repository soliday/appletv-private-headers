/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <NSData.h> // Unknown library
#import "ASParsingLeafNode.h"


@interface NSData (WBXMLAdditions) <ASParsingLeafNode>
+ (BOOL)acceptsTopLevelLeaves;	// 0x321a0671
+ (BOOL)expectsContent;	// 0x321a0acd
+ (BOOL)frontingBasicTypes;	// 0x321a076d
+ (BOOL)notifyOfUnknownTokens;	// 0x321a07c1
+ (BOOL)parsingLeafNode;	// 0x321a06c5
+ (BOOL)parsingWithSubItems;	// 0x321a0719
- (id)initForLengthTokenOfLength:(unsigned)length;	// 0x321a0ad1
- (id)initWithASParseContext:(id)asparseContext root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 lengthUntilEndOfTerminator:(int)terminator;	// 0x321a0815
- (int)parsingState;	// 0x321a0ac9
@end

