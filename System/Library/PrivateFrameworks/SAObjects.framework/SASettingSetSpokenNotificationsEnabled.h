/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:25 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SASettingSetBool.h>

@class NSString, NSDate;

@interface SASettingSetSpokenNotificationsEnabled : SASettingSetBool

@property (nonatomic,copy) NSString * appBundleId; 
@property (nonatomic,copy) NSDate * timeToReEnable; 
+(id)setSpokenNotificationsEnabled;
+(id)setSpokenNotificationsEnabledWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setAppBundleId:(NSString *)arg1 ;
-(NSString *)appBundleId;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSDate *)timeToReEnable;
-(void)setTimeToReEnable:(NSDate *)arg1 ;
@end
