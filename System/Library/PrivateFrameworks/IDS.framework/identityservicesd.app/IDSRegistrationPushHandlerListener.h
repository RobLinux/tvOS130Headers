/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:53 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IDSRegistrationPushHandlerListener <NSObject>
@optional
-(void)handler:(id)arg1 pushTokenChanged:(id)arg2;
-(void)handler:(id)arg1 reregisterUserID:(id)arg2 style:(id)arg3 service:(id)arg4;
-(void)handler:(id)arg1 reloadBag:(id)arg2;
-(void)handler:(id)arg1 profileHandlesUpdated:(id)arg2 status:(id)arg3;
-(void)handler:(id)arg1 profile:(id)arg2 deviceUpdated:(id)arg3 service:(id)arg4;
-(void)handler:(id)arg1 flushCacheForURIs:(id)arg2;
-(void)handler:(id)arg1 requestedSysdiagnoseWithErrorCode:(id)arg2 serverErrorDetail:(id)arg3 userFacingMessage:(id)arg4;

@end
