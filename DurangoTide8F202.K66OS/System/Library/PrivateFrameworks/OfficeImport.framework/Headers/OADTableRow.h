/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OADTableRow : NSObject {
@private
	NSMutableArray *mCells;	// 4 = 0x4
	float mHeight;	// 8 = 0x8
}
@property(assign) float height;	// G=0x319f70a5; S=0x319f51d5; converted property
- (id)init;	// 0x319f5179
- (id)addCell;	// 0x319f51e5
- (id)cellAtIndex:(unsigned)index;	// 0x319f59a9
- (unsigned)cellCount;	// 0x319f5989
- (void)dealloc;	// 0x319f7669
// converted property getter: - (float)height;	// 0x319f70a5
// converted property setter: - (void)setHeight:(float)height;	// 0x319f51d5
@end
