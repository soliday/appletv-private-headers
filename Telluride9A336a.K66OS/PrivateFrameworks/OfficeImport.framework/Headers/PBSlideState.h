/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface PBSlideState : NSObject {
@private
	NSMutableDictionary *mBuildOrderMap;	// 4 = 0x4
	unsigned mCurrentGroupId;	// 8 = 0x8
}
- (id)init;	// 0x34c2a579
- (void)addBuild:(id)build order:(unsigned)order;	// 0x34d9c4fd
- (id)buildOrderMap;	// 0x34d9c4a5
- (void)dealloc;	// 0x34c0b221
- (unsigned)generateGroupId;	// 0x34d9c4b5
- (void)reset;	// 0x34d9c555
@end
