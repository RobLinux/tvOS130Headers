/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceTrigger/VTEventMonitor.h>

@interface VTLanguageCodeUpdateMonitor : VTEventMonitor {

	int _notifyToken;

}
+(id)sharedInstance;
-(id)init;
-(void)_stopMonitoring;
-(void)_notifyObserver:(id)arg1 withLanguageCode:(id)arg2 ;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)_didReceiveLanguageCodeUpdate;
@end

