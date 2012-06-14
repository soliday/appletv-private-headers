/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "WDBlock.h"

@class NSMutableArray, WDTableProperties;

__attribute__((visibility("hidden")))
@interface WDTable : WDBlock {
@private
	WDTableProperties *mProperties;	// 8 = 0x8
	NSMutableArray *mRows;	// 12 = 0xc
}
- (id)initWithText:(id)text;	// 0x31222d11
- (id)addRow;	// 0x312238b5
- (int)blockType;	// 0x31229425
- (id)cellIterator;	// 0x31379ba9
- (void)clearProperties;	// 0x31379ccd
- (void)clearRows;	// 0x31379ca1
- (void)dealloc;	// 0x31186e71
- (int)nestingLevel;	// 0x312251fd
- (id)newCellIterator;	// 0x31379b4d
- (id)newRowIterator;	// 0x31379c09
- (id)newRunIterator;	// 0x31379a91
- (id)properties;	// 0x312231a9
- (id)rowAt:(int)at;	// 0x31229f11
- (int)rowCount;	// 0x31223b3d
- (id)rowIterator;	// 0x31379c4d
- (id)runIterator;	// 0x31379aed
@end

