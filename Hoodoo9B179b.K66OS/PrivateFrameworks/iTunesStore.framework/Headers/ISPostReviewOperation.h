/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISOperation.h"
#import "ISStoreURLOperationDelegate.h"

@class ISReview;

@interface ISPostReviewOperation : ISOperation <ISStoreURLOperationDelegate> {
	BOOL _backgroundReview;	// 60 = 0x3c
	ISReview *_review;	// 64 = 0x40
}
@property(assign, getter=isBackgroundReview) BOOL backgroundReview;	// G=0x3695afb5; S=0x3695afc5; @synthesize=_backgroundReview
@property(retain) ISReview *review;	// G=0x3695afd5; S=0x3695afe9; @synthesize=_review
- (id)_httpBody;	// 0x3695ad95
- (void)dealloc;	// 0x3695aa25
// declared property getter: - (BOOL)isBackgroundReview;	// 0x3695afb5
- (void)operation:(id)operation finishedWithOutput:(id)output;	// 0x3695ac59
// declared property getter: - (id)review;	// 0x3695afd5
- (void)run;	// 0x3695aa71
// declared property setter: - (void)setBackgroundReview:(BOOL)review;	// 0x3695afc5
// declared property setter: - (void)setReview:(id)review;	// 0x3695afe9
@end

