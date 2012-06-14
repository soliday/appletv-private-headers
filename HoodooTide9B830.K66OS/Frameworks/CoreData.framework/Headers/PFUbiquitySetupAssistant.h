/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class PFUbiquityLocation, NSURL, NSDictionary, NSMutableDictionary, PFUbiquityContainerIdentifier, _PFUbiquityStack, NSString, PFUbiquityPeerState, PFUbiquityStoreMetadata, PFUbiquityPeerReceipt, NSPersistentStoreCoordinator;

__attribute__((visibility("hidden")))
@interface PFUbiquitySetupAssistant : NSObject {
@private
	NSMutableDictionary *_options;	// 4 = 0x4
	NSPersistentStoreCoordinator *_psc;	// 8 = 0x8
	NSString *_storeType;	// 12 = 0xc
	NSURL *_storeURL;	// 16 = 0x10
	BOOL _ubiquityEnabled;	// 20 = 0x14
	NSURL *_ubiquityRootURL;	// 24 = 0x18
	NSString *_ubiquityName;	// 28 = 0x1c
	NSString *_localPeerID;	// 32 = 0x20
	NSString *_modelVersionHash;	// 36 = 0x24
	PFUbiquityLocation *_ubiquityRootLocation;	// 40 = 0x28
	_PFUbiquityStack *_stack;	// 44 = 0x2c
	PFUbiquityStoreMetadata *_storeMetadata;	// 48 = 0x30
	PFUbiquityPeerState *_localPeerState;	// 52 = 0x34
	BOOL _didBaselineCopy;	// 56 = 0x38
	BOOL _storeFileExists;	// 57 = 0x39
	BOOL _hasStoreMetadataFile;	// 58 = 0x3a
	BOOL _hasStoreMetadataEntry;	// 59 = 0x3b
	BOOL _hasContainerUUID;	// 60 = 0x3c
	BOOL _hasContainerUUIDInStore;	// 61 = 0x3d
	PFUbiquityPeerReceipt *_localPeerReceipt;	// 64 = 0x40
	PFUbiquityContainerIdentifier *_containerIdentifier;	// 68 = 0x44
	BOOL _hasLocalTransactionLogs;	// 72 = 0x48
}
@property(readonly, assign, nonatomic) NSDictionary *options;	// G=0x323ac759; @synthesize=_options
@property(readonly, assign, nonatomic) BOOL ubiquityEnabled;	// G=0x323ac739; @synthesize=_ubiquityEnabled
@property(readonly, assign, nonatomic) PFUbiquityLocation *ubiquityRootLocation;	// G=0x323ac749; @synthesize=_ubiquityRootLocation
+ (id)createDefaultLocalPeerID;	// 0x323acc0d
+ (BOOL)doBasicSanityCheckForUbiquityRootURL:(id)ubiquityRootURL withError:(id *)error;	// 0x323ac919
+ (id)generateMachineUUIDString;	// 0x323acc89
+ (BOOL)ubiquityMetadataTablesPresentInStore:(id)store;	// 0x323ac8d5
- (id)init;	// 0x323ac769
- (id)initWithPersistentStoreCoordinator:(id)persistentStoreCoordinator andStoreOptions:(id)options forPersistentStoreOfType:(id)type atURL:(id)url;	// 0x323af399
- (void)_setUbiquityRootLocation:(id)location storeName:(id)name localPeerID:(id)anId andModelVersionHash:(id)hash;	// 0x323accf5
- (void)dealloc;	// 0x323af1fd
- (BOOL)doFirstMetadataConsistencyCheckWithError:(id *)error;	// 0x323ad7e9
- (BOOL)doSecondMetadataConsistencyCheckWithStore:(id)store error:(id *)error;	// 0x323acd89
- (BOOL)migrateMetadataRoot:(id *)root;	// 0x323adb1d
// declared property getter: - (id)options;	// 0x323ac759
- (BOOL)performPostStoreSetupWithStore:(id)store error:(id *)error;	// 0x323ade55
- (BOOL)performPreStoreSetupWithError:(id *)error;	// 0x323ae835
// declared property getter: - (BOOL)ubiquityEnabled;	// 0x323ac739
// declared property getter: - (id)ubiquityRootLocation;	// 0x323ac749
- (BOOL)validateOptionsWithError:(id *)error;	// 0x323aed19
@end

