/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "BRAppliance.h"

@class NSArray, BRApplianceInfo;

@interface BRBaseAppliance : NSObject <BRAppliance> {
@private
	NSArray *_categories;	// 4 = 0x4
	BRApplianceInfo *_applianceInfo;	// 8 = 0x8
}
@property(retain) BRApplianceInfo *applianceInfo;	// G=0x32988e2d; S=0x32988e41; @synthesize=_applianceInfo
@property(readonly, assign, nonatomic) BOOL supportsPurchase;	// G=0x32988919; 
@property(readonly, assign, nonatomic) BOOL supportsRental;	// G=0x3298891d; 
- (id)init;	// 0x329885e9
- (id)initWithApplianceInfo:(id)applianceInfo;	// 0x329885ed
- (BOOL)_anySharesAvailable;	// 0x329895e1
- (BOOL)_anyStoreCategoryExistsInMusicStoreCollection:(id)musicStoreCollection;	// 0x32989675
- (id)_applianceCategories;	// 0x32988f39
- (BOOL)_isCategoryWithIdentifier:(id)identifier memberOfMusicStoreCollection:(id)musicStoreCollection;	// 0x32989555
- (id)accessibilityLabel;	// 0x32988df5
- (id)alertControllerForNoContent;	// 0x32988d21
- (id)alertControllerForNoRemoteContent;	// 0x32988d81
- (id)applianceCategories;	// 0x32988a55
- (id)applianceCategoryDescriptions;	// 0x32988e65
- (id)applianceController;	// 0x32988b99
// declared property getter: - (id)applianceInfo;	// 0x32988e2d
- (id)baseMediaType;	// 0x32988921
- (id)categoryWithIdentifier:(id)identifier;	// 0x32988c89
- (id)controllerForIdentifier:(id)identifier args:(id)args;	// 0x32988b95
- (void)dealloc;	// 0x32988741
- (id)description;	// 0x32988899
- (BOOL)handleObjectSelection:(id)selection userInfo:(id)info;	// 0x32988b9d
- (BOOL)handlePlay:(id)play userInfo:(id)info;	// 0x32988ba1
- (unsigned)hash;	// 0x3298884d
- (id)identifierForContentAlias:(id)contentAlias;	// 0x32988b91
- (BOOL)isEqual:(id)equal;	// 0x329887d5
- (id)loadCategories;	// 0x32988e8d
- (id)musicStoreItemWithIdentifier:(id)identifier;	// 0x32988ba5
- (int)noContentBRError;	// 0x32988d79
- (int)noRemoteContentBRError;	// 0x32988dd9
- (BOOL)previewError;	// 0x32988de1
- (id)previewErrorIconImage;	// 0x32988ded
- (id)previewErrorSubtext;	// 0x32988de9
- (id)previewErrorText;	// 0x32988de5
- (void)reloadCategories;	// 0x32988e9d
// declared property setter: - (void)setApplianceInfo:(id)info;	// 0x32988e41
// declared property getter: - (BOOL)supportsPurchase;	// 0x32988919
// declared property getter: - (BOOL)supportsRental;	// 0x3298891d
- (id)topShelfController;	// 0x32988df1
@end

