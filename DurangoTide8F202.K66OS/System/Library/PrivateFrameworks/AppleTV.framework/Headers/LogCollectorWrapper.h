/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface LogCollectorWrapper : NSObject {
}
+ (void)cleanUp;	// 0x3385d08c
+ (id)instance;	// 0x3385efe0
+ (void)startUp;	// 0x3385d02c
- (id)init;	// 0x3385d120
- (void)cdnSelected:(long long)selected selcdnname:(id)selcdnname selcdnbw:(long long)selcdnbw;	// 0x3385e004
- (void)cdnSelectionForPlaylistGeneration:(id)playlistGeneration;	// 0x3385ed40
- (void)cleanUp;	// 0x3385d060
- (void)dealloc;	// 0x3385d0e4
- (void)downloadRequestResults:(BOOL)results dltype:(basic_string<char,std::char_traits<char>,std::allocator<char> > *)dltype dlid:(long long)dlid url1:(basic_string<char,std::char_traits<char>,std::allocator<char> > *)a1 url2:(basic_string<char,std::char_traits<char>,std::allocator<char> > *)a2 cdnid:(long long)cdnid ip1:(basic_string<char,std::char_traits<char>,std::allocator<char> > *)a17 ip2:(basic_string<char,std::char_traits<char>,std::allocator<char> > *)a28 rtt1:(long long)a19 rtt2:(long long)a210 range:(basic_string<char,std::char_traits<char>,std::allocator<char> > *)range tresp:(long long)tresp brecv:(long long)brecv trecv:(long long)trecv httpcode:(long long)httpcode sslerr:(unsigned long)sslerr nwerr:(basic_string<char,std::char_traits<char>,std::allocator<char> > *)nwerr;	// 0x3385dafc
- (void)endPlaybackSession:(int)session reason:(id)reason;	// 0x3385e590
- (void)loadNewPlaylistFile:(long long)file vdlid:(long long)vdlid;	// 0x3385e10c
- (void)logErrorMessageOnce:(id)once;	// 0x3385d414
- (void)logRegisterSession:(id)session;	// 0x3385e848
- (void)logRegisterSessionFailed:(long long)failed withNccpErr:(long long)nccpErr;	// 0x3385e760
- (void)nccpTransactionsForPlaylistGeneration:(id)playlistGeneration;	// 0x3385d15c
- (void)networkSelection:(const char *)selection netspec:(const char *)netspec mcc:(const char *)mcc mnc:(const char *)mnc carrier:(const char *)carrier;	// 0x3385de40
- (void)networkSelectionBasedOnLastKnownCurrent;	// 0x3385dd74
- (void)periodicReport;	// 0x3385ead4
- (void)playbackDidPause:(int)playback;	// 0x3385d8dc
- (void)playbackDidSeeking:(int)playback;	// 0x3385d800
- (void)playbackDisrupted:(int)disrupted;	// 0x3385dc98
- (void)playbackProgress:(int)progress;	// 0x3385d724
- (void)playlistGenerated:(id)generated;	// 0x3385d250
- (void)screenSelection:(int)selection;	// 0x3385df30
- (void)sendCrashReport:(id)report report:(id)report2;	// 0x3385d5d4
- (void)sendErrorMessage:(id)message;	// 0x3385ee50
- (BOOL)sessionOpened;	// 0x3385d344
- (void)startBuffering;	// 0x3385ea08
- (void)startOrResumePlayCancelled;	// 0x3385e1f4
- (void)startOrResumePlayFailed:(int)failed withNccpErr:(int)nccpErr withHttpErr:(long long)httpErr withNWErr:(id)nwerr withErrorMsg:(id)errorMsg;	// 0x3385e2c0
- (void)startOrResumePlaybackSucceded:(int)succeded nccpat:(long long)nccpat nccplt:(long long)nccplt nccpmdt:(long long)nccpmdt nccpudt:(long long)nccpudt cdnt:(long long)cdnt plt:(long long)plt;	// 0x3385d9b8
- (void)startPlaybackSession:(long long)session;	// 0x3385ec6c
- (void)timerTick;	// 0x3385eba0
@end

