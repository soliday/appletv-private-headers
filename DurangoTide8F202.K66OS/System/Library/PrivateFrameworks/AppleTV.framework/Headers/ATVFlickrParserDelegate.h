/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BRBaseParserDelegate.h> // Unknown library

@class NSMutableDictionary, NSString, NSMutableArray;

__attribute__((visibility("hidden")))
@interface ATVFlickrParserDelegate : BRBaseParserDelegate {
@private
	NSMutableDictionary *_errInfo;	// 12 = 0xc
	NSString *_userNSID;	// 16 = 0x10
	NSString *_userRealName;	// 20 = 0x14
	NSString *_userIconServer;	// 24 = 0x18
	NSString *_userIconFarm;	// 28 = 0x1c
	NSMutableArray *_photoInfos;	// 32 = 0x20
	NSMutableArray *_photosetInfos;	// 36 = 0x24
	BOOL _photosetInfoCreated;	// 40 = 0x28
	int _curPhotosetInfoIndex;	// 44 = 0x2c
	NSMutableArray *_contactInfos;	// 48 = 0x30
	NSMutableDictionary *_photoSizeInfo;	// 52 = 0x34
	long _photoCount;	// 56 = 0x38
}
@property(readonly, retain) NSMutableArray *contactInfos;	// G=0x3369e499; converted property
@property(readonly, retain) NSMutableDictionary *errInfo;	// G=0x3369e419; converted property
@property(readonly, assign) long photoCount;	// G=0x3369e469; converted property
@property(readonly, retain) NSMutableArray *photoInfos;	// G=0x3369e479; converted property
@property(readonly, retain) NSMutableArray *photosetInfos;	// G=0x3369e489; converted property
@property(readonly, retain) NSString *userIconFarm;	// G=0x3369e459; converted property
@property(readonly, retain) NSString *userIconServer;	// G=0x3369e449; converted property
@property(readonly, retain) NSString *userNSID;	// G=0x3369e429; converted property
@property(readonly, retain) NSString *userRealName;	// G=0x3369e439; converted property
+ (id)parserDelegate;	// 0x3369ee61
- (BOOL)_originalImageSizeExceedsMaxSize;	// 0x3369e4a9
// converted property getter: - (id)contactInfos;	// 0x3369e499
- (void)dealloc;	// 0x3369ee9d
- (void)endCount;	// 0x3369ec81
- (void)endPhotoset;	// 0x3369e3f9
- (void)endRealname;	// 0x3369ecb1
- (void)endTitle;	// 0x3369ef75
// converted property getter: - (id)errInfo;	// 0x3369e419
- (id)largeImagePath;	// 0x3369e539
// converted property getter: - (long)photoCount;	// 0x3369e469
// converted property getter: - (id)photoInfos;	// 0x3369e479
// converted property getter: - (id)photosetInfos;	// 0x3369e489
- (id)photosetInfosAlphabetically;	// 0x3369e5e5
- (void)startContactWithAttributes:(id)attributes;	// 0x3369e675
- (void)startErrWithAttributes:(id)attributes;	// 0x3369ed9d
- (void)startPersonWithAttributes:(id)attributes;	// 0x3369ece5
- (void)startPhotoWithAttributes:(id)attributes;	// 0x3369ea79
- (void)startPhotosWithAttributes:(id)attributes;	// 0x3369ec45
- (void)startPhotosetWithAttributes:(id)attributes;	// 0x3369e775
- (void)startSizeWithAttributes:(id)attributes;	// 0x3369e94d
- (void)startUserWithAttributes:(id)attributes;	// 0x3369ed5d
// converted property getter: - (id)userIconFarm;	// 0x3369e459
// converted property getter: - (id)userIconServer;	// 0x3369e449
// converted property getter: - (id)userNSID;	// 0x3369e429
// converted property getter: - (id)userRealName;	// 0x3369e439
@end

