/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library


@interface NSAKDeserializer : NSObject {
	id ds;	// 4 = 0x4
}
- (id)initForDeserializerStream:(id)deserializerStream;	// 0x31de8efd
- (void)dealloc;	// 0x31de8f39
- (id)deserializeData:(id)data;	// 0x31de9055
- (id)deserializeList:(id)list;	// 0x31de9251
- (id)deserializeListItemIn:(id)anIn at:(unsigned)at length:(unsigned)length;	// 0x31de935d
- (id)deserializeNewData;	// 0x31de9005
- (id)deserializeNewKeyString;	// 0x31de911d
- (id)deserializeNewList;	// 0x31de9201
- (id)deserializeNewObject;	// 0x31de8f95
- (id)deserializeNewPList;	// 0x31de936d
- (id)deserializeNewString;	// 0x31de90cd
- (id)deserializePList:(id)list;	// 0x31de93bd
- (id)deserializePListKeyIn:(id)anIn;	// 0x31de9651
- (id)deserializePListValueIn:(id)anIn key:(id)key length:(unsigned)length;	// 0x31de9661
- (id)deserializeString:(id)string;	// 0x31de916d
- (id)deserializerStream;	// 0x31de8f85
@end

