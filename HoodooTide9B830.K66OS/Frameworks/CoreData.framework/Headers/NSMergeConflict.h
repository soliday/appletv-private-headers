/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, NSManagedObject;

@interface NSMergeConflict : NSObject {
@private
	id _source;	// 4 = 0x4
	id _snapshot1;	// 8 = 0x8
	id _snapshot2;	// 12 = 0xc
	id _snapshot3;	// 16 = 0x10
	unsigned _newVersion;	// 20 = 0x14
	unsigned _oldVersion;	// 24 = 0x18
}
@property(readonly, retain) NSDictionary *cachedSnapshot;	// G=0x322ef709; @synthesize=_snapshot2
@property(readonly, assign) unsigned newVersionNumber;	// G=0x322edb75; @synthesize=_newVersion
@property(readonly, retain) NSDictionary *objectSnapshot;	// G=0x322ef6f1; @synthesize=_snapshot1
@property(readonly, assign) unsigned oldVersionNumber;	// G=0x322edb65; @synthesize=_oldVersion
@property(readonly, retain) NSDictionary *persistedSnapshot;	// G=0x322ef721; @synthesize=_snapshot3
@property(readonly, retain) NSManagedObject *sourceObject;	// G=0x322ef6d9; @synthesize=_source
- (id)initWithSource:(id)source newVersion:(unsigned)version oldVersion:(unsigned)version3 cachedSnapshot:(id)snapshot persistedSnapshot:(id)snapshot5;	// 0x322ef5c1
- (id)ancestorSnapshot;	// 0x322edb61
// declared property getter: - (id)cachedSnapshot;	// 0x322ef709
- (void)dealloc;	// 0x322efb61
- (id)description;	// 0x322efbe9
// declared property getter: - (unsigned)newVersionNumber;	// 0x322edb75
- (id)objectForKey:(id)key;	// 0x322ef959
// declared property getter: - (id)objectSnapshot;	// 0x322ef6f1
// declared property getter: - (unsigned)oldVersionNumber;	// 0x322edb65
// declared property getter: - (id)persistedSnapshot;	// 0x322ef721
// declared property getter: - (id)sourceObject;	// 0x322ef6d9
- (id)valueForKey:(id)key;	// 0x322ef739
@end

