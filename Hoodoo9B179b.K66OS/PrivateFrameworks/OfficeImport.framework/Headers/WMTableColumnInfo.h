/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface WMTableColumnInfo : NSObject {
@private
	NSMutableArray *mStopArray;	// 4 = 0x4
}
- (id)initWithStopArray:(id)stopArray;	// 0x3287a121
- (unsigned)columnSpan:(float)span at:(unsigned)at;	// 0x3287af0d
- (unsigned)count;	// 0x32a24e31
- (void)dealloc;	// 0x3287bfc1
- (void)mergeStopArray:(id)array;	// 0x3287a1a5
- (float)stopAt:(unsigned)at;	// 0x3287a365
@end
