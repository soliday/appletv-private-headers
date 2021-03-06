/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSNumber, NSString;

@interface SAEmail : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSString *emailAddress;	// G=0x32f51af1; S=0x32f51b0d; 
@property(retain, nonatomic) NSNumber *favoriteFacetime;	// G=0x32f51b5d; S=0x32f51b79; 
@property(copy, nonatomic) NSString *label;	// G=0x32f51b95; S=0x32f51bb1; 
+ (id)email;	// 0x32f51a61
+ (id)emailWithDictionary:(id)dictionary context:(id)context;	// 0x32f51aa5
// declared property getter: - (id)emailAddress;	// 0x32f51af1
- (id)encodedClassName;	// 0x32f51a55
// declared property getter: - (id)favoriteFacetime;	// 0x32f51b5d
- (id)groupIdentifier;	// 0x32f51a45
// declared property getter: - (id)label;	// 0x32f51b95
// declared property setter: - (void)setEmailAddress:(id)address;	// 0x32f51b0d
// declared property setter: - (void)setFavoriteFacetime:(id)facetime;	// 0x32f51b79
// declared property setter: - (void)setLabel:(id)label;	// 0x32f51bb1
@end

