/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface MCDependencyManager : NSObject {
	NSMutableDictionary *_domainsDict;	// 4 = 0x4
	NSMutableDictionary *_orphansDict;	// 8 = 0x8
}
+ (void)_setDependencyFilePath:(id)path;	// 0x33b1701d
+ (id)sharedManager;	// 0x33b1705d
- (id)init;	// 0x33b16f91
- (void)_addOrphanParent:(id)parent forDomain:(id)domain;	// 0x33b17571
- (id)_domainsDict;	// 0x33b17a3d
- (id)_domainsDictionaryForDomain:(id)domain parent:(id)parent outParentsDict:(id *)dict outDependents:(id *)dependents;	// 0x33b17631
- (id)_init;	// 0x33b16fb9
- (void)_removeOrphanParent:(id)parent fromDomain:(id)domain;	// 0x33b174c1
- (void)addDependent:(id)dependent ofParent:(id)parent inDomain:(id)domain;	// 0x33b173c5
- (void)addDependent:(id)dependent ofParent:(id)parent inDomain:(id)domain reciprocalDomain:(id)domain4;	// 0x33b17225
- (void)commitChanges;	// 0x33b17775
- (void)dealloc;	// 0x33b17b41
- (id)dependentsOfParent:(id)parent inDomain:(id)domain;	// 0x33b170a5
- (id)orphanedParentsForDomain:(id)domain;	// 0x33b1749d
- (id)parentsInDomain:(id)domain;	// 0x33b171a9
- (void)removeDependent:(id)dependent fromParent:(id)parent inDomain:(id)domain;	// 0x33b17269
- (void)removeDependent:(id)dependent fromParent:(id)parent inDomain:(id)domain reciprocalDomain:(id)domain4;	// 0x33b171e1
- (void)removeParent:(id)parent fromDomain:(id)domain;	// 0x33b170d1
@end

