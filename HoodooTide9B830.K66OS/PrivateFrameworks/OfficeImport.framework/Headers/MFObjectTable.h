/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface MFObjectTable : NSObject {
@private
	NSMutableArray *m_objects;	// 4 = 0x4
}
- (id)init;	// 0x3117b0bd
- (void)clear;	// 0x31181645
- (void)dealloc;	// 0x311761a5
- (int)deleteObject:(unsigned)object;	// 0x3117f739
- (id)getObject:(unsigned)object;	// 0x313abff9
- (unsigned)insertPos;	// 0x3117d021
- (int)putObject:(id)object :(unsigned)arg2;	// 0x3117ce31
- (int)selectInto:(int)into :(id)arg2;	// 0x3117d139
- (int)size;	// 0x312642e1
@end

