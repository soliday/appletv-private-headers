/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface EDTokenTree : NSObject {
}
+ (id)buildSubtree:(unsigned)subtree formula:(id)formula;	// 0x312b869d
+ (id)buildSubtreeAtIndex:(unsigned *)index formula:(id)formula;	// 0x312b86e5
+ (unsigned)childCountForToken:(unsigned)token formula:(id)formula;	// 0x312b8889
+ (bool)isTokenAttrASum:(unsigned short)sum;	// 0x31340e01
+ (bool)isTokenNoOp:(unsigned)op formula:(id)formula;	// 0x312b8a59
@end

