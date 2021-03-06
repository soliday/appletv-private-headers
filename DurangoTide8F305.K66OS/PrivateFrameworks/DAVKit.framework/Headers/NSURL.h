/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

#import <NSURL.h> // Unknown library


@interface NSURL (DAVAdditions)
+ (id)URLWithDirtyString:(id)dirtyString;	// 0x30082ed9
+ (id)URLWithScheme:(id)scheme host:(id)host port:(int)port uri:(id)uri;	// 0x30082c91
+ (int)classicPortForScheme:(id)scheme;	// 0x30082f19
- (id)initWithDirtyString:(id)dirtyString;	// 0x30083b69
- (id)initWithScheme:(id)scheme host:(id)host port:(int)port uri:(id)uri;	// 0x30082b61
- (id)URLWithUsername:(id)username;	// 0x30083135
- (id)URLWithoutPassword;	// 0x30082df1
- (id)URLWithoutUsername;	// 0x30082e31
- (id)uri;	// 0x300835a5
@end

