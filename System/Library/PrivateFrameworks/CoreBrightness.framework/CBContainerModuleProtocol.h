/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:59 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CBContainerModuleProtocol <NSObject>
@required
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2;
-(void)start;
-(void)stop;
-(id)copyPropertyForKey:(id)arg1;
-(void)registerNotificationBlock:(/*^block*/id)arg1;
-(void)unregisterNotificationBlock;
-(id)copyPropertyForKey:(id)arg1 withParameter:(id)arg2;
-(void)handleNotificationForKey:(id)arg1 withProperty:(id)arg2;

@end
