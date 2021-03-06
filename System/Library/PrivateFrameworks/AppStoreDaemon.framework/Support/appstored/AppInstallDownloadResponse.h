/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AssetRequest, NSError, AIMDownloadEvent, CoordinatorPromiseDataConsumer;

@interface AppInstallDownloadResponse : NSObject {

	AssetRequest* _assetRequest;
	long long _installID;
	NSError* _error;
	AIMDownloadEvent* _event;
	long long _result;
	CoordinatorPromiseDataConsumer* _dataConsumer;

}

@property (readonly) AssetRequest * assetRequest;                                //@synthesize assetRequest=_assetRequest - In the implementation block
@property (readonly) long long installID;                                        //@synthesize installID=_installID - In the implementation block
@property (readonly) NSError * error;                                            //@synthesize error=_error - In the implementation block
@property (readonly) AIMDownloadEvent * event;                                   //@synthesize event=_event - In the implementation block
@property (readonly) long long result;                                           //@synthesize result=_result - In the implementation block
@property (readonly) CoordinatorPromiseDataConsumer * dataConsumer;              //@synthesize dataConsumer=_dataConsumer - In the implementation block
+(id)failInstallID:(long long)arg1 withError:(id)arg2 ;
+(id)continueInstallID:(long long)arg1 withDataConsumer:(id)arg2 assetRequest:(id)arg3 event:(id)arg4 ;
+(id)finishInstallID:(long long)arg1 ;
-(NSError *)error;
-(long long)result;
-(AIMDownloadEvent *)event;
-(CoordinatorPromiseDataConsumer *)dataConsumer;
-(long long)installID;
-(id)_initWithInstallID:(long long)arg1 result:(long long)arg2 dataConsumer:(id)arg3 assetRequest:(id)arg4 error:(id)arg5 event:(id)arg6 ;
-(AssetRequest *)assetRequest;
@end

