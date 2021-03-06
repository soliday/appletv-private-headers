/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "StoreServices-Structs.h"
#import "NSCopying.h"

@class SSOperationProgress;

@interface SSDownloadPhase : NSObject <NSCopying> {
@private
	SSOperationProgress *_operationProgress;	// 4 = 0x4
}
@property(readonly, assign) double estimatedSecondsRemaining;	// G=0x324c1a29; 
@property(readonly, assign) SSOperationProgress *operationProgress;	// G=0x324c1959; 
@property(readonly, assign) int phaseType;	// G=0x324c19fd; 
@property(readonly, assign) float progressChangeRate;	// G=0x324c19a9; 
@property(readonly, assign) int progressUnits;	// G=0x324c19d5; 
@property(readonly, assign) long long progressValue;	// G=0x324c1989; 
@property(readonly, assign) long long totalProgressValue;	// G=0x324c1969; 
- (id)init;	// 0x324c1ac9
- (id)initWithOperationProgress:(id)operationProgress;	// 0x324c1b91
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x324c1ae1
- (id)copyPropertyListEncoding;	// 0x324c1aa9
- (id)copyWithZone:(NSZone *)zone;	// 0x324c1a49
- (void)dealloc;	// 0x324c1b49
// declared property getter: - (double)estimatedSecondsRemaining;	// 0x324c1a29
// declared property getter: - (id)operationProgress;	// 0x324c1959
// declared property getter: - (int)phaseType;	// 0x324c19fd
// declared property getter: - (float)progressChangeRate;	// 0x324c19a9
// declared property getter: - (int)progressUnits;	// 0x324c19d5
// declared property getter: - (long long)progressValue;	// 0x324c1989
// declared property getter: - (long long)totalProgressValue;	// 0x324c1969
@end

