/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MPAction.h"
#import "MPActionSupport.h"

@class NSString;

@interface MPConditionalAction : MPAction <MPActionSupport> {
	NSString *_predicate;	// 16 = 0x10
	MPAction *_actionIfTrue;	// 20 = 0x14
	MPAction *_actionIfFalse;	// 24 = 0x18
}
@property(readonly, assign) MPAction *actionIfFalse;	// G=0x3200d50d; @synthesize=_actionIfFalse
@property(readonly, assign) MPAction *actionIfTrue;	// G=0x3200d4fd; @synthesize=_actionIfTrue
@property(copy, nonatomic) NSString *predicate;	// G=0x3200d4ed; S=0x3200ced1; @synthesize=_predicate
+ (id)conditionalAction;	// 0x3200cb39
- (id)init;	// 0x3200cb7d
- (id)initWithCoder:(id)coder;	// 0x3200cbd9
// declared property getter: - (id)actionIfFalse;	// 0x3200d50d
// declared property getter: - (id)actionIfTrue;	// 0x3200d4fd
- (void)configureActions;	// 0x3200d18d
- (void)configureTarget;	// 0x3200d495
- (id)copyWithZone:(NSZone *)zone;	// 0x3200cdf9
- (void)dealloc;	// 0x3200cccd
- (void)encodeWithCoder:(id)coder;	// 0x3200cd41
// declared property getter: - (id)predicate;	// 0x3200d4ed
- (void)setAction:(id)action;	// 0x3200d11d
- (void)setAction:(id)action forCondition:(BOOL)condition;	// 0x3200cf9d
// declared property setter: - (void)setPredicate:(id)predicate;	// 0x3200ced1
@end

