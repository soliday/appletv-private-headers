/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class MCMontage, NSString;

@interface MCObject : NSObject {
@private
	NSString *mObjectID;	// 4 = 0x4
@protected
	MCMontage *mMontage;	// 8 = 0x8
}
@property(readonly, assign) BOOL isSnapshot;	// G=0x31ba7d89; 
@property(readonly, assign, nonatomic) MCMontage *montage;	// G=0x31ba7ea5; @synthesize=mMontage
@property(readonly, assign, nonatomic) NSString *objectID;	// G=0x31ba7e95; @synthesize=mObjectID
+ (void)initialize;	// 0x31ba7b01
+ (id)objectWithImprint:(id)imprint andMontage:(id)montage;	// 0x31ba7b85
- (id)initFromScratchWithMontage:(id)montage;	// 0x31ba7bed
- (id)initSnapshot;	// 0x31ba7ccd
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x31ba7c65
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x31ba7e81
- (void)dealloc;	// 0x31ba7d11
- (void)demolish;	// 0x31ba7d85
- (id)imprint;	// 0x31ba7dad
// declared property getter: - (BOOL)isSnapshot;	// 0x31ba7d89
// declared property getter: - (id)montage;	// 0x31ba7ea5
// declared property getter: - (id)objectID;	// 0x31ba7e95
- (id)snapshot;	// 0x31ba7e1d
@end

