/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <GEOSearchProvider.h> // Unknown library
#import "PBRequesterDelegate.h"

@class GMMRequester;

@interface GMMGEOSearchProvider : GEOSearchProvider <PBRequesterDelegate> {
	GMMRequester *_requester;	// 8 = 0x8
	id _finished;	// 12 = 0xc
	id _spellingSuggestion;	// 16 = 0x10
	id _refinement;	// 20 = 0x14
}
+ (id)hostname;	// 0x31fc5e65
+ (unsigned short)provider;	// 0x31fc5e5d
- (id)init;	// 0x31fc5e81
- (void)cancel;	// 0x31fc62ad
- (void)dealloc;	// 0x31fc5ebd
- (void)requester:(id)requester didFailWithError:(id)error;	// 0x31fc62cd
- (void)requesterDidCancel:(id)requester;	// 0x31fc647d
- (void)requesterDidFinish:(id)requester;	// 0x31fc64dd
- (void)search:(id)search finished:(id)finished spellingSuggestion:(id)suggestion refinement:(id)refinement error:(id)error;	// 0x31fc5f5d
@end

