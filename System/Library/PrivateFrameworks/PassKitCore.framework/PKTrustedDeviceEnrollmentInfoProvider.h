/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:01 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PKXPCService;

@interface PKTrustedDeviceEnrollmentInfoProvider : NSObject {

	PKXPCService* _remoteService;

}
-(id)init;
-(id)_remoteObjectProxy;
-(id)_remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)_remoteObjectProxyWithFailureHandler:(/*^block*/id)arg1 ;
-(id)_existingRemoteObjectProxy;
-(void)trustedDeviceEnrollmentInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)trustedDeviceEnrollmentSignatureForDevice:(unsigned long long)arg1 accountDSID:(id)arg2 sessionData:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

