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
- (id)init;	// 0x328b40bd
- (void)clear;	// 0x328ba645
- (void)dealloc;	// 0x328af1a5
- (int)deleteObject:(unsigned)object;	// 0x328b8739
- (id)getObject:(unsigned)object;	// 0x32ae4ff9
- (unsigned)insertPos;	// 0x328b6021
- (int)putObject:(id)object :(unsigned)arg2;	// 0x328b5e31
- (int)selectInto:(int)into :(id)arg2;	// 0x328b6139
- (int)size;	// 0x3299d2e1
@end

