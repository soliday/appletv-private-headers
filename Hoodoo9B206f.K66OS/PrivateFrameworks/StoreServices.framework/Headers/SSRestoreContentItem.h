/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class NSNumber, NSString, NSMutableDictionary;

@interface SSRestoreContentItem : NSObject {
	NSNumber *_accountID;	// 4 = 0x4
	NSString *_appleID;	// 8 = 0x8
	NSNumber *_cloudMatchStatus;	// 12 = 0xc
	BOOL _isRestore;	// 16 = 0x10
	NSMutableDictionary *_properties;	// 20 = 0x14
}
@property(assign, nonatomic, getter=isDRMFree) BOOL DRMFree;	// G=0x327f81e5; S=0x327f84e1; 
@property(retain, nonatomic) NSNumber *cloudItemID;	// G=0x327f7fdd; S=0x327f8465; 
@property(retain, nonatomic) NSNumber *cloudMatchStatus;	// G=0x327f802d; S=0x327f8481; 
@property(copy, nonatomic) NSString *downloadKind;	// G=0x327f8195; S=0x327f84c5; 
@property(copy, nonatomic) NSString *storeAccountAppleID;	// G=0x327f8785; S=0x327f8525; 
@property(retain, nonatomic) NSNumber *storeAccountID;	// G=0x327f87bd; S=0x327f8569; 
@property(copy, nonatomic) NSString *storeFlavor;	// G=0x327f87f5; S=0x327f85ad; 
@property(copy, nonatomic) NSString *storeFrontID;	// G=0x327f8845; S=0x327f85c9; 
@property(retain, nonatomic) NSNumber *storeItemID;	// G=0x327f8895; S=0x327f85e5; 
@property(copy, nonatomic) NSString *storeSoftwareVersionID;	// G=0x327f88e5; S=0x327f8601; 
@property(copy, nonatomic) NSString *videoDimensions;	// G=0x327f8935; S=0x327f8769; 
- (id)init;	// 0x327f7d7d
- (id)initWithRestoreDownload:(id)restoreDownload;	// 0x327f7d8d
- (id)_initSSRestoreContentItem;	// 0x327f7d19
- (id)_restoreKeyForAssetProperty:(id)assetProperty;	// 0x327f8985
- (id)_restoreKeyForDownloadProperty:(id)downloadProperty;	// 0x327f8a21
- (void)_setValue:(id)value forProperty:(id)property;	// 0x327f8af5
// declared property getter: - (id)cloudItemID;	// 0x327f7fdd
// declared property getter: - (id)cloudMatchStatus;	// 0x327f802d
- (id)copyRestoreDictionary;	// 0x327f8065
- (void)dealloc;	// 0x327f7f55
// declared property getter: - (id)downloadKind;	// 0x327f8195
// declared property getter: - (BOOL)isDRMFree;	// 0x327f81e5
- (BOOL)isEligibleForRestore:(id *)restore;	// 0x327f8225
// declared property setter: - (void)setCloudItemID:(id)anId;	// 0x327f8465
// declared property setter: - (void)setCloudMatchStatus:(id)status;	// 0x327f8481
// declared property setter: - (void)setDRMFree:(BOOL)free;	// 0x327f84e1
// declared property setter: - (void)setDownloadKind:(id)kind;	// 0x327f84c5
// declared property setter: - (void)setStoreAccountAppleID:(id)anId;	// 0x327f8525
// declared property setter: - (void)setStoreAccountID:(id)anId;	// 0x327f8569
// declared property setter: - (void)setStoreFlavor:(id)flavor;	// 0x327f85ad
// declared property setter: - (void)setStoreFrontID:(id)anId;	// 0x327f85c9
// declared property setter: - (void)setStoreItemID:(id)anId;	// 0x327f85e5
// declared property setter: - (void)setStoreSoftwareVersionID:(id)anId;	// 0x327f8601
- (void)setValue:(id)value forAssetProperty:(id)assetProperty;	// 0x327f861d
- (void)setValue:(id)value forDownloadProperty:(id)downloadProperty;	// 0x327f8655
// declared property setter: - (void)setVideoDimensions:(id)dimensions;	// 0x327f8769
// declared property getter: - (id)storeAccountAppleID;	// 0x327f8785
// declared property getter: - (id)storeAccountID;	// 0x327f87bd
// declared property getter: - (id)storeFlavor;	// 0x327f87f5
// declared property getter: - (id)storeFrontID;	// 0x327f8845
// declared property getter: - (id)storeItemID;	// 0x327f8895
// declared property getter: - (id)storeSoftwareVersionID;	// 0x327f88e5
// declared property getter: - (id)videoDimensions;	// 0x327f8935
@end

