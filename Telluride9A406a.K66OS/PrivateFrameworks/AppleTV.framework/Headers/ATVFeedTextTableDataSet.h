/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSArray;

__attribute__((visibility("hidden")))
@interface ATVFeedTextTableDataSet : NSObject {
@private
	NSMutableArray *_rows;	// 4 = 0x4
	NSArray *_headerLabels;	// 8 = 0x8
}
@property(retain) NSArray *headerLabels;	// G=0x32feecc9; S=0x32feecdd; @synthesize=_headerLabels
@property(readonly, assign) NSArray *rows;	// G=0x32feec49; 
- (id)init;	// 0x32feeb8d
- (void)addRow:(id)row;	// 0x32feec59
- (void)dealloc;	// 0x32feebe9
// declared property getter: - (id)headerLabels;	// 0x32feecc9
// declared property getter: - (id)rows;	// 0x32feec49
// declared property setter: - (void)setHeaderLabels:(id)labels;	// 0x32feecdd
@end

