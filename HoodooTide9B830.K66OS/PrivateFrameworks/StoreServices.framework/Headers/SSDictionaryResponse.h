/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "StoreServices-Structs.h"
#import "NSCopying.h"

@class NSArray, NSURL, NSDictionary, NSNumber;

@interface SSDictionaryResponse : NSObject <NSCopying> {
@private
	NSDictionary *_dictionary;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *actions;	// G=0x30523579; 
@property(readonly, assign, nonatomic) NSNumber *failureType;	// G=0x30523d35; 
@property(readonly, assign, nonatomic) NSArray *pingURLs;	// G=0x30523e09; 
@property(readonly, assign, nonatomic) NSDictionary *responseDictionary;	// G=0x30524201; @synthesize=_dictionary
@property(readonly, assign, nonatomic, getter=isSupportedProtocolVersion) BOOL supportedProtocolVersion;	// G=0x30523d51; 
@property(readonly, assign, nonatomic) NSURL *versionMismatchURL;	// G=0x30523f5d; 
- (id)init;	// 0x30523405
- (id)initWithResponseDictionary:(id)responseDictionary;	// 0x30523419
- (id)_copyAccount;	// 0x30524021
- (id)_valueForProtocolKey:(id)protocolKey;	// 0x305241ad
// declared property getter: - (id)actions;	// 0x30523579
- (id)actionsWithActionType:(id)actionType;	// 0x30523c39
- (id)copyWithZone:(NSZone *)zone;	// 0x30523505
- (void)dealloc;	// 0x305234b9
// declared property getter: - (id)failureType;	// 0x30523d35
// declared property getter: - (BOOL)isSupportedProtocolVersion;	// 0x30523d51
// declared property getter: - (id)pingURLs;	// 0x30523e09
// declared property getter: - (id)responseDictionary;	// 0x30524201
// declared property getter: - (id)versionMismatchURL;	// 0x30523f5d
@end

