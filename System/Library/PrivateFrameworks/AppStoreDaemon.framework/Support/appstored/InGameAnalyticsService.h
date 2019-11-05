/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:47 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/appstored-Structs.h>
#import <appstored/ASDInGameAnalyticsServiceProtocol.h>

@interface InGameAnalyticsService : NSObject <ASDInGameAnalyticsServiceProtocol>
+(id)defaultService;
-(void)gamePlayDidBeginWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)gamePlayDidEndWithReason:(long long)arg1 andSessionID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)heartBeatForSessionID:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)_bundleIdentifierForCurrentConnection;
-(id)_copyExecutablePathForPID:(int)arg1 ;
-(CFBundleRef)_copyBundleForExecutablePath:(id)arg1 ;
-(CFDictionaryRef)_copyInfoDictionaryForExecutablePath:(id)arg1 ;
@end

