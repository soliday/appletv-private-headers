/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <NSObject.h> // Unknown library

@protocol MSMediaStreamDaemonDelegate;

@interface MSMediaStreamDaemon : NSObject {
@private
	id<MSMediaStreamDaemonDelegate> _delegate;	// 4 = 0x4
	int _busyCount;	// 8 = 0x8
	int _UIBusyCount;	// 12 = 0xc
}
@property(assign, nonatomic) id<MSMediaStreamDaemonDelegate> delegate;	// G=0x31c34429; S=0x31c34439; @synthesize=_delegate
- (id)_boundPublisherForPersonID:(id)personID;	// 0x31c327c5
- (id)_boundServerSideConfigManagerForPersonID:(id)personID;	// 0x31c32a29
- (id)_boundSharingManagerForPersonID:(id)personID;	// 0x31c32951
- (id)_boundSubscriberForPersonID:(id)personID;	// 0x31c32879
- (id)_findShareWithPersonID:(id)personID inArray:(id)array;	// 0x31c33701
- (void)_removeShareWithPersonID:(id)personID inArray:(id)array;	// 0x31c337b9
- (void)_setShares:(id)shares forPersonID:(id)personID;	// 0x31c3318d
- (void)abortAllActivityForPersonID:(id)personID;	// 0x31c32c35
- (void)computeHashForAsset:(id)asset personID:(id)anId;	// 0x31c330e5
// declared property getter: - (id)delegate;	// 0x31c34429
- (void)didExceedPublishQuotaForPersonID:(id)personID retryDate:(id)date;	// 0x31c343fd
- (void)didReceiveAuthenticationFailureForPersonID:(id)personID;	// 0x31c343ad
- (void)didReceiveAuthenticationSuccessForPersonID:(id)personID;	// 0x31c343d5
- (void)didReceiveNewServerSideConfigurationForPersonID:(id)personID;	// 0x31c33ec1
- (void)didReceiveNewShareState:(id)state oldShareState:(id)state2 forPersonID:(id)personID;	// 0x31c343a5
- (void)didReceiveServerSideConfigurationVersion:(id)version forPersonID:(id)personID;	// 0x31c33de1
- (BOOL)enqueueAssetCollection:(id)collection personID:(id)anId outError:(id *)error;	// 0x31c32e8d
- (void)forgetPersonID:(id)anId;	// 0x31c32d59
- (BOOL)hasOutstandingActivity;	// 0x31c32721
- (id)invitationFromPushNotificationUserInfo:(id)pushNotificationUserInfo outSourcePersonID:(id *)anId outTargetPersonID:(id *)anId3;	// 0x31c331bd
- (id)invitationStringsFromInvitation:(id)invitation targetPersonID:(id)anId;	// 0x31c331ed
- (BOOL)isBusy;	// 0x31c32575
- (BOOL)isInRetryState;	// 0x31c32779
- (void)modifyShare:(id)share forPersonID:(id)personID;	// 0x31c33649
- (id)nextActivityDate;	// 0x31c326c5
- (id)notificationStringsForShareStateTransitionOldShares:(id)shareStateTransitionOldShares newShares:(id)shares;	// 0x31c3383d
- (id)ownSubscribedStreamForPersonID:(id)personID;	// 0x31c3313d
- (BOOL)personIDHasOutstandingPublications:(id)publications;	// 0x31c32741
- (BOOL)personIDIsAcceptingInvitations:(id)invitations;	// 0x31c336a9
- (void)pollForSubscriptionUpdatesForPersonID:(id)personID;	// 0x31c32f19
- (void)pollForSubscriptionUpdatesTriggeredByPushNotification;	// 0x31c32f85
- (void)refreshServerSideConfigurationForPersonID:(id)personID;	// 0x31c33e99
- (void)refreshShareStatesForPersonID:(id)personID;	// 0x31c336d9
- (void)releaseBusy;	// 0x31c324c5
- (void)releasePowerAssertion;	// 0x31c343a1
- (void)releaseUIBusy;	// 0x31c32629
- (void)removeShare:(id)share forPersonID:(id)personID;	// 0x31c33679
- (void)resetSubscriberSyncForPersonID:(id)personID;	// 0x31c330bd
- (void)respondToInvitation:(id)invitation forPersonID:(id)personID accept:(BOOL)accept;	// 0x31c33619
- (void)retainBusy;	// 0x31c32419
- (void)retainPowerAssertion;	// 0x31c3439d
- (void)retainUIBusy;	// 0x31c3258d
- (void)retryOutstandingActivities;	// 0x31c32a65
- (void)sendInvitations:(id)invitations forPersonID:(id)personID;	// 0x31c335e9
- (id)serverSideConfigurationForPersonID:(id)personID;	// 0x31c33db9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x31c34439
- (id)sharesForPersonID:(id)personID;	// 0x31c33165
- (void)showInvitationFailureAlertForPersonID:(id)personID failures:(id)failures;	// 0x31c343a9
- (void)start;	// 0x31c33f55
- (void)stop;	// 0x31c33fb5
- (void)stopAllActivities;	// 0x31c32cf5
- (id)subscribedStreamsForPersonID:(id)personID;	// 0x31c33115
@end
