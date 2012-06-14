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
- (id)initForDeserializerStream:(id)deserializerStream;	// 0x31668efd
- (void)dealloc;	// 0x31668f39
- (id)deserializeData:(id)data;	// 0x31669055
- (id)deserializeList:(id)list;	// 0x31669251
- (id)deserializeListItemIn:(id)anIn at:(unsigned)at length:(unsigned)length;	// 0x3166935d
- (id)deserializeNewData;	// 0x31669005
- (id)deserializeNewKeyString;	// 0x3166911d
- (id)deserializeNewList;	// 0x31669201
- (id)deserializeNewObject;	// 0x31668f95
- (id)deserializeNewPList;	// 0x3166936d
- (id)deserializeNewString;	// 0x316690cd
- (id)deserializePList:(id)list;	// 0x316693bd
- (id)deserializePListKeyIn:(id)anIn;	// 0x31669651
- (id)deserializePListValueIn:(id)anIn key:(id)key length:(unsigned)length;	// 0x31669661
- (id)deserializeString:(id)string;	// 0x3166916d
- (id)deserializerStream;	// 0x31668f85
@end

