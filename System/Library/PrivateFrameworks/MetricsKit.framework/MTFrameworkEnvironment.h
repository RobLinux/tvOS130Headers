/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MTFrameworkEnvironment : NSObject
+(void)initialize;
+(id)sharedEnvironment;
+(void)setSharedEnvironment:(id)arg1 ;
+(void)withEnvironment:(id)arg1 execute:(/*^block*/id)arg2 ;
-(id)date;
-(id)valueForEntitlement:(id)arg1 ;
-(BOOL)isStandardEnvironment;
@end

