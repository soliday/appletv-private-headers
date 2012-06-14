/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UITableViewUpdateGap, NSIndexPath;

__attribute__((visibility("hidden")))
@interface UIUpdateItem : NSObject {
@private
	int _action;	// 4 = 0x4
	NSIndexPath *_indexPath;	// 8 = 0x8
	int _animation;	// 12 = 0xc
	float _offset;	// 16 = 0x10
	UITableViewUpdateGap *_gap;	// 20 = 0x14
	BOOL _headerFooterOnly;	// 24 = 0x18
	BOOL _skipAnimation;	// 25 = 0x19
}
@property(readonly, assign, nonatomic) int action;	// G=0x30139ea9; @synthesize=_action
@property(assign, nonatomic) int animation;	// G=0x30138b7d; S=0x3020613d; @synthesize=_animation
@property(assign, nonatomic) UITableViewUpdateGap *gap;	// G=0x30301819; S=0x30301829; @synthesize=_gap
@property(assign, nonatomic) BOOL headerFooterOnly;	// G=0x30301839; S=0x30301849; @synthesize=_headerFooterOnly
@property(readonly, assign, nonatomic) NSIndexPath *indexPath;	// G=0x30138b6d; @synthesize=_indexPath
@property(assign, nonatomic) float offset;	// G=0x303017f9; S=0x30301809; @synthesize=_offset
@property(assign, nonatomic) BOOL skipAnimation;	// G=0x30301859; S=0x30301869; @synthesize=_skipAnimation
- (id)initWithAction:(int)action forIndexPath:(id)indexPath animation:(int)animation;	// 0x30136b19
- (id)_actionDescription;	// 0x303017a1
// declared property getter: - (int)action;	// 0x30139ea9
// declared property getter: - (int)animation;	// 0x30138b7d
- (int)compareIndexPaths:(id)paths;	// 0x301a7969
- (void)dealloc;	// 0x30142ad1
// declared property getter: - (id)gap;	// 0x30301819
// declared property getter: - (BOOL)headerFooterOnly;	// 0x30301839
// declared property getter: - (id)indexPath;	// 0x30138b6d
- (int)inverseCompareIndexPaths:(id)paths;	// 0x301ac591
- (BOOL)isSectionOperation;	// 0x30138b8d
// declared property getter: - (float)offset;	// 0x303017f9
// declared property setter: - (void)setAnimation:(int)animation;	// 0x3020613d
// declared property setter: - (void)setGap:(id)gap;	// 0x30301829
// declared property setter: - (void)setHeaderFooterOnly:(BOOL)only;	// 0x30301849
// declared property setter: - (void)setOffset:(float)offset;	// 0x30301809
// declared property setter: - (void)setSkipAnimation:(BOOL)animation;	// 0x30301869
// declared property getter: - (BOOL)skipAnimation;	// 0x30301859
@end
