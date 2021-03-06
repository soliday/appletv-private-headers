/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTextControl, NSString, BRMarqueeTextControl;

__attribute__((visibility("hidden")))
@interface GeniusMixClusterDescriptionView : BRControl {
@private
	BRTextControl *_clusterNameControl;	// 48 = 0x30
	BRTextControl *_basedOnLabelControl;	// 52 = 0x34
	BRMarqueeTextControl *_basedOnTextControl;	// 56 = 0x38
}
@property(copy, nonatomic) NSString *basedOnText;	// G=0x367acb51; S=0x367acb89; 
@property(copy, nonatomic) NSString *clusterName;	// G=0x367acb19; S=0x367aca99; 
- (id)init;	// 0x367ac8cd
// declared property getter: - (id)basedOnText;	// 0x367acb51
// declared property getter: - (id)clusterName;	// 0x367acb19
- (void)dealloc;	// 0x367aca25
- (void)layoutSubcontrols;	// 0x367acc09
// declared property setter: - (void)setBasedOnText:(id)text;	// 0x367acb89
// declared property setter: - (void)setClusterName:(id)name;	// 0x367aca99
@end

