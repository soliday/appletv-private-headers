/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface PFUbiquityExportContext : NSObject {
@private
	NSSet *_storesToExportFrom;	// 4 = 0x4
	NSMutableDictionary *_storeNameToStoreExportContext;	// 8 = 0x8
	NSMutableDictionary *_ubiquityRootPathToStack;	// 12 = 0xc
	NSString *_localPeerID;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) NSString *localPeerID;	// G=0x3238e839; @synthesize=_localPeerID
@property(retain, nonatomic) NSSet *storesToExportFrom;	// G=0x3238e829; S=0x3238e975; @synthesize=_storesToExportFrom
- (id)initWithLocalPeerID:(id)localPeerID;	// 0x3238e8a9
- (void)dealloc;	// 0x3238ec3d
- (id)description;	// 0x3238ebb5
// declared property getter: - (id)localPeerID;	// 0x3238e839
// declared property setter: - (void)setStoresToExportFrom:(id)from;	// 0x3238e975
- (id)storeExportContextForStore:(id)store;	// 0x3238e99d
- (id)storeExportContextForStoreName:(id)storeName;	// 0x3238eb91
// declared property getter: - (id)storesToExportFrom;	// 0x3238e829
@end

