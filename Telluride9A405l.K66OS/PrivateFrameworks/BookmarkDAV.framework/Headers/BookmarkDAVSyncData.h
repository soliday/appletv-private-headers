/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BookmarkDAV.framework/BookmarkDAV
 */

#import <NSObject.h> // Unknown library

@class NSString, NSMutableDictionary, NSDictionary, NSNumber, NSURL;

@interface BookmarkDAVSyncData : NSObject {
@private
	void *_db;	// 4 = 0x4
	NSMutableDictionary *_backingDict;	// 8 = 0x8
	BOOL _hasChanges;	// 12 = 0xc
}
@property(retain, nonatomic) NSString *accountPrsId;	// G=0x303e5e61; S=0x303e5e89; 
@property(retain, nonatomic) NSString *bookmarksBarId;	// G=0x303e5a95; S=0x303e5abd; 
@property(assign, nonatomic) unsigned bookmarksBarOrder;	// G=0x303e5bcd; S=0x303e5c2d; 
@property(retain, nonatomic) NSString *bookmarksMenuId;	// G=0x303e5b31; S=0x303e5b59; 
@property(assign, nonatomic) unsigned bookmarksMenuOrder;	// G=0x303e5ca9; S=0x303e5d09; 
@property(retain, nonatomic) NSDictionary *bulkRequests;	// G=0x303e59cd; S=0x303e59f5; 
@property(assign, nonatomic) unsigned clientVersion;	// G=0x303e5d85; S=0x303e5de5; 
@property(retain, nonatomic) NSString *ctag;	// G=0x303e55e5; S=0x303e560d; 
@property(retain, nonatomic) NSString *etag;	// G=0x303e5775; S=0x303e579d; 
@property(readonly, assign) BOOL hasChanges;	// G=0x303e6265; @synthesize=_hasChanges
@property(assign, nonatomic) BOOL hasHitQuotaLimit;	// G=0x303e60c5; S=0x303e6105; 
@property(retain, nonatomic) NSDictionary *heldAsideOrderings;	// G=0x303e603d; S=0x303e6065; 
@property(retain, nonatomic) NSURL *homeURL;	// G=0x303e5259; S=0x303e52ad; 
@property(assign, nonatomic) BOOL initialSyncDone;	// G=0x303e536d; S=0x303e53ad; 
@property(retain, nonatomic) NSNumber *knownQuotaRemaining;	// G=0x303e619d; S=0x303e61c5; 
@property(retain, nonatomic) NSURL *principalURL;	// G=0x303e5f29; S=0x303e5f7d; 
@property(retain, nonatomic) NSString *ptag;	// G=0x303e56ad; S=0x303e56d5; 
@property(retain, nonatomic) NSString *pushKey;	// G=0x303e551d; S=0x303e5545; 
@property(retain, nonatomic) NSDictionary *pushTransports;	// G=0x303e5905; S=0x303e592d; 
@property(assign, nonatomic) BOOL supportsSyncCollection;	// G=0x303e5445; S=0x303e5485; 
@property(retain, nonatomic) NSString *syncToken;	// G=0x303e583d; S=0x303e5865; 
- (id)initWithBookmarkDatabase:(void *)bookmarkDatabase;	// 0x303e5099
// declared property getter: - (id)accountPrsId;	// 0x303e5e61
// declared property getter: - (id)bookmarksBarId;	// 0x303e5a95
// declared property getter: - (unsigned)bookmarksBarOrder;	// 0x303e5bcd
// declared property getter: - (id)bookmarksMenuId;	// 0x303e5b31
// declared property getter: - (unsigned)bookmarksMenuOrder;	// 0x303e5ca9
// declared property getter: - (id)bulkRequests;	// 0x303e59cd
// declared property getter: - (unsigned)clientVersion;	// 0x303e5d85
// declared property getter: - (id)ctag;	// 0x303e55e5
- (void)dealloc;	// 0x303e5191
// declared property getter: - (id)etag;	// 0x303e5775
// declared property getter: - (BOOL)hasChanges;	// 0x303e6265
// declared property getter: - (BOOL)hasHitQuotaLimit;	// 0x303e60c5
// declared property getter: - (id)heldAsideOrderings;	// 0x303e603d
// declared property getter: - (id)homeURL;	// 0x303e5259
// declared property getter: - (BOOL)initialSyncDone;	// 0x303e536d
// declared property getter: - (id)knownQuotaRemaining;	// 0x303e619d
// declared property getter: - (id)principalURL;	// 0x303e5f29
// declared property getter: - (id)ptag;	// 0x303e56ad
// declared property getter: - (id)pushKey;	// 0x303e551d
// declared property getter: - (id)pushTransports;	// 0x303e5905
// declared property setter: - (void)setAccountPrsId:(id)anId;	// 0x303e5e89
// declared property setter: - (void)setBookmarksBarId:(id)anId;	// 0x303e5abd
// declared property setter: - (void)setBookmarksBarOrder:(unsigned)order;	// 0x303e5c2d
// declared property setter: - (void)setBookmarksMenuId:(id)anId;	// 0x303e5b59
// declared property setter: - (void)setBookmarksMenuOrder:(unsigned)order;	// 0x303e5d09
// declared property setter: - (void)setBulkRequests:(id)requests;	// 0x303e59f5
// declared property setter: - (void)setClientVersion:(unsigned)version;	// 0x303e5de5
// declared property setter: - (void)setCtag:(id)ctag;	// 0x303e560d
// declared property setter: - (void)setEtag:(id)etag;	// 0x303e579d
// declared property setter: - (void)setHasHitQuotaLimit:(BOOL)limit;	// 0x303e6105
// declared property setter: - (void)setHeldAsideOrderings:(id)orderings;	// 0x303e6065
// declared property setter: - (void)setHomeURL:(id)url;	// 0x303e52ad
// declared property setter: - (void)setInitialSyncDone:(BOOL)done;	// 0x303e53ad
// declared property setter: - (void)setKnownQuotaRemaining:(id)remaining;	// 0x303e61c5
// declared property setter: - (void)setPrincipalURL:(id)url;	// 0x303e5f7d
// declared property setter: - (void)setPtag:(id)ptag;	// 0x303e56d5
// declared property setter: - (void)setPushKey:(id)key;	// 0x303e5545
// declared property setter: - (void)setPushTransports:(id)transports;	// 0x303e592d
// declared property setter: - (void)setSupportsSyncCollection:(BOOL)collection;	// 0x303e5485
// declared property setter: - (void)setSyncToken:(id)token;	// 0x303e5865
// declared property getter: - (BOOL)supportsSyncCollection;	// 0x303e5445
// declared property getter: - (id)syncToken;	// 0x303e583d
- (void)writeToBookmarkDB;	// 0x303e51f9
@end

