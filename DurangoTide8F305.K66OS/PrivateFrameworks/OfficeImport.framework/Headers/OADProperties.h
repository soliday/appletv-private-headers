/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface OADProperties : NSObject {
@private
	OADProperties *mParent;	// 4 = 0x4
	unsigned mIsMerged : 1;	// 8 = 0x8
	unsigned mIsMergedWithParent : 1;	// 8 = 0x8
}
@property(assign, getter=isMerged) BOOL merged;	// G=0x34447dcd; S=0x34447df5; converted property
@property(assign, getter=isMergedWithParent) BOOL mergedWithParent;	// G=0x34447de1; S=0x34447e11; converted property
@property(retain) id parent;	// G=0x34439145; S=0x3443b33d; converted property
+ (id)defaultProperties;	// 0x34440d49
- (id)init;	// 0x3443b141
- (id)initWithDefaults;	// 0x3449c505
- (void)dealloc;	// 0x343c95cd
- (void)flatten;	// 0x3458e2e5
- (unsigned)hash;	// 0x344396b5
- (BOOL)isEqual:(id)equal;	// 0x34449059
// converted property getter: - (BOOL)isMerged;	// 0x34447dcd
- (BOOL)isMergedPropertyForSelector:(SEL)selector;	// 0x343d0465
// converted property getter: - (BOOL)isMergedWithParent;	// 0x34447de1
- (id)overrideForSelector:(SEL)selector;	// 0x343ccd35
// converted property getter: - (id)parent;	// 0x34439145
- (void)removeUnnecessaryOverrides;	// 0x34448159
// converted property setter: - (void)setMerged:(BOOL)merged;	// 0x34447df5
// converted property setter: - (void)setMergedWithParent:(BOOL)parent;	// 0x34447e11
// converted property setter: - (void)setParent:(id)parent;	// 0x3443b33d
- (void)setParent:(id)parent myRestrictedClass:(Class)aClass;	// 0x34447239
@end

