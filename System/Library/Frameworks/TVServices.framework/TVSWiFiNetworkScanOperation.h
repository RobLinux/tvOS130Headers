/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_semaphore;
@class NSObject, TVSWiFiInterface, NSString, NSUUID;

@interface TVSWiFiNetworkScanOperation : NSOperation {

	NSObject*<OS_dispatch_semaphore> _semaphore;
	TVSWiFiInterface* _interface;
	NSString* _networkName;
	NSUUID* _token;
	/*^block*/id _completion;

}

@property (nonatomic,copy,readonly) NSUUID * token;              //@synthesize token=_token - In the implementation block
@property (nonatomic,copy) id completion;                        //@synthesize completion=_completion - In the implementation block
+(id)_scanParametersForScanWithSSID:(id)arg1 ;
-(NSUUID *)token;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(void)cancel;
-(id)_interface;
-(void)main;
-(void)attemptScan;
-(void)operationCompletedWithResult:(id)arg1 error:(id)arg2 ;
-(id)initWithInterface:(id)arg1 networkName:(id)arg2 ;
-(BOOL)_isDirectedScan;
@end

