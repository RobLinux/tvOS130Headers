/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:07 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiPolicy/WiFiPolicy-Structs.h>
#import <WiFiPolicy/WFLoggerBase.h>

@protocol OS_os_log;
@class NSObject, NSMutableDictionary, NSString;

@interface WFLoggerOsLog : WFLoggerBase {

	CFStringRef _subSystem;
	CFStringRef _category;
	NSObject*<OS_os_log> _osLog;
	NSMutableDictionary* _profileSettings;
	unsigned long long _currentLevel;
	unsigned long long _logLifeSpanInDays;

}

@property (getter=getProfileFilePath,copy,readonly) NSString * profileFilePath; 
-(void)dealloc;
-(void)WFLog:(unsigned long long)arg1 privacy:(unsigned long long)arg2 message:(const char*)arg3 valist:(char*)arg4 ;
-(void)WFLog:(unsigned long long)arg1 privacy:(unsigned long long)arg2 cfStrMsg:(CFStringRef)arg3 ;
-(id)getLogLifespanInDays;
-(void)setLogLifespanInDays:(id)arg1 ;
-(unsigned long long)getLogPrivacy;
-(void)setLogPrivacy:(unsigned long long)arg1 ;
-(unsigned long long)getLogLevelEnable;
-(void)setLogLevelEnable:(unsigned long long)arg1 ;
-(unsigned long long)getLogLevelPersist;
-(void)setLogLevelPersist:(unsigned long long)arg1 ;
-(unsigned long long)getMaxFileSizeInMB;
-(void)setMaxSizeInKb:(unsigned long long)arg1 ;
-(void)stopWatchingLogFile;
-(id)init:(id)arg1 subSystem:(CFStringRef)arg2 category:(CFStringRef)arg3 logLifespanInDays:(unsigned long long)arg4 logLevel:(unsigned long long)arg5 logPrivacy:(unsigned long long)arg6 dispatchQueue:(id)arg7 ;
-(id)mapLogLevelEnum:(unsigned long long)arg1 ;
-(id)getProfileFilePath;
-(unsigned char)doesProfileExist:(id)arg1 ;
-(void)createOsLogProfile;
-(id)getLevelEnabled:(id)arg1 category:(id)arg2 ;
-(id)getLevelPersist:(id)arg1 category:(id)arg2 ;
-(id)getTtlDays:(id)arg1 category:(id)arg2 ;
-(id)getPrivacy:(id)arg1 category:(id)arg2 ;
-(unsigned char)convertLogLevel:(unsigned long long)arg1 ;
-(id)formatOsLogProfile:(id)arg1 levelEnabled:(id)arg2 levelPersist:(id)arg3 ttlDays:(id)arg4 privacy:(id)arg5 ;
-(unsigned char)writeDictToFile:(id)arg1 idStr:(id)arg2 ;
-(unsigned char)setTtlDays:(id)arg1 category:(id)arg2 value:(id)arg3 ;
-(unsigned char)setPrivacy:(id)arg1 category:(id)arg2 value:(id)arg3 ;
-(unsigned char)setLevelEnabled:(id)arg1 category:(id)arg2 value:(id)arg3 ;
-(unsigned long long)mapLogLevelStr:(id)arg1 ;
-(unsigned char)setLevelPersist:(id)arg1 category:(id)arg2 value:(id)arg3 ;
@end

