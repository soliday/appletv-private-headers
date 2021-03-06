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
@property(readonly, assign, nonatomic) NSArray *actions;	// G=0x327f1579; 
@property(readonly, assign, nonatomic) NSNumber *failureType;	// G=0x327f1d35; 
@property(readonly, assign, nonatomic) NSArray *pingURLs;	// G=0x327f1e09; 
@property(readonly, assign, nonatomic) NSDictionary *responseDictionary;	// G=0x327f2201; @synthesize=_dictionary
@property(readonly, assign, nonatomic, getter=isSupportedProtocolVersion) BOOL supportedProtocolVersion;	// G=0x327f1d51; 
@property(readonly, assign, nonatomic) NSURL *versionMismatchURL;	// G=0x327f1f5d; 
- (id)init;	// 0x327f1405
- (id)initWithResponseDictionary:(id)responseDictionary;	// 0x327f1419
- (id)_copyAccount;	// 0x327f2021
- (id)_valueForProtocolKey:(id)protocolKey;	// 0x327f21ad
// declared property getter: - (id)actions;	// 0x327f1579
- (id)actionsWithActionType:(id)actionType;	// 0x327f1c39
- (id)copyWithZone:(NSZone *)zone;	// 0x327f1505
- (void)dealloc;	// 0x327f14b9
// declared property getter: - (id)failureType;	// 0x327f1d35
// declared property getter: - (BOOL)isSupportedProtocolVersion;	// 0x327f1d51
// declared property getter: - (id)pingURLs;	// 0x327f1e09
// declared property getter: - (id)responseDictionary;	// 0x327f2201
// declared property getter: - (id)versionMismatchURL;	// 0x327f1f5d
@end

