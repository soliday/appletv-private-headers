/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSMutableArray, NSArray;

@interface BRTableView : BRControl {
@private
	id _dataSource;	// 48 = 0x30
	id _delegate;	// 52 = 0x34
	BOOL _showingHeader;	// 56 = 0x38
	NSArray *_rows;	// 60 = 0x3c
	NSMutableArray *_widthValues;	// 64 = 0x40
	BOOL _reloadNeeded;	// 68 = 0x44
	BOOL _rowsUseColorBanding;	// 69 = 0x45
}
@property(assign, nonatomic) id dataSource;	// G=0x3666ee05; S=0x3666e8cd; @synthesize=_dataSource
@property(assign, nonatomic) id delegate;	// G=0x3666ee15; S=0x3666ee25; @synthesize=_delegate
@property(assign, nonatomic) BOOL rowsUseColorBanding;	// G=0x3666ee35; S=0x3666ee45; @synthesize=_rowsUseColorBanding
- (id)init;	// 0x3666e829
- (void)_createRows;	// 0x3666ee55
- (void)_reloadIfNeeded;	// 0x3666f509
- (id)_widthValues;	// 0x3666f2ad
- (id)accessibilityLabel;	// 0x3666f395
// declared property getter: - (id)dataSource;	// 0x3666ee05
- (void)dealloc;	// 0x3666e86d
// declared property getter: - (id)delegate;	// 0x3666ee15
- (float)headerYOrigin;	// 0x3666e94d
- (void)layoutSubcontrols;	// 0x3666eb7d
- (void)reload;	// 0x3666e8ed
// declared property getter: - (BOOL)rowsUseColorBanding;	// 0x3666ee35
// declared property setter: - (void)setDataSource:(id)source;	// 0x3666e8cd
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3666ee25
// declared property setter: - (void)setRowsUseColorBanding:(BOOL)banding;	// 0x3666ee45
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3666e9d1
@end
