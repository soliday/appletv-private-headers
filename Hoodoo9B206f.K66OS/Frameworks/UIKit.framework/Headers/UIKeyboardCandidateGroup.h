/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSOrderedSet, NSArray, NSString;

@interface UIKeyboardCandidateGroup : NSObject {
@private
	NSString *_title;	// 4 = 0x4
	NSOrderedSet *_candidates;	// 8 = 0x8
	NSArray *_nonExtensionCandidates;	// 12 = 0xc
}
@property(copy) NSOrderedSet *candidates;	// G=0x356be7e9; S=0x356be7fd; @synthesize=_candidates
@property(retain) NSArray *nonExtensionCandidates;	// G=0x356be54d; S=0x356be6d1; @synthesize=_nonExtensionCandidates
@property(copy) NSString *title;	// G=0x356be7b1; S=0x356be7c5; @synthesize=_title
- (id)initWithTitle:(id)title candidates:(id)candidates;	// 0x356be1c1
- (void)addCandidate:(id)candidate;	// 0x356be479
// declared property getter: - (id)candidates;	// 0x356be7e9
- (void)dealloc;	// 0x356be221
- (unsigned)hash;	// 0x356be35d
- (BOOL)isEqual:(id)equal;	// 0x356be295
- (id)mutableCandidates;	// 0x356be3b1
// declared property getter: - (id)nonExtensionCandidates;	// 0x356be54d
// declared property setter: - (void)setCandidates:(id)candidates;	// 0x356be7fd
// declared property setter: - (void)setNonExtensionCandidates:(id)candidates;	// 0x356be6d1
// declared property setter: - (void)setTitle:(id)title;	// 0x356be7c5
- (void)sortUsingComparator:(id)comparator;	// 0x356be4c1
- (void)sortWithOptions:(unsigned)options usingComparator:(id)comparator;	// 0x356be505
// declared property getter: - (id)title;	// 0x356be7b1
@end
