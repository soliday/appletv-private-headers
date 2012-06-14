/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSMergeConflict.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface PFUbiquityMergeConflict : NSMergeConflict {
@private
	NSDictionary *_ancestorSnapshot;	// 28 = 0x1c
}
@property(retain) NSDictionary *ancestorSnapshot;	// G=0x32385e1d; S=0x32385df9; @synthesize=_ancestorSnapshot
- (id)initWithSource:(id)source newVersion:(unsigned)version oldVersion:(unsigned)version3 cachedSnapshot:(id)snapshot persistedSnapshot:(id)snapshot5;	// 0x32385db9
// declared property getter: - (id)ancestorSnapshot;	// 0x32385e1d
- (void)dealloc;	// 0x32385e35
// declared property setter: - (void)setAncestorSnapshot:(id)snapshot;	// 0x32385df9
@end

