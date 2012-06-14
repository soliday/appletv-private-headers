/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "PFUbiquityBaselineOperation.h"

@class NSObject;
@protocol PFUbiquityBaselineRollOperationDelegate;

__attribute__((visibility("hidden")))
@interface PFUbiquityBaselineRollOperation : PFUbiquityBaselineOperation {
}
@property(assign) NSObject<PFUbiquityBaselineRollOperationDelegate> *delegate;	// G=0x3636fb09; S=0x3636eb75; 
// declared property getter: - (id)delegate;	// 0x3636fb09
- (BOOL)haveConsistentStateForBaselineRoll;	// 0x3636f5c9
- (BOOL)isEqual:(id)equal;	// 0x3636f9a9
- (void)main;	// 0x3636eba1
- (BOOL)rollBaselineWithError:(id *)error;	// 0x3636ee51
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3636eb75
@end

