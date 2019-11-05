/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:01 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/DevicePINController.h>

@interface PSRestrictionsPINController : DevicePINController
+(BOOL)settingEnabled;
-(id)init;
-(void)setPIN:(id)arg1 ;
-(CFStringRef)defaultsID;
-(BOOL)validatePIN:(id)arg1 ;
-(BOOL)isNumericPIN;
-(CFStringRef)failedAttemptsKey;
-(CFStringRef)blockTimeIntervalKey;
-(CFStringRef)blockedStateKey;
-(id)stringsBundle;
-(BOOL)simplePIN;
-(int)pinLength;
-(BOOL)pinIsAcceptable:(id)arg1 outError:(id*)arg2 ;
-(id)pinInstructionsPromptFont;
@end

