/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:34 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/dmd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol DMDEventStreamDispatcherRegistration <NSObject>
@property (nonatomic,readonly) BOOL alarms; 
@property (nonatomic,readonly) NSArray * distributedNotificationNames; 
@property (nonatomic,readonly) NSArray * notifyMatchingNotifications; 
@optional
-(BOOL)alarms;
-(void)handleAlarmWithIdentifier:(id)arg1;
-(void)handleDistributedNotificationWithName:(id)arg1 userInfo:(id)arg2;
-(void)handleNotifyMatchingNotificationWithName:(id)arg1;
-(NSArray *)distributedNotificationNames;
-(NSArray *)notifyMatchingNotifications;

@end

