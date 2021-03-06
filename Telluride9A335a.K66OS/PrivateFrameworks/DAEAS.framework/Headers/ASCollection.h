/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class ASFolderItemsSyncResponse, NSArray, NSNumber, NSString;

@interface ASCollection : ASItem {
	int _dataclass;	// 40 = 0x28
	NSString *_syncKey;	// 44 = 0x2c
	NSString *_collectionId;	// 48 = 0x30
	NSNumber *_status;	// 52 = 0x34
	NSNumber *_moreAvailable;	// 56 = 0x38
	NSArray *_changedItems;	// 60 = 0x3c
	NSArray *_responseItems;	// 64 = 0x40
	ASFolderItemsSyncResponse *_parentResponse;	// 68 = 0x44
	int _sniffableType;	// 72 = 0x48
	BOOL _checkedShouldSniffInvites;	// 76 = 0x4c
}
@property(retain) NSArray *changedItems;	// G=0x321a7691; S=0x321a76c9; converted property
@property(retain) NSString *collectionId;	// G=0x321a9551; S=0x321a9589; converted property
@property(readonly, assign) int dataclass;	// G=0x321a7521; converted property
@property(retain) NSNumber *moreAvailable;	// G=0x321a9649; S=0x321a9681; converted property
@property(retain) NSArray *responseItems;	// G=0x321a770d; S=0x321a7745; converted property
@property(retain) NSNumber *status;	// G=0x321a95cd; S=0x321a9605; converted property
@property(retain) NSString *syncKey;	// G=0x321a94d5; S=0x321a950d; converted property
+ (BOOL)acceptsTopLevelLeaves;	// 0x321a7271
+ (BOOL)frontingBasicTypes;	// 0x321a736d
+ (BOOL)notifyOfUnknownTokens;	// 0x321a73c1
+ (BOOL)parsingLeafNode;	// 0x321a72c5
+ (BOOL)parsingWithSubItems;	// 0x321a7319
- (id)init;	// 0x321a7415
- (id)asParseRules;	// 0x321a7789
// converted property getter: - (id)changedItems;	// 0x321a7691
// converted property getter: - (id)collectionId;	// 0x321a9551
// converted property getter: - (int)dataclass;	// 0x321a7521
- (void)dealloc;	// 0x321a7461
- (id)description;	// 0x321a96c5
// converted property getter: - (id)moreAvailable;	// 0x321a9649
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x321a9371
// converted property getter: - (id)responseItems;	// 0x321a770d
// converted property setter: - (void)setChangedItems:(id)items;	// 0x321a76c9
// converted property setter: - (void)setCollectionId:(id)anId;	// 0x321a9589
- (void)setDataclassString:(id)string;	// 0x321a75e1
// converted property setter: - (void)setMoreAvailable:(id)available;	// 0x321a9681
- (void)setParentResponse:(id)response;	// 0x321a7511
// converted property setter: - (void)setResponseItems:(id)items;	// 0x321a7745
// converted property setter: - (void)setStatus:(id)status;	// 0x321a9605
// converted property setter: - (void)setSyncKey:(id)key;	// 0x321a950d
- (int)sniffableTypeForAccount:(id)account;	// 0x321a9465
// converted property getter: - (id)status;	// 0x321a95cd
// converted property getter: - (id)syncKey;	// 0x321a94d5
@end

