/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCObjectBase.h"

@class MCMontage, NSString;

@interface MCObject : MCObjectBase {
@private
	NSString *mObjectID;	// 4 = 0x4
@protected
	MCMontage *mMontage;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) MCMontage *montage;	// G=0x3218d1b5; @synthesize=mMontage
@property(readonly, assign, nonatomic) NSString *objectID;	// G=0x3218d1a5; @synthesize=mObjectID
+ (id)objectWithImprint:(id)imprint andMontage:(id)montage;	// 0x3218ce19
- (id)initFromScratchWithMontage:(id)montage;	// 0x3218ce81
- (id)initSnapshot;	// 0x3218cf81
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x3218cf15
- (void)dealloc;	// 0x3218d039
- (void)finalize;	// 0x3218cfc5
- (id)imprint;	// 0x3218d0d1
- (BOOL)isSnapshot;	// 0x3218d0ad
// declared property getter: - (id)montage;	// 0x3218d1b5
// declared property getter: - (id)objectID;	// 0x3218d1a5
- (id)snapshot;	// 0x3218d141
@end

