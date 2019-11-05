/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTDelegatePackage;
@class NSString, MTEventHandlers, MTUtils, MTConfig, MTSystem;

@interface MTMetricsKitTemplate : NSObject {

	NSString* _topic;
	MTEventHandlers* _eventHandlers;
	MTUtils* _utils;
	MTConfig* _config;
	MTSystem* _system;
	id<MTDelegatePackage> _delegatePackage;

}

@property (nonatomic,retain) NSString * topic;                                   //@synthesize topic=_topic - In the implementation block
@property (nonatomic,retain) MTConfig * config;                                  //@synthesize config=_config - In the implementation block
@property (nonatomic,retain) MTEventHandlers * eventHandlers;                    //@synthesize eventHandlers=_eventHandlers - In the implementation block
@property (nonatomic,retain) MTSystem * system;                                  //@synthesize system=_system - In the implementation block
@property (nonatomic,retain) MTUtils * utils;                                    //@synthesize utils=_utils - In the implementation block
@property (nonatomic,retain) id<MTDelegatePackage> delegatePackage;              //@synthesize delegatePackage=_delegatePackage - In the implementation block
-(void)setTopic:(NSString *)arg1 ;
-(MTConfig *)config;
-(NSString *)topic;
-(void)setConfig:(MTConfig *)arg1 ;
-(MTSystem *)system;
-(id)initWithTopic:(id)arg1 delegatePackage:(id)arg2 ;
-(MTEventHandlers *)eventHandlers;
-(id)initWithTopic:(id)arg1 ;
-(void)setEventHandlers:(MTEventHandlers *)arg1 ;
-(void)setUtils:(MTUtils *)arg1 ;
-(id<MTDelegatePackage>)delegatePackage;
-(MTUtils *)utils;
-(void)setSystem:(MTSystem *)arg1 ;
-(void)setDelegatePackage:(id<MTDelegatePackage>)arg1 ;
@end
