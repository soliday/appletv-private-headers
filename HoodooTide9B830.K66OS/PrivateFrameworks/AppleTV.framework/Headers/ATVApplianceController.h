/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "ATVApplianceViewDelegate.h"
#import "ATVApplianceTopPanelControlDelegate.h"
#import "BRSubControllerHosting.h"
#import "BRViewController.h"

@class ATVApplianceUIHints, ATVApplianceView;
@protocol BRAppliance;

@interface ATVApplianceController : BRViewController <ATVApplianceViewDelegate, ATVApplianceTopPanelControlDelegate, BRSubControllerHosting> {
@private
	id<BRAppliance> _appliance;	// 88 = 0x58
	ATVApplianceUIHints *_UIHints;	// 92 = 0x5c
	BRController *_hostingSubController;	// 96 = 0x60
}
@property(retain, nonatomic) ATVApplianceUIHints *UIHints;	// G=0x32b2877d; S=0x32b2878d; @synthesize=_UIHints
@property(readonly, assign, nonatomic) ATVApplianceView *_applianceView;	// G=0x32b28429; @dynamic
@property(retain, nonatomic, setter=_setHostingSubController:) BRController *_hostingSubController;	// G=0x32b287b1; S=0x32b27e81; @synthesize
@property(retain, nonatomic) id<BRAppliance> appliance;	// G=0x32b28749; S=0x32b28759; @synthesize=_appliance
- (id)initWithAppliance:(id)appliance;	// 0x32b27c8d
// declared property getter: - (id)UIHints;	// 0x32b2877d
- (void)_applianceCategoriesUpdated:(id)updated;	// 0x32b28721
// declared property getter: - (id)_applianceView;	// 0x32b28429
// declared property getter: - (id)_hostingSubController;	// 0x32b287b1
// declared property setter: - (void)_setHostingSubController:(id)controller;	// 0x32b27e81
// declared property getter: - (id)appliance;	// 0x32b28749
- (BOOL)brEventAction:(id)action;	// 0x32b28659
- (BOOL)currentContentHasHeaderForApplianceView:(id)applianceView;	// 0x32b28305
- (void)dealloc;	// 0x32b27ddd
- (id)defaultTopPanelCategoryForApplianceView:(id)applianceView;	// 0x32b2818d
- (void)hostSubController:(id)controller;	// 0x32b283e5
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x32b27f69
- (void)selectedCategoryDidChangeForApplianceTopPanelControl:(id)selectedCategory;	// 0x32b28439
// declared property setter: - (void)setAppliance:(id)appliance;	// 0x32b28759
// declared property setter: - (void)setUIHints:(id)hints;	// 0x32b2878d
- (id)topPanelCategoriesForApplianceView:(id)applianceView;	// 0x32b28105
- (void)wasExhumed;	// 0x32b27fd9
@end

