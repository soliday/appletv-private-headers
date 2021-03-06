/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSString, NSArray, NSDate, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface PFUbiquitySaveSnapshot : NSObject {
@private
	NSDate *_transactionDate;	// 4 = 0x4
	NSString *_modelVersionHash;	// 8 = 0x8
	NSString *_exportingPeerID;	// 12 = 0xc
	NSString *_localPeerID;	// 16 = 0x10
	NSMutableDictionary *_storeNameToStoreSaveSnapshots;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) NSString *exportingPeerID;	// G=0x32e2fa39; @synthesize=_exportingPeerID
@property(readonly, assign, nonatomic) NSString *localPeerID;	// G=0x32e2fa49; @synthesize=_localPeerID
@property(readonly, assign, nonatomic) NSString *modelVersionHash;	// G=0x32e2fa29; @synthesize=_modelVersionHash
@property(readonly, assign, nonatomic) NSArray *storeNames;	// G=0x32e2f9e9; 
@property(retain, nonatomic) NSDate *transacationDate;	// G=0x32e2fa09; S=0x32e2fa19; @synthesize=_transactionDate
- (id)initWithSaveNotification:(id)saveNotification withLocalPeerID:(id)localPeerID;	// 0x32e2f62d
- (id)initWithTransactionLog:(id)transactionLog;	// 0x32e2f499
- (void)dealloc;	// 0x32e2f74d
- (id)description;	// 0x32e2f80d
// declared property getter: - (id)exportingPeerID;	// 0x32e2fa39
// declared property getter: - (id)localPeerID;	// 0x32e2fa49
// declared property getter: - (id)modelVersionHash;	// 0x32e2fa29
// declared property setter: - (void)setTransacationDate:(id)date;	// 0x32e2fa19
// declared property getter: - (id)storeNames;	// 0x32e2f9e9
- (id)storeSaveSnapshotForStore:(id)store;	// 0x32e2f8e1
- (id)storeSaveSnapshotForStoreName:(id)storeName;	// 0x32e2f8c1
// declared property getter: - (id)transacationDate;	// 0x32e2fa09
@end

