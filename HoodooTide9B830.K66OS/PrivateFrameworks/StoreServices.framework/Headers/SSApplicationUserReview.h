/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class NSString, NSNumber;

@interface SSApplicationUserReview : NSObject {
@private
	NSString *_applicationPath;	// 4 = 0x4
	NSNumber *_itemIdentifier;	// 8 = 0x8
	float _userRating;	// 12 = 0xc
	NSNumber *_versionIdentifier;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) NSString *applicationPath;	// G=0x304f46cd; @synthesize=_applicationPath
@property(assign, nonatomic) float userRating;	// G=0x304f46dd; S=0x304f46ed; @synthesize=_userRating
@property(readonly, assign, nonatomic, getter=isValidReview) BOOL validReview;	// G=0x304f4455; 
- (id)init;	// 0x304f4365
- (id)initForApplicationWithPath:(id)path;	// 0x304f4379
- (void)_loadApplicationMetadata;	// 0x304f45b9
// declared property getter: - (id)applicationPath;	// 0x304f46cd
- (void)dealloc;	// 0x304f43e1
// declared property getter: - (BOOL)isValidReview;	// 0x304f4455
- (BOOL)scheduleReview;	// 0x304f446d
// declared property setter: - (void)setUserRating:(float)rating;	// 0x304f46ed
// declared property getter: - (float)userRating;	// 0x304f46dd
@end

