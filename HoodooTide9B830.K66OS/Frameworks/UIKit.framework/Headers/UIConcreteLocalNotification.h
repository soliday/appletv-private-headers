/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UILocalNotification.h"
#import "UIKit-Structs.h"

@class NSData, NSTimeZone, NSString, NSCalendar, NSDate;

__attribute__((visibility("hidden")))
@interface UIConcreteLocalNotification : UILocalNotification {
@private
	NSDate *fireDate;	// 4 = 0x4
	NSTimeZone *timeZone;	// 8 = 0x8
	unsigned repeatInterval;	// 12 = 0xc
	NSCalendar *repeatCalendar;	// 16 = 0x10
	int totalRepeatCount;	// 20 = 0x14
	int remainingRepeatCount;	// 24 = 0x18
	NSString *alertBody;	// 28 = 0x1c
	BOOL hasAction;	// 32 = 0x20
	NSString *alertAction;	// 36 = 0x24
	NSString *alertLaunchImage;	// 40 = 0x28
	NSString *soundName;	// 44 = 0x2c
	int applicationIconBadgeNumber;	// 48 = 0x30
	NSData *userInfoData;	// 52 = 0x34
	BOOL hideAlertTitle;	// 56 = 0x38
	BOOL allowSnooze;	// 57 = 0x39
	BOOL soundNameIsARingtone;	// 58 = 0x3a
	BOOL interruptAudioAndLockDevice;	// 59 = 0x3b
	BOOL resumeApplicationInBackground;	// 60 = 0x3c
	BOOL fireNotificationsWhenAppRunning;	// 61 = 0x3d
	BOOL showAlarmStatusBarItem;	// 62 = 0x3e
	NSString *customLockSliderLabel;	// 64 = 0x40
	BOOL isSystemAlert;	// 68 = 0x44
}
@property(retain) NSString *alertAction;	// G=0x3034fb71; S=0x3034fb81; converted property
@property(retain) NSString *alertBody;	// G=0x3034fb1d; S=0x3034fb2d; converted property
@property(retain) NSString *alertLaunchImage;	// G=0x3034fba5; S=0x3034fbb5; converted property
@property(assign) BOOL allowSnooze;	// G=0x3034fc7d; S=0x3034fc8d; converted property
@property(assign) int applicationIconBadgeNumber;	// G=0x3034fc0d; S=0x3034fc1d; converted property
@property(retain) NSString *customLockSliderLabel;	// G=0x3034fd3d; S=0x3034fd4d; converted property
@property(retain) NSDate *fireDate;	// G=0x3034fa61; S=0x3034fa71; converted property
@property(assign) BOOL fireNotificationsWhenAppRunning;	// G=0x3034fcfd; S=0x3034fd0d; converted property
@property(assign) BOOL hasAction;	// G=0x3034fb51; S=0x3034fb61; converted property
@property(assign) BOOL hideAlertTitle;	// G=0x3034fc5d; S=0x3034fc6d; converted property
@property(assign) BOOL interruptAudioAndLockDevice;	// G=0x3034fcbd; S=0x3034fccd; converted property
@property(assign) BOOL isSystemAlert;	// G=0x3034fd71; S=0x3034fd81; converted property
@property(assign) int remainingRepeatCount;	// G=0x3034fc3d; S=0x3034fc4d; converted property
@property(retain) NSCalendar *repeatCalendar;	// G=0x3034fae9; S=0x3034faf9; converted property
@property(assign) unsigned repeatInterval;	// G=0x3034fac9; S=0x3034fad9; converted property
@property(assign) BOOL resumeApplicationInBackground;	// G=0x3034fcdd; S=0x3034fced; converted property
@property(assign) BOOL showAlarmStatusBarItem;	// G=0x3034fd1d; S=0x3034fd2d; converted property
@property(retain) NSString *soundName;	// G=0x3034fbd9; S=0x3034fbe9; converted property
@property(assign) BOOL soundNameIsARingtone;	// G=0x3034fc9d; S=0x3034fcad; converted property
@property(retain) NSTimeZone *timeZone;	// G=0x3034fa95; S=0x3034faa5; converted property
@property(assign) int totalRepeatCount;	// G=0x3034fc2d; S=0x3034db25; converted property
@property(retain) id userInfo;	// G=0x3034ee45; S=0x3034ed01; converted property
- (id)init;	// 0x3034db45
- (id)initWithCoder:(id)coder;	// 0x3034dc89
- (void)_setUserInfoData:(id)data;	// 0x3034ecc1
// converted property getter: - (id)alertAction;	// 0x3034fb71
// converted property getter: - (id)alertBody;	// 0x3034fb1d
// converted property getter: - (id)alertLaunchImage;	// 0x3034fba5
// converted property getter: - (BOOL)allowSnooze;	// 0x3034fc7d
// converted property getter: - (int)applicationIconBadgeNumber;	// 0x3034fc0d
- (void)clearNonSystemProperties;	// 0x3034f9c9
- (int)compareFireDates:(id)dates;	// 0x3034ec21
- (id)copyWithZone:(NSZone *)zone;	// 0x3034e435
// converted property getter: - (id)customLockSliderLabel;	// 0x3034fd3d
- (void)dealloc;	// 0x3034db9d
- (id)description;	// 0x3034eec1
- (void)encodeWithCoder:(id)coder;	// 0x3034e129
// converted property getter: - (id)fireDate;	// 0x3034fa61
// converted property getter: - (BOOL)fireNotificationsWhenAppRunning;	// 0x3034fcfd
// converted property getter: - (BOOL)hasAction;	// 0x3034fb51
- (unsigned)hash;	// 0x3034ebd1
// converted property getter: - (BOOL)hideAlertTitle;	// 0x3034fc5d
// converted property getter: - (BOOL)interruptAudioAndLockDevice;	// 0x3034fcbd
- (BOOL)isEqual:(id)equal;	// 0x3034e735
// converted property getter: - (BOOL)isSystemAlert;	// 0x3034fd71
- (BOOL)isValid;	// 0x3034f959
- (id)nextFireDateAfterDate:(id)date localTimeZone:(id)zone;	// 0x3034f2c9
- (id)nextFireDateForLastFireDate:(id)lastFireDate;	// 0x3034f209
// converted property getter: - (int)remainingRepeatCount;	// 0x3034fc3d
// converted property getter: - (id)repeatCalendar;	// 0x3034fae9
// converted property getter: - (unsigned)repeatInterval;	// 0x3034fac9
// converted property getter: - (BOOL)resumeApplicationInBackground;	// 0x3034fcdd
// converted property setter: - (void)setAlertAction:(id)action;	// 0x3034fb81
// converted property setter: - (void)setAlertBody:(id)body;	// 0x3034fb2d
// converted property setter: - (void)setAlertLaunchImage:(id)image;	// 0x3034fbb5
// converted property setter: - (void)setAllowSnooze:(BOOL)snooze;	// 0x3034fc8d
// converted property setter: - (void)setApplicationIconBadgeNumber:(int)number;	// 0x3034fc1d
// converted property setter: - (void)setCustomLockSliderLabel:(id)label;	// 0x3034fd4d
// converted property setter: - (void)setFireDate:(id)date;	// 0x3034fa71
// converted property setter: - (void)setFireNotificationsWhenAppRunning:(BOOL)running;	// 0x3034fd0d
// converted property setter: - (void)setHasAction:(BOOL)action;	// 0x3034fb61
// converted property setter: - (void)setHideAlertTitle:(BOOL)title;	// 0x3034fc6d
// converted property setter: - (void)setInterruptAudioAndLockDevice:(BOOL)device;	// 0x3034fccd
// converted property setter: - (void)setIsSystemAlert:(BOOL)alert;	// 0x3034fd81
// converted property setter: - (void)setRemainingRepeatCount:(int)count;	// 0x3034fc4d
// converted property setter: - (void)setRepeatCalendar:(id)calendar;	// 0x3034faf9
// converted property setter: - (void)setRepeatInterval:(unsigned)interval;	// 0x3034fad9
// converted property setter: - (void)setResumeApplicationInBackground:(BOOL)background;	// 0x3034fced
// converted property setter: - (void)setShowAlarmStatusBarItem:(BOOL)item;	// 0x3034fd2d
// converted property setter: - (void)setSoundName:(id)name;	// 0x3034fbe9
// converted property setter: - (void)setSoundNameIsARingtone:(BOOL)ringtone;	// 0x3034fcad
// converted property setter: - (void)setTimeZone:(id)zone;	// 0x3034faa5
// converted property setter: - (void)setTotalRepeatCount:(int)count;	// 0x3034db25
// converted property setter: - (void)setUserInfo:(id)info;	// 0x3034ed01
// converted property getter: - (BOOL)showAlarmStatusBarItem;	// 0x3034fd1d
// converted property getter: - (id)soundName;	// 0x3034fbd9
// converted property getter: - (BOOL)soundNameIsARingtone;	// 0x3034fc9d
// converted property getter: - (id)timeZone;	// 0x3034fa95
// converted property getter: - (int)totalRepeatCount;	// 0x3034fc2d
// converted property getter: - (id)userInfo;	// 0x3034ee45
@end
