/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

#import <NSObject.h> // Unknown library

@class NSData;

@interface PBCodable : NSObject {
}
@property(readonly, assign, nonatomic) NSData *data;	// G=0x36e44611; @dynamic
- (id)init;	// 0x36e4450d
- (id)initWithData:(id)data;	// 0x36e44539
// declared property getter: - (id)data;	// 0x36e44611
- (id)dictionaryRepresentation;	// 0x36e446d5
- (BOOL)readFrom:(id)from;	// 0x36e446a5
- (void)writeTo:(id)to;	// 0x36e446c1
@end

