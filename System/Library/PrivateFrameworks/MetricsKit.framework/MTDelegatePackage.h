/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTDelegatePackage <NSObject>
@property (nonatomic,readonly) id<MTConfigDelegate> configDelegate; 
@property (nonatomic,readonly) id<MTEventRecorderDelegate> eventRecorderDelegate; 
@property (nonatomic,readonly) id<MTEnvironmentDelegate> environmentDelegate; 
@required
-(id<MTConfigDelegate>)configDelegate;
-(id<MTEventRecorderDelegate>)eventRecorderDelegate;
-(id<MTEnvironmentDelegate>)environmentDelegate;

@end

